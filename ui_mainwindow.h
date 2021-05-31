/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTableWidget *student_tableWidget;
    QLabel *project_label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *insert_pushButton;
    QPushButton *delete_pushButton;
    QPushButton *search_pushButton;
    QPushButton *update_pushButton;
    QPushButton *undo_pushButton;
    QPushButton *redo_pushButton;
    QPushButton *major_info_pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(837, 330);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        student_tableWidget = new QTableWidget(centralWidget);
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
        student_tableWidget->setGeometry(QRect(140, 40, 541, 221));
        student_tableWidget->setMouseTracking(false);
        student_tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        student_tableWidget->horizontalHeader()->setMinimumSectionSize(100);
        student_tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        project_label = new QLabel(centralWidget);
        project_label->setObjectName(QString::fromUtf8("project_label"));
        project_label->setGeometry(QRect(140, 20, 511, 20));
        project_label->setAlignment(Qt::AlignCenter);
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 40, 81, 221));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        insert_pushButton = new QPushButton(verticalLayoutWidget);
        insert_pushButton->setObjectName(QString::fromUtf8("insert_pushButton"));

        verticalLayout->addWidget(insert_pushButton);

        delete_pushButton = new QPushButton(verticalLayoutWidget);
        delete_pushButton->setObjectName(QString::fromUtf8("delete_pushButton"));

        verticalLayout->addWidget(delete_pushButton);

        search_pushButton = new QPushButton(verticalLayoutWidget);
        search_pushButton->setObjectName(QString::fromUtf8("search_pushButton"));

        verticalLayout->addWidget(search_pushButton);

        update_pushButton = new QPushButton(verticalLayoutWidget);
        update_pushButton->setObjectName(QString::fromUtf8("update_pushButton"));

        verticalLayout->addWidget(update_pushButton);

        undo_pushButton = new QPushButton(centralWidget);
        undo_pushButton->setObjectName(QString::fromUtf8("undo_pushButton"));
        undo_pushButton->setGeometry(QRect(710, 60, 88, 23));
        redo_pushButton = new QPushButton(centralWidget);
        redo_pushButton->setObjectName(QString::fromUtf8("redo_pushButton"));
        redo_pushButton->setGeometry(QRect(710, 130, 88, 23));
        major_info_pushButton = new QPushButton(centralWidget);
        major_info_pushButton->setObjectName(QString::fromUtf8("major_info_pushButton"));
        major_info_pushButton->setGeometry(QRect(710, 200, 91, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 837, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = student_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = student_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = student_tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Gender", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = student_tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Major", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = student_tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Course", nullptr));
        project_label->setText(QApplication::translate("MainWindow", "Student Management System", nullptr));
        insert_pushButton->setText(QApplication::translate("MainWindow", "Insert", nullptr));
        delete_pushButton->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        search_pushButton->setText(QApplication::translate("MainWindow", "Search", nullptr));
        update_pushButton->setText(QApplication::translate("MainWindow", "Update", nullptr));
        undo_pushButton->setText(QApplication::translate("MainWindow", "Undo", nullptr));
        redo_pushButton->setText(QApplication::translate("MainWindow", "Redo", nullptr));
        major_info_pushButton->setText(QApplication::translate("MainWindow", "Major", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
