#include "insertdialog.h"
#include "ui_insertdialog.h"
#include "mainwindow.h"
#include <QSqlQuery>
#include "vector"

InsertDialog::InsertDialog() :
    ui(new Ui::InsertDialog)
{
    ui->setupUi(this);
}

InsertDialog::~InsertDialog()
{
    delete ui;
}

void InsertDialog::initUi()
{
    // clean window
    ui->id_lineEdit->clear();
    ui->name_lineEdit->clear();
    ui->gender_comboBox->clear();
    ui->major_comboBox->clear();

    // fill combo box
    QSqlQuery query;
    query.exec(QString("SELECT name FROM major"));
    while(query.next()){
        ui->major_comboBox->addItem(QString(query.value(0).toString()));
    }
    ui->gender_comboBox->addItem(QString("male"));
    ui->gender_comboBox->addItem(QString("female"));
}

void InsertDialog::on_ok_pushButton_clicked()
{
    if(ui->id_lineEdit->text().isEmpty() || ui->name_lineEdit->text().isEmpty() ||
            ui->gender_comboBox->currentText().isEmpty() || ui->major_comboBox->currentText().isEmpty())
    {
        QMessageBox::information(this, "Note", "Please input the student's complete information");
    }
    else
    {
        QSqlQuery query;
        QString id = ui->id_lineEdit->text(), name = ui->name_lineEdit->text(),
                gender = ui->gender_comboBox->currentText(), major = ui->major_comboBox->currentText();

        if(!verifyID(id))
        {
            QMessageBox::information(this, "Note", "Student ID is invalid");
            return;
        }

        // insert data
        QString sql = QString("INSERT INTO students (id, name, gender, major_id)VALUES(\"%1\",\"%2\",\"%3\",(SELECT id FROM major WHERE name = \"%4\"))").arg(id, name, gender, major);
        query.exec(sql);
        if(query.numRowsAffected() > 0)
        {
            QString undoSql = QString("DELETE FROM students WHERE id = %1").arg(id);
            MainWindow::addLogItem(sql, undoSql);
            QMessageBox::information(this, "success", "Added successfully");
        }
        else
        {
            QMessageBox::information(this, "fail", "Add failed");
        }
        emit InsertDialog::refreshMainWindow();
    }
}

void InsertDialog::on_cancel_pushButton_clicked()
{
    this->close();
}
