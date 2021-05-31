/********************************************************************************
** Form generated from reading UI file 'updatedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEDIALOG_H
#define UI_UPDATEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UpdateDialog
{
public:
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *name_label;
    QLineEdit *name_lineEdit;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *id_label;
    QLineEdit *id_lineEdit;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *major_label;
    QComboBox *major_comboBox;
    QPushButton *ok_pushButton;
    QPushButton *cancel_pushButton;
    QLabel *Note_label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *gender_label;
    QComboBox *gender_comboBox;

    void setupUi(QDialog *UpdateDialog)
    {
        if (UpdateDialog->objectName().isEmpty())
            UpdateDialog->setObjectName(QString::fromUtf8("UpdateDialog"));
        UpdateDialog->resize(455, 286);
        horizontalLayoutWidget_2 = new QWidget(UpdateDialog);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(20, 100, 391, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        name_label = new QLabel(horizontalLayoutWidget_2);
        name_label->setObjectName(QString::fromUtf8("name_label"));

        horizontalLayout_2->addWidget(name_label);

        name_lineEdit = new QLineEdit(horizontalLayoutWidget_2);
        name_lineEdit->setObjectName(QString::fromUtf8("name_lineEdit"));

        horizontalLayout_2->addWidget(name_lineEdit);

        horizontalLayoutWidget_3 = new QWidget(UpdateDialog);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(20, 50, 391, 41));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        id_label = new QLabel(horizontalLayoutWidget_3);
        id_label->setObjectName(QString::fromUtf8("id_label"));

        horizontalLayout_3->addWidget(id_label);

        id_lineEdit = new QLineEdit(horizontalLayoutWidget_3);
        id_lineEdit->setObjectName(QString::fromUtf8("id_lineEdit"));

        horizontalLayout_3->addWidget(id_lineEdit);

        horizontalLayoutWidget_5 = new QWidget(UpdateDialog);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(20, 180, 391, 41));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        major_label = new QLabel(horizontalLayoutWidget_5);
        major_label->setObjectName(QString::fromUtf8("major_label"));

        horizontalLayout_5->addWidget(major_label);

        major_comboBox = new QComboBox(horizontalLayoutWidget_5);
        major_comboBox->setObjectName(QString::fromUtf8("major_comboBox"));

        horizontalLayout_5->addWidget(major_comboBox);

        ok_pushButton = new QPushButton(UpdateDialog);
        ok_pushButton->setObjectName(QString::fromUtf8("ok_pushButton"));
        ok_pushButton->setGeometry(QRect(60, 240, 75, 23));
        cancel_pushButton = new QPushButton(UpdateDialog);
        cancel_pushButton->setObjectName(QString::fromUtf8("cancel_pushButton"));
        cancel_pushButton->setGeometry(QRect(280, 240, 75, 23));
        Note_label = new QLabel(UpdateDialog);
        Note_label->setObjectName(QString::fromUtf8("Note_label"));
        Note_label->setGeometry(QRect(23, 20, 431, 20));
        horizontalLayoutWidget = new QWidget(UpdateDialog);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 140, 391, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        gender_label = new QLabel(horizontalLayoutWidget);
        gender_label->setObjectName(QString::fromUtf8("gender_label"));

        horizontalLayout->addWidget(gender_label);

        gender_comboBox = new QComboBox(horizontalLayoutWidget);
        gender_comboBox->setObjectName(QString::fromUtf8("gender_comboBox"));

        horizontalLayout->addWidget(gender_comboBox);


        retranslateUi(UpdateDialog);

        QMetaObject::connectSlotsByName(UpdateDialog);
    } // setupUi

    void retranslateUi(QDialog *UpdateDialog)
    {
        UpdateDialog->setWindowTitle(QApplication::translate("UpdateDialog", "Dialog", nullptr));
        name_label->setText(QApplication::translate("UpdateDialog", "Name", nullptr));
        id_label->setText(QApplication::translate("UpdateDialog", "ID", nullptr));
        major_label->setText(QApplication::translate("UpdateDialog", "Major", nullptr));
        ok_pushButton->setText(QApplication::translate("UpdateDialog", "OK", nullptr));
        cancel_pushButton->setText(QApplication::translate("UpdateDialog", "Cancel", nullptr));
        Note_label->setText(QApplication::translate("UpdateDialog", "Note: Update the information based on the student ID.", nullptr));
        gender_label->setText(QApplication::translate("UpdateDialog", "Gender", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateDialog: public Ui_UpdateDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEDIALOG_H
