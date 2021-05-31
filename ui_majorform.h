/********************************************************************************
** Form generated from reading UI file 'majorform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAJORFORM_H
#define UI_MAJORFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MajorForm
{
public:
    QTableWidget *major_tableWidget;
    QPushButton *insert_pushButton;
    QPushButton *delete_pushButton;
    QPushButton *update_pushButton;

    void setupUi(QWidget *MajorForm)
    {
        if (MajorForm->objectName().isEmpty())
            MajorForm->setObjectName(QString::fromUtf8("MajorForm"));
        MajorForm->resize(431, 264);
        major_tableWidget = new QTableWidget(MajorForm);
        if (major_tableWidget->columnCount() < 3)
            major_tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        major_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        major_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        major_tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        major_tableWidget->setObjectName(QString::fromUtf8("major_tableWidget"));
        major_tableWidget->setGeometry(QRect(100, 21, 311, 221));
        insert_pushButton = new QPushButton(MajorForm);
        insert_pushButton->setObjectName(QString::fromUtf8("insert_pushButton"));
        insert_pushButton->setGeometry(QRect(10, 40, 75, 23));
        delete_pushButton = new QPushButton(MajorForm);
        delete_pushButton->setObjectName(QString::fromUtf8("delete_pushButton"));
        delete_pushButton->setGeometry(QRect(10, 110, 75, 23));
        update_pushButton = new QPushButton(MajorForm);
        update_pushButton->setObjectName(QString::fromUtf8("update_pushButton"));
        update_pushButton->setGeometry(QRect(10, 180, 75, 23));

        retranslateUi(MajorForm);

        QMetaObject::connectSlotsByName(MajorForm);
    } // setupUi

    void retranslateUi(QWidget *MajorForm)
    {
        MajorForm->setWindowTitle(QApplication::translate("MajorForm", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = major_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MajorForm", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = major_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MajorForm", "Major", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = major_tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MajorForm", "Course", nullptr));
        insert_pushButton->setText(QApplication::translate("MajorForm", "Insert", nullptr));
        delete_pushButton->setText(QApplication::translate("MajorForm", "Delete", nullptr));
        update_pushButton->setText(QApplication::translate("MajorForm", "Update", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MajorForm: public Ui_MajorForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAJORFORM_H
