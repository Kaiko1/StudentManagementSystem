/********************************************************************************
** Form generated from reading UI file 'majorupdatedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAJORUPDATEDIALOG_H
#define UI_MAJORUPDATEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MajorUpdateDialog
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *ori_major_label;
    QLineEdit *ori_major_lineEdit;
    QPushButton *ok_pushButton;
    QPushButton *cancel_pushButton;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *new_major_label;
    QLineEdit *new_major_lineEdit;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *new_course_label;
    QLineEdit *new_course_lineEdit;

    void setupUi(QDialog *MajorUpdateDialog)
    {
        if (MajorUpdateDialog->objectName().isEmpty())
            MajorUpdateDialog->setObjectName(QString::fromUtf8("MajorUpdateDialog"));
        MajorUpdateDialog->resize(408, 230);
        horizontalLayoutWidget = new QWidget(MajorUpdateDialog);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 10, 361, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ori_major_label = new QLabel(horizontalLayoutWidget);
        ori_major_label->setObjectName(QString::fromUtf8("ori_major_label"));

        horizontalLayout->addWidget(ori_major_label);

        ori_major_lineEdit = new QLineEdit(horizontalLayoutWidget);
        ori_major_lineEdit->setObjectName(QString::fromUtf8("ori_major_lineEdit"));

        horizontalLayout->addWidget(ori_major_lineEdit);

        ok_pushButton = new QPushButton(MajorUpdateDialog);
        ok_pushButton->setObjectName(QString::fromUtf8("ok_pushButton"));
        ok_pushButton->setGeometry(QRect(80, 190, 75, 23));
        cancel_pushButton = new QPushButton(MajorUpdateDialog);
        cancel_pushButton->setObjectName(QString::fromUtf8("cancel_pushButton"));
        cancel_pushButton->setGeometry(QRect(210, 190, 75, 23));
        horizontalLayoutWidget_2 = new QWidget(MajorUpdateDialog);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(20, 60, 361, 51));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        new_major_label = new QLabel(horizontalLayoutWidget_2);
        new_major_label->setObjectName(QString::fromUtf8("new_major_label"));

        horizontalLayout_2->addWidget(new_major_label);

        new_major_lineEdit = new QLineEdit(horizontalLayoutWidget_2);
        new_major_lineEdit->setObjectName(QString::fromUtf8("new_major_lineEdit"));

        horizontalLayout_2->addWidget(new_major_lineEdit);

        horizontalLayoutWidget_3 = new QWidget(MajorUpdateDialog);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(20, 110, 361, 51));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        new_course_label = new QLabel(horizontalLayoutWidget_3);
        new_course_label->setObjectName(QString::fromUtf8("new_course_label"));

        horizontalLayout_3->addWidget(new_course_label);

        new_course_lineEdit = new QLineEdit(horizontalLayoutWidget_3);
        new_course_lineEdit->setObjectName(QString::fromUtf8("new_course_lineEdit"));

        horizontalLayout_3->addWidget(new_course_lineEdit);


        retranslateUi(MajorUpdateDialog);

        QMetaObject::connectSlotsByName(MajorUpdateDialog);
    } // setupUi

    void retranslateUi(QDialog *MajorUpdateDialog)
    {
        MajorUpdateDialog->setWindowTitle(QApplication::translate("MajorUpdateDialog", "Dialog", nullptr));
        ori_major_label->setText(QApplication::translate("MajorUpdateDialog", "Original major", nullptr));
        ok_pushButton->setText(QApplication::translate("MajorUpdateDialog", "OK", nullptr));
        cancel_pushButton->setText(QApplication::translate("MajorUpdateDialog", "Cancel", nullptr));
        new_major_label->setText(QApplication::translate("MajorUpdateDialog", "New major", nullptr));
        new_course_label->setText(QApplication::translate("MajorUpdateDialog", "New course", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MajorUpdateDialog: public Ui_MajorUpdateDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAJORUPDATEDIALOG_H
