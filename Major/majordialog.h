#ifndef MAJORDIALOG_H
#define MAJORDIALOG_H

#include <QDialog>
#include <QSqlDatabase>
#include <QtWidgets>
#include "majorinsertdialog.h"
#include "majorupdatedialog.h"
#include "majordeletedialog.h"
#include "vector"

namespace Ui {
class MajorDialog;
}

class MajorDialog : public QDialog
{
    Q_OBJECT

public:

    static void addLogItem(QString redoSql, QString undoSql);

    explicit MajorDialog(QWidget *parent = 0);
    ~MajorDialog();

public slots:
    void refresh();

private slots:
    void on_insert_pushButton_clicked();

    void on_delete_pushButton_clicked();

    void on_update_pushButton_clicked();

    void on_undo_pushButton_clicked();

    void on_redo_pushButton_clicked();

    void refreshTable();

    void refreshDoButtonStatus();

    void sortColumn(int col);

signals:
    void refreshMainWindow();

private:
    Ui::MajorDialog *ui;
    MajorInsertDialog major_insert;
    MajorDeleteDialog major_delete;
    MajorUpdateDialog major_update;
    QTimer *tabletime;

    static std::vector<std::vector<QString>> log;
    static int logIndex;
    static bool sortAscOrDesc;
};

#endif // MAJORDIALOG_H
