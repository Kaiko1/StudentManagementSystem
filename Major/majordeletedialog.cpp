#include "majordeletedialog.h"
#include "ui_majordeletedialog.h"
#include "majordialog.h"
#include "QSqlQuery"

MajorDeleteDialog::MajorDeleteDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MajorDeleteDialog)
{
    ui->setupUi(this);
}

MajorDeleteDialog::~MajorDeleteDialog()
{
    delete ui;
}

void MajorDeleteDialog::initUi()
{
    ui->major_lineEdit->clear();
}

void MajorDeleteDialog::on_ok_pushButton_clicked()
{
    QSqlQuery query;
    QString major = ui->major_lineEdit->text();
    QString majorID = "", course = "";
    if(major == "")
    {
        QMessageBox::information(this, "Note", "Major can't be empty");
    }

    // ensure major exist and get major info for undo sql
    QString sql = QString("SELECT * FROM major WHERE name = \"%1\"").arg(major);
    query.exec(sql);
    if(query.next())
    {
        majorID = query.value(0).toString();
        course = query.value(2).toString();
    }
    else
    {
        QMessageBox::information(this, "Note", "Major not exists");
        return;
    }

    // delete data
    sql = QString("DELETE FROM major WHERE name = \"%1\"").arg(major);
    query.exec(sql);

    if(query.numRowsAffected() > 0)
    {
        QMessageBox::information(this, "Note", "Deleted successfully");
        QString undoSql = QString("INSERT INTO major (id, name, course)VALUES(%1, \"%2\", \"%3\")").arg(majorID, major, course);
        MajorDialog::addLogItem(sql, undoSql);
        emit refreshMajor();
    }
    else
    {
        QMessageBox::information(this, "Note", "Delete failed");
    }
}

void MajorDeleteDialog::on_cancel_pushButton_clicked()
{
    this->close();
}


