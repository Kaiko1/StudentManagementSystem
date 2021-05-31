#ifndef INSERTDIALOG_H
#define INSERTDIALOG_H

#include <QDialog>

namespace Ui {
class InsertDialog;
}

class InsertDialog : public QDialog
{
    Q_OBJECT

public:
    explicit InsertDialog();
    ~InsertDialog();

    void initUi();

private slots:
    void on_ok_pushButton_clicked();

    void on_cancel_pushButton_clicked();

signals:
    void refreshMainWindow();

private:
    Ui::InsertDialog *ui;
    QTimer *tabletime;
};

#endif // INSERTDIALOG_H
