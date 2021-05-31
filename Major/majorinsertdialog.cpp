#include "majorinsertdialog.h"
#include "ui_majorinsertdialog.h"
#include "majordialog.h"
#include <QSqlQuery>

MajorInsertDialog::MajorInsertDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MajorInsertDialog)
{
    ui->setupUi(this);
}

MajorInsertDialog::~MajorInsertDialog()
{
    delete ui;
}

void MajorInsertDialog::initUi()
{
    ui->course_lineEdit->clear();
    ui->major_lineEdit->clear();
}

void MajorInsertDialog::on_ok_pushButton_clicked()
{
    if(ui->major_lineEdit->text().isEmpty() || ui->course_lineEdit->text().isEmpty())
    {
        QMessageBox::information(this, "Note", "Please input complete major information");
    }

    // insert data
    QSqlQuery query;
    QString major = ui->major_lineEdit->text(), course = ui->course_lineEdit->text();
    QString sql = QString("INSERT INTO major (id, name, course) VALUES (NULL, \"%1\", \"%2\")").arg(major, course);
    query.exec(sql);

    // check the major insertion was successful and get major_id for redo sql.
    QString id;
    sql = QString("SELECT id FROM major WHERE name = \"%1\"").arg(major);
    query.exec(sql);
    if(query.next())
    {
        id = query.value(0).toString();
    }
    else
    {
        QMessageBox::information(this, "Note", "Add failed");
        return;
    }

    if(query.numRowsAffected() > 0)
    {
        QMessageBox::information(this, "Note", "Added successfully");
        sql = QString("INSERT INTO major (id, name, course) VALUES (\"%1\", \"%2\", \"%3\")").arg(id, major, course);
        QString undoSql = QString("DELETE FROM major WHERE name = \"%1\"").arg(major);
        MajorDialog::addLogItem(sql, undoSql);
        emit MajorInsertDialog::refreshMajor();
    }
    else
    {
        QMessageBox::information(this, "Note", "Add failed");
    }
    this->close();
}


void MajorInsertDialog::on_cancel_pushButton_clicked()
{
    this->close();
}
