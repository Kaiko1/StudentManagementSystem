/********************************************************************************
** Form generated from reading UI file 'majordialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAJORDIALOG_H
#define UI_MAJORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_MajorDialog
{
public:
    QPushButton *insert_pushButton;
    QPushButton *delete_pushButton;
    QPushButton *update_pushButton;
    QTableWidget *major_tableWidget;
    QPushButton *undo_pushButton;
    QPushButton *redo_pushButton;

    void setupUi(QDialog *MajorDialog)
    {
        if (MajorDialog->objectName().isEmpty())
            MajorDialog->setObjectName(QString::fromUtf8("MajorDialog"));
        MajorDialog->resize(626, 300);
        insert_pushButton = new QPushButton(MajorDialog);
        insert_pushButton->setObjectName(QString::fromUtf8("insert_pushButton"));
        insert_pushButton->setGeometry(QRect(20, 80, 75, 23));
        delete_pushButton = new QPushButton(MajorDialog);
        delete_pushButton->setObjectName(QString::fromUtf8("delete_pushButton"));
        delete_pushButton->setGeometry(QRect(20, 130, 75, 23));
        update_pushButton = new QPushButton(MajorDialog);
        update_pushButton->setObjectName(QString::fromUtf8("update_pushButton"));
        update_pushButton->setGeometry(QRect(20, 180, 75, 23));
        major_tableWidget = new QTableWidget(MajorDialog);
        if (major_tableWidget->columnCount() < 3)
            major_tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        major_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        major_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        major_tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        major_tableWidget->setObjectName(QString::fromUtf8("major_tableWidget"));
        major_tableWidget->setGeometry(QRect(120, 30, 361, 241));
        undo_pushButton = new QPushButton(MajorDialog);
        undo_pushButton->setObjectName(QString::fromUtf8("undo_pushButton"));
        undo_pushButton->setGeometry(QRect(510, 100, 71, 23));
        redo_pushButton = new QPushButton(MajorDialog);
        redo_pushButton->setObjectName(QString::fromUtf8("redo_pushButton"));
        redo_pushButton->setGeometry(QRect(510, 150, 71, 23));

        retranslateUi(MajorDialog);

        QMetaObject::connectSlotsByName(MajorDialog);
    } // setupUi

    void retranslateUi(QDialog *MajorDialog)
    {
        MajorDialog->setWindowTitle(QApplication::translate("MajorDialog", "Dialog", nullptr));
        insert_pushButton->setText(QApplication::translate("MajorDialog", "Insert", nullptr));
        delete_pushButton->setText(QApplication::translate("MajorDialog", "Delete", nullptr));
        update_pushButton->setText(QApplication::translate("MajorDialog", "Update", nullptr));
        QTableWidgetItem *___qtablewidgetitem = major_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MajorDialog", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = major_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MajorDialog", "Major", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = major_tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MajorDialog", "Course", nullptr));
        undo_pushButton->setText(QApplication::translate("MajorDialog", "Undo", nullptr));
        redo_pushButton->setText(QApplication::translate("MajorDialog", "Redo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MajorDialog: public Ui_MajorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAJORDIALOG_H
