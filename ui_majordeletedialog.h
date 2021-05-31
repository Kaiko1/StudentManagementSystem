/********************************************************************************
** Form generated from reading UI file 'majordeletedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAJORDELETEDIALOG_H
#define UI_MAJORDELETEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MajorDeleteDialog
{
public:
    QPushButton *ok_pushButton;
    QPushButton *cancel_pushButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *major_label;
    QLineEdit *major_lineEdit;

    void setupUi(QDialog *MajorDeleteDialog)
    {
        if (MajorDeleteDialog->objectName().isEmpty())
            MajorDeleteDialog->setObjectName(QString::fromUtf8("MajorDeleteDialog"));
        MajorDeleteDialog->resize(400, 156);
        ok_pushButton = new QPushButton(MajorDeleteDialog);
        ok_pushButton->setObjectName(QString::fromUtf8("ok_pushButton"));
        ok_pushButton->setGeometry(QRect(180, 120, 75, 23));
        cancel_pushButton = new QPushButton(MajorDeleteDialog);
        cancel_pushButton->setObjectName(QString::fromUtf8("cancel_pushButton"));
        cancel_pushButton->setGeometry(QRect(290, 120, 75, 23));
        horizontalLayoutWidget = new QWidget(MajorDeleteDialog);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(29, 20, 341, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        major_label = new QLabel(horizontalLayoutWidget);
        major_label->setObjectName(QString::fromUtf8("major_label"));

        horizontalLayout->addWidget(major_label);

        major_lineEdit = new QLineEdit(horizontalLayoutWidget);
        major_lineEdit->setObjectName(QString::fromUtf8("major_lineEdit"));

        horizontalLayout->addWidget(major_lineEdit);


        retranslateUi(MajorDeleteDialog);

        QMetaObject::connectSlotsByName(MajorDeleteDialog);
    } // setupUi

    void retranslateUi(QDialog *MajorDeleteDialog)
    {
        MajorDeleteDialog->setWindowTitle(QApplication::translate("MajorDeleteDialog", "Dialog", nullptr));
        ok_pushButton->setText(QApplication::translate("MajorDeleteDialog", "OK", nullptr));
        cancel_pushButton->setText(QApplication::translate("MajorDeleteDialog", "Cancel", nullptr));
        major_label->setText(QApplication::translate("MajorDeleteDialog", "Major", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MajorDeleteDialog: public Ui_MajorDeleteDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAJORDELETEDIALOG_H
