/********************************************************************************
** Form generated from reading UI file 'searchdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHDIALOG_H
#define UI_SEARCHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_SearchDialog
{
public:
    QTableWidget *student_tableWidget;
    QTextEdit *id_textEdit;
    QTextEdit *name_textEdit;
    QLabel *id_label;
    QLabel *name_label;
    QLabel *gender_label;
    QLabel *major_label;
    QPushButton *search_pushButton;
    QComboBox *gender_comboBox;
    QComboBox *major_comboBox;

    void setupUi(QDialog *SearchDialog)
    {
        if (SearchDialog->objectName().isEmpty())
            SearchDialog->setObjectName(QString::fromUtf8("SearchDialog"));
        SearchDialog->resize(538, 300);
        student_tableWidget = new QTableWidget(SearchDialog);
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
        student_tableWidget->setGeometry(QRect(10, 100, 511, 181));
        id_textEdit = new QTextEdit(SearchDialog);
        id_textEdit->setObjectName(QString::fromUtf8("id_textEdit"));
        id_textEdit->setGeometry(QRect(10, 60, 91, 31));
        name_textEdit = new QTextEdit(SearchDialog);
        name_textEdit->setObjectName(QString::fromUtf8("name_textEdit"));
        name_textEdit->setGeometry(QRect(120, 60, 91, 31));
        id_label = new QLabel(SearchDialog);
        id_label->setObjectName(QString::fromUtf8("id_label"));
        id_label->setGeometry(QRect(30, 40, 54, 12));
        id_label->setToolTipDuration(-3);
        id_label->setLayoutDirection(Qt::LeftToRight);
        id_label->setAlignment(Qt::AlignCenter);
        name_label = new QLabel(SearchDialog);
        name_label->setObjectName(QString::fromUtf8("name_label"));
        name_label->setGeometry(QRect(130, 40, 54, 12));
        name_label->setAlignment(Qt::AlignCenter);
        gender_label = new QLabel(SearchDialog);
        gender_label->setObjectName(QString::fromUtf8("gender_label"));
        gender_label->setGeometry(QRect(250, 40, 54, 12));
        gender_label->setAlignment(Qt::AlignCenter);
        major_label = new QLabel(SearchDialog);
        major_label->setObjectName(QString::fromUtf8("major_label"));
        major_label->setGeometry(QRect(360, 30, 54, 31));
        major_label->setAlignment(Qt::AlignCenter);
        search_pushButton = new QPushButton(SearchDialog);
        search_pushButton->setObjectName(QString::fromUtf8("search_pushButton"));
        search_pushButton->setGeometry(QRect(450, 60, 75, 23));
        gender_comboBox = new QComboBox(SearchDialog);
        gender_comboBox->setObjectName(QString::fromUtf8("gender_comboBox"));
        gender_comboBox->setGeometry(QRect(240, 60, 83, 22));
        major_comboBox = new QComboBox(SearchDialog);
        major_comboBox->setObjectName(QString::fromUtf8("major_comboBox"));
        major_comboBox->setGeometry(QRect(350, 60, 83, 22));

        retranslateUi(SearchDialog);

        QMetaObject::connectSlotsByName(SearchDialog);
    } // setupUi

    void retranslateUi(QDialog *SearchDialog)
    {
        SearchDialog->setWindowTitle(QApplication::translate("SearchDialog", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = student_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("SearchDialog", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = student_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("SearchDialog", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = student_tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("SearchDialog", "Gender", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = student_tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("SearchDialog", "Major", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = student_tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("SearchDialog", "Course", nullptr));
        id_label->setText(QApplication::translate("SearchDialog", "ID", nullptr));
        name_label->setText(QApplication::translate("SearchDialog", "Name", nullptr));
        gender_label->setText(QApplication::translate("SearchDialog", "Gender", nullptr));
        major_label->setText(QApplication::translate("SearchDialog", "Major", nullptr));
        search_pushButton->setText(QApplication::translate("SearchDialog", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchDialog: public Ui_SearchDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHDIALOG_H
