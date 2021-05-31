#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QtWidgets>
#include <QTimer>
#include "insertdialog.h"
#include "deletedialog.h"
#include "searchdialog.h"
#include "updatedialog.h"
#include "majordialog.h"
#include "common.h"
#include "vector"

namespace Ui {
class MainWindow;
}


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    static void addLogItem(QString redoSql, QString undoSql);

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_insert_pushButton_clicked();

    void on_delete_pushButton_clicked();

    void on_search_pushButton_clicked();

    void on_update_pushButton_clicked();

    void on_major_info_pushButton_clicked();

    void on_undo_pushButton_clicked();

    void on_redo_pushButton_clicked();

    void refresh();

    void refreshTable();

    void refreshDoButtonStatus();

    void sortColumn(int col);

    void connectDatabase();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    InsertDialog student_insert;
    DeleteDialog student_delete;
    SearchDialog student_search;
    UpdateDialog student_update;
    MajorDialog student_major;

    static std::vector<std::vector<QString>> log;
    static int logIndex;
    static bool sortAscOrDesc;
};

#endif // MAINWINDOW_H
