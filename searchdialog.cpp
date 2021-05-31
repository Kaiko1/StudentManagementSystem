#include "searchdialog.h"
#include "ui_searchdialog.h"
#include "mainwindow.h";
#include "common.h"

SearchDialog::SearchDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchDialog)
{
    ui->setupUi(this);
}

SearchDialog::~SearchDialog()
{
    delete ui;
}

void SearchDialog::initUi()
{
    // clean window
    ui->student_tableWidget->clear();
    ui->student_tableWidget->setRowCount(0);
    ui->id_textEdit->clear();
    ui->name_textEdit->clear();
    ui->gender_comboBox->clear();
    ui->major_comboBox->clear();

    // fill combo Box
    QSqlQuery query;
    query.exec(QString("SELECT name FROM major"));
    ui->major_comboBox->addItem(QString(""));
    while(query.next()){
        ui->major_comboBox->addItem(QString(query.value(0).toString()));
    }
    ui->gender_comboBox->addItem(QString(""));
    ui->gender_comboBox->addItem(QString("male"));
    ui->gender_comboBox->addItem(QString("female"));
}

void SearchDialog::on_search_pushButton_clicked()
{
    QSqlQuery query;
    QString sql = "SELECT s.id, s.name, s.gender, m.name major, m.course FROM students s, major m WHERE s.major_id = m.id";

    QString id = ui->id_textEdit->toPlainText();

    if(id != "")
    {
        sql += QString(" AND s.id = \"%1\"").arg(id);
        query.exec(sql);
    }
    else
    {
        QString name = ui->name_textEdit->toPlainText(),
                gender = ui->gender_comboBox->currentText(),
                major = ui->major_comboBox->currentText();

        if(name != ""){
            sql += QString(" AND s.name = \"%1\"").arg(name);
        }

        if(gender != ""){
            sql += QString(" AND s.gender = \"%1\"").arg(gender);
        }

        if(major != ""){
            sql += QString(" AND m.name = \"%1\"").arg(major);
        }
        query.exec(sql);
    }

    if(query.size() == 0)
    {
        QMessageBox::information(this, "Note", "No matching student information");
        return;
    }

    int row = 0;
    while(query.next()){
        ui->student_tableWidget->setRowCount(row + 1);
        for (int i = 0; i < 5; i++){
            ui->student_tableWidget->setItem(row, i, new QTableWidgetItem(query.value(i).toString()));
        }
        row++;
    }
}

