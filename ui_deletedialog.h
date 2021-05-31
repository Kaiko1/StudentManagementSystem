/********************************************************************************
** Form generated from reading UI file 'deletedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEDIALOG_H
#define UI_DELETEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeleteDialog
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *id_label;
    QLineEdit *id_lineEdit;
    QPushButton *search_pushButton;
    QPushButton *ok_pushButton;
    QPushButton *cancel_pushButton;
    QTableWidget *student_tableWidget;

    void setupUi(QDialog *DeleteDialog)
    {
        if (DeleteDialog->objectName().isEmpty())
            DeleteDialog->setObjectName(QString::fromUtf8("DeleteDialog"));
        DeleteDialog->resize(400, 305);
        horizontalLayoutWidget = new QWidget(DeleteDialog);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(9, 30, 371, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        id_label = new QLabel(horizontalLayoutWidget);
        id_label->setObjectName(QString::fromUtf8("id_label"));

        horizontalLayout->addWidget(id_label);

        id_lineEdit = new QLineEdit(horizontalLayoutWidget);
        id_lineEdit->setObjectName(QString::fromUtf8("id_lineEdit"));

        horizontalLayout->addWidget(id_lineEdit);

        search_pushButton = new QPushButton(horizontalLayoutWidget);
        search_pushButton->setObjectName(QString::fromUtf8("search_pushButton"));

        horizontalLayout->addWidget(search_pushButton);

        ok_pushButton = new QPushButton(DeleteDialog);
        ok_pushButton->setObjectName(QString::fromUtf8("ok_pushButton"));
        ok_pushButton->setGeometry(QRect(220, 260, 75, 23));
        cancel_pushButton = new QPushButton(DeleteDialog);
        cancel_pushButton->setObjectName(QString::fromUtf8("cancel_pushButton"));
        cancel_pushButton->setGeometry(QRect(310, 260, 75, 23));
        student_tableWidget = new QTableWidget(DeleteDialog);
        if (student_tableWidget->columnCount() < 5)
            student_tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        student_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        student_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        student_tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        student_tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        student_tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        student_tableWidget->setObjectName(QString::fromUtf8("student_tableWidget"));
        student_tableWidget->setGeometry(QRect(10, 110, 371, 131));

        retranslateUi(DeleteDialog);

        QMetaObject::connectSlotsByName(DeleteDialog);
    } // setupUi

    void retranslateUi(QDialog *DeleteDialog)
    {
        DeleteDialog->setWindowTitle(QApplication::translate("DeleteDialog", "Dialog", nullptr));
        id_label->setText(QApplication::translate("DeleteDialog", "ID", nullptr));
        search_pushButton->setText(QApplication::translate("DeleteDialog", "Search", nullptr));
        ok_pushButton->setText(QApplication::translate("DeleteDialog", "OK", nullptr));
        cancel_pushButton->setText(QApplication::translate("DeleteDialog", "Cancel", nullptr));
        QTableWidgetItem *___qtablewidgetitem = student_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DeleteDialog", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = student_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DeleteDialog", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = student_tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DeleteDialog", "Gender", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = student_tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("DeleteDialog", "Major", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = student_tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("DeleteDialog", "Course", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteDialog: public Ui_DeleteDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEDIALOG_H
