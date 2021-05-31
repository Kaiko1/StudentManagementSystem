#ifndef SEARCHDIALOG_H
#define SEARCHDIALOG_H

#include <QDialog>

namespace Ui {
class SearchDialog;
}

class SearchDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SearchDialog(QWidget *parent = 0);
    ~SearchDialog();

    void initUi();

private slots:
    void on_search_pushButton_clicked();

private:
    Ui::SearchDialog *ui;
};

#endif // SEARCHDIALOG_H
