#ifndef MAJORDELETEDIALOG_H
#define MAJORDELETEDIALOG_H

#include <QDialog>

namespace Ui {
class MajorDeleteDialog;
}

class MajorDeleteDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MajorDeleteDialog(QWidget *parent = 0);
    ~MajorDeleteDialog();

    void initUi();

private slots:
    void on_ok_pushButton_clicked();

    void on_cancel_pushButton_clicked();

signals:
    void refreshMajor();

private:
    Ui::MajorDeleteDialog *ui;
};

#endif // MAJORDELETEDIALOG_H
