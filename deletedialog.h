#ifndef DELETEDIALOG_H
#define DELETEDIALOG_H

#include <QDialog>

namespace Ui {
class DeleteDialog;
}

class DeleteDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DeleteDialog(QWidget *parent = 0);
    ~DeleteDialog();

private slots:
    void initUi();

    void on_search_pushButton_clicked();

    void on_ok_pushButton_clicked();

    void on_cancel_pushButton_clicked();

signals:
    void refreshMainWindow();

private:
    Ui::DeleteDialog *ui;
    QTimer *tabletime;
};

#endif // DELETEDIALOG_H
