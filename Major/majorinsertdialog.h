#ifndef MAJORINSERTDIALOG_H
#define MAJORINSERTDIALOG_H

#include <QDialog>

namespace Ui {
class MajorInsertDialog;
}

class MajorInsertDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MajorInsertDialog(QWidget *parent = 0);
    ~MajorInsertDialog();

    void initUi();

private slots:
    void on_ok_pushButton_clicked();

    void on_cancel_pushButton_clicked();

signals:
    void refreshMajor();

private:
    Ui::MajorInsertDialog *ui;
};

#endif // MAJORINSERTDIALOG_H
