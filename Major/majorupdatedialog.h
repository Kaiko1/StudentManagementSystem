#ifndef MAJORUPDATEDIALOG_H
#define MAJORUPDATEDIALOG_H

#include <QDialog>

namespace Ui {
class MajorUpdateDialog;
}

class MajorUpdateDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MajorUpdateDialog(QWidget *parent = 0);
    ~MajorUpdateDialog();

    void initUi();

private slots:
    void on_ok_pushButton_clicked();

    void on_cancel_pushButton_clicked();

signals:
    void refreshMajor();

private:
    Ui::MajorUpdateDialog *ui;
};

#endif // MAJORUPDATEDIALOG_H
