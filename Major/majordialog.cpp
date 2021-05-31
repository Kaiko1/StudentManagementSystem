#include "majordialog.h"
#include "ui_majordialog.h"
#include "QSqlQuery"

std::vector<std::vector<QString>> MajorDialog::log = std::vector<std::vector<QString>>();
int MajorDialog::logIndex = 0;
bool MajorDialog::sortAscOrDesc = false;

MajorDialog::MajorDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MajorDialog)
{
    ui->setupUi(this);
    ui->major_tableWidget->horizontalHeader()->setSortIndicatorShown(true);

    connect(&major_insert, SIGNAL(refreshMajor()), this, SLOT(refresh()));
    connect(&major_delete, SIGNAL(refreshMajor()), this, SLOT(refresh()));
    connect(&major_update, SIGNAL(refreshMajor()), this, SLOT(refresh()));
    connect(ui->major_tableWidget->horizontalHeader(), SIGNAL(sectionClicked(int)), this, SLOT(sortColumn(int)));
}

MajorDialog::~MajorDialog()
{
    delete ui;
}

void MajorDialog::on_insert_pushButton_clicked()
{
    major_insert.initUi();
    major_insert.show();
}

void MajorDialog::on_delete_pushButton_clicked()
{
    major_delete.initUi();
    major_delete.show();
}

void MajorDialog::on_update_pushButton_clicked()
{
    major_update.initUi();
    major_update.show();
}

void MajorDialog::on_undo_pushButton_clicked()
{
    QSqlQuery query;
    MajorDialog::logIndex--;
    QString undoSql = MajorDialog::log[MajorDialog::logIndex][1];
    query.exec(undoSql);
    if(query.numRowsAffected() > 0)
    {
        QMessageBox::information(this, "Note", "Undo successfully");
        MajorDialog::refresh();
    }
    else
    {
        QMessageBox::information(this, "Note", "Undo failed");
    }
}

void MajorDialog::on_redo_pushButton_clicked()
{
    QSqlQuery query;
    QString redoSql = MajorDialog::log[MajorDialog::logIndex][0];
    MajorDialog::logIndex++;
    query.exec(redoSql);
    if(query.numRowsAffected() > 0)
    {
        QMessageBox::information(this, "Note", "Redo successfully");
        MajorDialog::refresh();
    }
    else
    {
        QMessageBox::information(this, "Note", "Redo failed");
    }
}

void MajorDialog::refresh()
{
    refreshTable();
    refreshDoButtonStatus();
    emit refreshMainWindow();
}

void MajorDialog::refreshTable()
{
    QSqlQuery query;
    QString sql = "SELECT * FROM major";
    query.exec(sql);
    int row = 0;
    while(query.next())
    {
        ui->major_tableWidget->setRowCount(row + 1);
        for(int i = 0; i < 3; i++)
        {
            ui->major_tableWidget->setItem(row, i, new QTableWidgetItem(query.value(i).toString()));
        }
        row++;
    }
}

void MajorDialog::refreshDoButtonStatus()
{
    // refresh undo button
    if(MajorDialog::log.size() == 0 || MajorDialog::logIndex == 0)
    {
        ui->undo_pushButton->setEnabled(false);
    }
    else
    {
        ui->undo_pushButton->setEnabled(true);
    }

    // refresh redo button
    if(MajorDialog::log.size() == 0 || MajorDialog::logIndex == MajorDialog::log.size())
    {
        ui->redo_pushButton->setEnabled(false);
    }
    else
    {
        ui->redo_pushButton->setEnabled(true);
    }
}

void MajorDialog::sortColumn(int col)
{
    if(sortAscOrDesc)
    {
        ui->major_tableWidget->sortItems(col, Qt::AscendingOrder);
        sortAscOrDesc = false;
    }
    else
    {
        ui->major_tableWidget->sortItems(col, Qt::DescendingOrder);
        sortAscOrDesc = true;
    }
}

void MajorDialog::addLogItem(QString redoSql, QString undoSql)
{
    std::vector<QString> item;
    item.push_back(redoSql);
    item.push_back(undoSql);
    MajorDialog::log.push_back(item);
    MajorDialog::logIndex++;
}
