#include "updatedialog.h"
#include "ui_updatedialog.h"
#include "mainwindow.h"
#include "common.h"

UpdateDialog::UpdateDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UpdateDialog)
{
    ui->setupUi(this);
}

UpdateDialog::~UpdateDialog()
{
    delete ui;
}

void UpdateDialog::initUi()
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

void UpdateDialog::on_ok_pushButton_clicked()
{
    QSqlQuery query;
    QString id = ui->id_lineEdit->text(),
            gender = ui->gender_comboBox->currentText(),
            name = ui->name_lineEdit->text(),
            major = ui->major_comboBox->currentText();

    QString undoName, undoGender, undoMajorID;

    if(!verifyID(id))
    {
        QMessageBox::information(this, "Note", "Student ID is invalid");
        return;
    }

    // ensure student ID exist and get student info for undo sql
    QString sql = QString("SELECT * FROM students WHERE id = \"%1\"").arg(id);
    query.exec(sql);
    if(query.next())
    {
        undoName = query.value(1).toString();
        undoGender = query.value(2).toString();
        undoMajorID = query.value(3).toString();
    }
    else
    {
        QMessageBox::information(this, "Note", "Student ID not exists");
        return;
    }

    // update data
    sql = QString("UPDATE students SET name = \"%1\", gender = \"%2\", major_id = (SELECT id FROM major WHERE name = \"%3\") WHERE id = \"%4\"").arg(name, gender, major, id);
    query.exec(sql);
    if(query.numRowsAffected() > 0)
    {
        QString undoSql = QString("UPDATE students SET name = \"%1\", gender = \"%2\", major_id = \"%3\" WHERE id = \"%4\"").arg(undoName, undoGender, undoMajorID, id);
        MainWindow::addLogItem(sql, undoSql);
        emit UpdateDialog::refreshMainWindow();
        QMessageBox::information(this, "Note", "Updated successfully");
    }
    else
    {
        QMessageBox::information(this, "Note", "Update failed");
    }
}

void UpdateDialog::on_cancel_pushButton_clicked()
{
    this->close();
}
