#ifndef UPDATEDIALOG_H
#define UPDATEDIALOG_H

#include <QDialog>

namespace Ui {
class UpdateDialog;
}

class UpdateDialog : public QDialog
{
    Q_OBJECT

public:
    explicit UpdateDialog(QWidget *parent = 0);
    ~UpdateDialog();

    void initUi();

private slots:
    void on_ok_pushButton_clicked();

    void on_cancel_pushButton_clicked();

signals:
    void refreshMainWindow();

private:
    Ui::UpdateDialog *ui;
};

#endif // UPDATEDIALOG_H
