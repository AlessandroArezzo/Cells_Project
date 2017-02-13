/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *removeSumButton;
    QPushButton *addSumButton;
    QTableWidget *tableWidget;
    QTextEdit *textEdit;
    QPushButton *removeMaxButton;
    QPushButton *addMaxButton;
    QPushButton *addMinButton;
    QPushButton *removeMinButton;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *removeMeanButton;
    QPushButton *addMeanButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1165, 571);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 121, 21));
        removeSumButton = new QPushButton(centralWidget);
        removeSumButton->setObjectName(QStringLiteral("removeSumButton"));
        removeSumButton->setGeometry(QRect(820, 90, 181, 51));
        addSumButton = new QPushButton(centralWidget);
        addSumButton->setObjectName(QStringLiteral("addSumButton"));
        addSumButton->setGeometry(QRect(820, 40, 181, 51));
        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 100)
            tableWidget->setColumnCount(100);
        if (tableWidget->rowCount() < 100)
            tableWidget->setRowCount(100);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(0, 0, __qtablewidgetitem);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(180, 0, 631, 481));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        tableWidget->setFont(font);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setRowCount(100);
        tableWidget->setColumnCount(100);
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 50, 151, 431));
        QFont font1;
        font1.setPointSize(12);
        textEdit->setFont(font1);
        textEdit->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        textEdit->setReadOnly(true);
        removeMaxButton = new QPushButton(centralWidget);
        removeMaxButton->setObjectName(QStringLiteral("removeMaxButton"));
        removeMaxButton->setGeometry(QRect(820, 250, 181, 51));
        addMaxButton = new QPushButton(centralWidget);
        addMaxButton->setObjectName(QStringLiteral("addMaxButton"));
        addMaxButton->setGeometry(QRect(820, 200, 181, 51));
        addMinButton = new QPushButton(centralWidget);
        addMinButton->setObjectName(QStringLiteral("addMinButton"));
        addMinButton->setGeometry(QRect(820, 360, 181, 51));
        removeMinButton = new QPushButton(centralWidget);
        removeMinButton->setObjectName(QStringLiteral("removeMinButton"));
        removeMinButton->setGeometry(QRect(820, 410, 181, 51));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(829, 20, 161, 20));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(1010, 180, 161, 20));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(830, 180, 161, 20));
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(830, 330, 161, 20));
        label_5->setAlignment(Qt::AlignCenter);
        removeMeanButton = new QPushButton(centralWidget);
        removeMeanButton->setObjectName(QStringLiteral("removeMeanButton"));
        removeMeanButton->setGeometry(QRect(1000, 250, 181, 51));
        addMeanButton = new QPushButton(centralWidget);
        addMeanButton->setObjectName(QStringLiteral("addMeanButton"));
        addMeanButton->setGeometry(QRect(1000, 200, 181, 51));
        MainWindow->setCentralWidget(centralWidget);
        label->raise();
        removeSumButton->raise();
        addSumButton->raise();
        tableWidget->raise();
        textEdit->raise();
        removeMaxButton->raise();
        addMaxButton->raise();
        addMinButton->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        removeMeanButton->raise();
        addMeanButton->raise();
        removeMinButton->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1165, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt;\">RISULTATI</span></p></body></html>", Q_NULLPTR));
        removeSumButton->setText(QApplication::translate("MainWindow", "REMOVE CELL", Q_NULLPTR));
        addSumButton->setText(QApplication::translate("MainWindow", "ADD CELL", Q_NULLPTR));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        tableWidget->setSortingEnabled(__sortingEnabled);

        removeMaxButton->setText(QApplication::translate("MainWindow", "REMOVE CELL", Q_NULLPTR));
        addMaxButton->setText(QApplication::translate("MainWindow", "ADD CELL", Q_NULLPTR));
        addMinButton->setText(QApplication::translate("MainWindow", "ADD CELL", Q_NULLPTR));
        removeMinButton->setText(QApplication::translate("MainWindow", "REMOVE CELL", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "SUM", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "MEAN", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "MAX", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "MIN", Q_NULLPTR));
        removeMeanButton->setText(QApplication::translate("MainWindow", "REMOVE CELL", Q_NULLPTR));
        addMeanButton->setText(QApplication::translate("MainWindow", "ADD CELL", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
