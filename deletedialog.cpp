#include "deletedialog.h"
#include "ui_deletedialog.h"
#include "mainwindow.h"
#include "common.h"

DeleteDialog::DeleteDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeleteDialog)
{
    ui->setupUi(this);
}

DeleteDialog::~DeleteDialog()
{
    delete ui;
}


void DeleteDialog::initUi()
{
    ui->id_lineEdit->clear();
    ui->student_tableWidget->clearContents();
}

void DeleteDialog::on_search_pushButton_clicked()
{
    QSqlQuery query;
    QString id = ui->id_lineEdit->text();

    // ensure student ID is not empty
    if(id.isEmpty())
    {
        QMessageBox::information(this, "Note", "Student ID can't be empty");
        return;
    }

    // search student information by student ID
    query.exec(QString("SELECT s.id, s.name, s.gender, m.name major, m.course FROM students s, major m WHERE s.id = \"%1\" and s.major_id = m.id;").arg(id));
    if(query.next())
    {
        ui->student_tableWidget->setRowCount(1);
        for(int i = 0; i < 5; i++)
        {
            ui->student_tableWidget->setItem(0, i, new QTableWidgetItem(query.value(i).toString()));
        }
    }
    else
    {
        QMessageBox::information(this, "Note", "Student ID not exists");
    }
}

void DeleteDialog::on_ok_pushButton_clicked()
{
    QSqlQuery query;
    QString id = ui->id_lineEdit->text();
    QString name, gender, majorID;

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
        name = query.value(1).toString();
        gender = query.value(2).toString();
        majorID = query.value(3).toString();
    }
    else
    {
        QMessageBox::information(this, "Note", "Student ID not exists");
        return;
    }

    // delete data
    sql = QString("DELETE FROM students WHERE id = \"%1\"").arg(id);
    query.exec(sql);
    if(query.numRowsAffected() > 0)
    {
        QString undoSql = QString("INSERT INTO students (id, name, gender, major_id) VALUES(\"%1\",\"%2\",\"%3\",\"%4\")").arg(id, name, gender, majorID);
        MainWindow::addLogItem(sql, undoSql);
        emit DeleteDialog::refreshMainWindow();
        QMessageBox::information(this, "Note", "Deleted successfully");
    }
    else
    {
        QMessageBox::information(this, "Note", "Delete failed");
    }
}

void DeleteDialog::on_cancel_pushButton_clicked()
{
    this->close();
}

