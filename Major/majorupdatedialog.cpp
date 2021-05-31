#include "majorupdatedialog.h"
#include "ui_majorupdatedialog.h"
#include "majordialog.h"
#include "QSqlQuery"

MajorUpdateDialog::MajorUpdateDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MajorUpdateDialog)
{
    ui->setupUi(this);
}

MajorUpdateDialog::~MajorUpdateDialog()
{
    delete ui;
}

void MajorUpdateDialog::initUi()
{
    ui->ori_major_lineEdit->clear();
    ui->new_course_lineEdit->clear();
    ui->new_major_lineEdit->clear();
}

void MajorUpdateDialog::on_ok_pushButton_clicked()
{
    QSqlQuery query;
    QString oriMajor = ui->ori_major_lineEdit->text(), newMajor = ui->new_major_lineEdit->text(),
            newCourse = ui->new_course_lineEdit->text();
    QString oriMajorID, oriCourse;

    // ensure major exist and get major info for undo sql
    QString sql = QString("SELECT * FROM major WHERE name = \"%1\"").arg(oriMajor);
    query.exec(sql);
    if(query.next())
    {
        oriMajorID = query.value(0).toString();
        oriCourse = query.value(2).toString();
    }

    // update data
    sql = QString("UPDATE major SET name = \"%1\", course = \"%2\" WHERE name = \"%3\"").arg(newMajor, newCourse, oriMajor);
    query.exec(sql);
    if(query.numRowsAffected() > 0)
    {
        QString undoSql = QString("UPDATE major SET name = \"%1\", course = \"%2\" WHERE id = %3").arg(oriMajor, oriCourse, oriMajorID);
        MajorDialog::addLogItem(sql, undoSql);
        emit MajorUpdateDialog::refreshMajor();
        QMessageBox::information(this, "Note", "Updated successfully");
    }
    else
    {
        QMessageBox::information(this, "Note", "Update failed");
    }
}

void MajorUpdateDialog::on_cancel_pushButton_clicked()
{
    this->close();
}

