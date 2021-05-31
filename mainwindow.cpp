#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "vector"
#include "common.h"

std::vector<std::vector<QString>> MainWindow::log = std::vector<std::vector<QString>>();
int MainWindow::logIndex = 0;
bool MainWindow::sortAscOrDesc = false;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->student_tableWidget->horizontalHeader()->setSortIndicatorShown(true);

    connectDatabase();
    refresh();
    connect(&student_insert, SIGNAL(refreshMainWindow()), this, SLOT(refresh()));
    connect(&student_delete, SIGNAL(refreshMainWindow()), this, SLOT(refresh()));
    connect(&student_update, SIGNAL(refreshMainWindow()), this, SLOT(refresh()));
    connect(&student_major, SIGNAL(refreshMainWindow()), this, SLOT(refresh()));
    connect(ui->student_tableWidget->horizontalHeader(), SIGNAL(sectionClicked(int)), this, SLOT(sortColumn(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_insert_pushButton_clicked()
{
    student_insert.initUi();
    student_insert.show();
}

void MainWindow::on_delete_pushButton_clicked()
{
    student_insert.initUi();
    student_delete.show();
}

void MainWindow::on_search_pushButton_clicked()
{
    student_search.initUi();
    student_search.show();
}

void MainWindow::on_update_pushButton_clicked()
{
    student_update.initUi();
    student_update.show();
}

void MainWindow::on_major_info_pushButton_clicked()
{
    student_major.refresh();
    student_major.show();
}

void MainWindow::on_undo_pushButton_clicked()
{
    QSqlQuery query;
    MainWindow::logIndex--;
    QString undoSql = MainWindow::log[MainWindow::logIndex][1];
    query.exec(undoSql);

    if(query.numRowsAffected() > 0)
    {
        QMessageBox::information(this, "Note", "Undo successfully");
        MainWindow::refresh();
    }
    else
    {
        QMessageBox::information(this, "Note", "Undo failed");
    }
}

void MainWindow::on_redo_pushButton_clicked()
{
    QSqlQuery query;
    QString redoSql = MainWindow::log[MainWindow::logIndex][0];
    MainWindow::logIndex++;
    query.exec(redoSql);

    if(query.numRowsAffected() > 0)
    {
        QMessageBox::information(this, "Note", "Redo successfully");
        MainWindow::refresh();
    }
    else
    {
        QMessageBox::information(this, "Note", "Redo failed");
    }
}

void MainWindow::refresh()
{
    refreshTable();
    refreshDoButtonStatus();
}

void MainWindow::refreshTable()
{
    ui->student_tableWidget->clearContents();
    QSqlQuery query;
    query.exec("SELECT s.id, s.name, s.gender, m.name major, m.course FROM students s, major m WHERE s.major_id = m.id;");

    int row = 0;
    while(query.next())
    {
        ui->student_tableWidget->setRowCount(row + 1);
        for (int i = 0; i < 5; i++)
        {
            ui->student_tableWidget->setItem(row, i, new QTableWidgetItem(query.value(i).toString()));
        }
        row++;
    }
}

void MainWindow::refreshDoButtonStatus()
{
    // refresh undo button
    if(MainWindow::log.size() == 0 || MainWindow::logIndex == 0)
    {
        ui->undo_pushButton->setEnabled(false);
    }
    else
    {
        ui->undo_pushButton->setEnabled(true);
    }

    // refresh redo button
    if(MainWindow::log.size() == 0 || MainWindow::logIndex == MainWindow::log.size())
    {
        ui->redo_pushButton->setEnabled(false);
    }
    else
    {
        ui->redo_pushButton->setEnabled(true);
    }
}

void MainWindow::sortColumn(int col)
{
    if(sortAscOrDesc)
    {
        ui->student_tableWidget->sortItems(col, Qt::AscendingOrder);
        sortAscOrDesc = false;
    }
    else
    {
        ui->student_tableWidget->sortItems(col, Qt::DescendingOrder);
        sortAscOrDesc = true;
    }
}

void MainWindow::connectDatabase()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("localhost");
        db.setPort(3306);
        db.setDatabaseName("std_mgs_sys");
        db.setUserName("root");
        db.setPassword("123456");

    if(db.open())
    {
        qDebug()<<"\ropen database successfully";
    }
}

void MainWindow::addLogItem(QString redoSql, QString undoSql)
{
    std::vector<QString> item;
    item.push_back(redoSql);
    item.push_back(undoSql);
    MainWindow::log.push_back(item);
    MainWindow::logIndex++;
}
