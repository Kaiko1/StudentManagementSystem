/********************************************************************************
** Form generated from reading UI file 'majorinsertdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAJORINSERTDIALOG_H
#define UI_MAJORINSERTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MajorInsertDialog
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *major_label;
    QLineEdit *major_lineEdit;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *course_label;
    QLineEdit *course_lineEdit;
    QPushButton *ok_pushButton;
    QPushButton *cancel_pushButton;

    void setupUi(QDialog *MajorInsertDialog)
    {
        if (MajorInsertDialog->objectName().isEmpty())
            MajorInsertDialog->setObjectName(QString::fromUtf8("MajorInsertDialog"));
        MajorInsertDialog->resize(400, 142);
        horizontalLayoutWidget = new QWidget(MajorInsertDialog);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(19, 10, 361, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        major_label = new QLabel(horizontalLayoutWidget);
        major_label->setObjectName(QString::fromUtf8("major_label"));

        horizontalLayout->addWidget(major_label);

        major_lineEdit = new QLineEdit(horizontalLayoutWidget);
        major_lineEdit->setObjectName(QString::fromUtf8("major_lineEdit"));

        horizontalLayout->addWidget(major_lineEdit);

        horizontalLayoutWidget_2 = new QWidget(MajorInsertDialog);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(20, 60, 361, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        course_label = new QLabel(horizontalLayoutWidget_2);
        course_label->setObjectName(QString::fromUtf8("course_label"));

        horizontalLayout_2->addWidget(course_label);

        course_lineEdit = new QLineEdit(horizontalLayoutWidget_2);
        course_lineEdit->setObjectName(QString::fromUtf8("course_lineEdit"));

        horizontalLayout_2->addWidget(course_lineEdit);

        ok_pushButton = new QPushButton(MajorInsertDialog);
        ok_pushButton->setObjectName(QString::fromUtf8("ok_pushButton"));
        ok_pushButton->setGeometry(QRect(220, 110, 75, 23));
        cancel_pushButton = new QPushButton(MajorInsertDialog);
        cancel_pushButton->setObjectName(QString::fromUtf8("cancel_pushButton"));
        cancel_pushButton->setGeometry(QRect(300, 110, 75, 23));

        retranslateUi(MajorInsertDialog);

        QMetaObject::connectSlotsByName(MajorInsertDialog);
    } // setupUi

    void retranslateUi(QDialog *MajorInsertDialog)
    {
        MajorInsertDialog->setWindowTitle(QApplication::translate("MajorInsertDialog", "Dialog", nullptr));
        major_label->setText(QApplication::translate("MajorInsertDialog", "Major", nullptr));
        course_label->setText(QApplication::translate("MajorInsertDialog", "Course", nullptr));
        ok_pushButton->setText(QApplication::translate("MajorInsertDialog", "OK", nullptr));
        cancel_pushButton->setText(QApplication::translate("MajorInsertDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MajorInsertDialog: public Ui_MajorInsertDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAJORINSERTDIALOG_H
