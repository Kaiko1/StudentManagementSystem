/********************************************************************************
** Form generated from reading UI file 'insertdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERTDIALOG_H
#define UI_INSERTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InsertDialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *id_label;
    QLabel *name_label;
    QLineEdit *name_lineEdit;
    QLineEdit *id_lineEdit;
    QLabel *major_label;
    QLabel *gender_label;
    QComboBox *gender_comboBox;
    QComboBox *major_comboBox;
    QPushButton *cancel_pushButton;
    QPushButton *ok_pushButton;

    void setupUi(QWidget *InsertDialog)
    {
        if (InsertDialog->objectName().isEmpty())
            InsertDialog->setObjectName(QString::fromUtf8("InsertDialog"));
        InsertDialog->resize(346, 278);
        gridLayout_2 = new QGridLayout(InsertDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        id_label = new QLabel(InsertDialog);
        id_label->setObjectName(QString::fromUtf8("id_label"));

        gridLayout->addWidget(id_label, 3, 0, 1, 1);

        name_label = new QLabel(InsertDialog);
        name_label->setObjectName(QString::fromUtf8("name_label"));

        gridLayout->addWidget(name_label, 4, 0, 1, 1);

        name_lineEdit = new QLineEdit(InsertDialog);
        name_lineEdit->setObjectName(QString::fromUtf8("name_lineEdit"));

        gridLayout->addWidget(name_lineEdit, 4, 1, 1, 1);

        id_lineEdit = new QLineEdit(InsertDialog);
        id_lineEdit->setObjectName(QString::fromUtf8("id_lineEdit"));

        gridLayout->addWidget(id_lineEdit, 3, 1, 1, 1);

        major_label = new QLabel(InsertDialog);
        major_label->setObjectName(QString::fromUtf8("major_label"));

        gridLayout->addWidget(major_label, 9, 0, 1, 1);

        gender_label = new QLabel(InsertDialog);
        gender_label->setObjectName(QString::fromUtf8("gender_label"));

        gridLayout->addWidget(gender_label, 8, 0, 1, 1);

        gender_comboBox = new QComboBox(InsertDialog);
        gender_comboBox->setObjectName(QString::fromUtf8("gender_comboBox"));

        gridLayout->addWidget(gender_comboBox, 8, 1, 1, 1);

        major_comboBox = new QComboBox(InsertDialog);
        major_comboBox->setObjectName(QString::fromUtf8("major_comboBox"));

        gridLayout->addWidget(major_comboBox, 9, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        cancel_pushButton = new QPushButton(InsertDialog);
        cancel_pushButton->setObjectName(QString::fromUtf8("cancel_pushButton"));

        gridLayout_2->addWidget(cancel_pushButton, 2, 0, 1, 1);

        ok_pushButton = new QPushButton(InsertDialog);
        ok_pushButton->setObjectName(QString::fromUtf8("ok_pushButton"));

        gridLayout_2->addWidget(ok_pushButton, 1, 0, 1, 1);


        retranslateUi(InsertDialog);

        QMetaObject::connectSlotsByName(InsertDialog);
    } // setupUi

    void retranslateUi(QWidget *InsertDialog)
    {
        InsertDialog->setWindowTitle(QApplication::translate("InsertDialog", "Form", nullptr));
        id_label->setText(QApplication::translate("InsertDialog", "ID", nullptr));
        name_label->setText(QApplication::translate("InsertDialog", "Name", nullptr));
        major_label->setText(QApplication::translate("InsertDialog", "Major", nullptr));
        gender_label->setText(QApplication::translate("InsertDialog", "Gender", nullptr));
        cancel_pushButton->setText(QApplication::translate("InsertDialog", "Cancel", nullptr));
        ok_pushButton->setText(QApplication::translate("InsertDialog", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InsertDialog: public Ui_InsertDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERTDIALOG_H
