/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSerial_Port;
    QAction *actionClose;
    QAction *actionDisconnect;
    QAction *actionDisplay_Serial_Data;
    QAction *actionLoad_Setup_File;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *DefaultTab;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *updateBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioLive;
    QRadioButton *radioOnSubmit;
    QPushButton *submitButton;
    QPushButton *updateButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuLayout;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(444, 472);
        MainWindow->setIconSize(QSize(24, 24));
        actionSerial_Port = new QAction(MainWindow);
        actionSerial_Port->setObjectName(QStringLiteral("actionSerial_Port"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icons/Serial.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionSerial_Port->setIcon(icon);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/icons/Close.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon1);
        actionDisconnect = new QAction(MainWindow);
        actionDisconnect->setObjectName(QStringLiteral("actionDisconnect"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/icons/Disconnect.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionDisconnect->setIcon(icon2);
        actionDisplay_Serial_Data = new QAction(MainWindow);
        actionDisplay_Serial_Data->setObjectName(QStringLiteral("actionDisplay_Serial_Data"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/icons/SerialDisplay.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionDisplay_Serial_Data->setIcon(icon3);
        actionLoad_Setup_File = new QAction(MainWindow);
        actionLoad_Setup_File->setObjectName(QStringLiteral("actionLoad_Setup_File"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/icons/Layout.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoad_Setup_File->setIcon(icon4);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setUsesScrollButtons(false);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        DefaultTab = new QWidget();
        DefaultTab->setObjectName(QStringLiteral("DefaultTab"));
        gridLayout_3 = new QGridLayout(DefaultTab);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label = new QLabel(DefaultTab);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        tabWidget->addTab(DefaultTab, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        updateBox = new QGroupBox(centralWidget);
        updateBox->setObjectName(QStringLiteral("updateBox"));
        gridLayout = new QGridLayout(updateBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        radioLive = new QRadioButton(updateBox);
        radioLive->setObjectName(QStringLiteral("radioLive"));

        horizontalLayout->addWidget(radioLive);

        radioOnSubmit = new QRadioButton(updateBox);
        radioOnSubmit->setObjectName(QStringLiteral("radioOnSubmit"));
        radioOnSubmit->setChecked(true);

        horizontalLayout->addWidget(radioOnSubmit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(updateBox);

        submitButton = new QPushButton(centralWidget);
        submitButton->setObjectName(QStringLiteral("submitButton"));

        horizontalLayout_2->addWidget(submitButton);

        updateButton = new QPushButton(centralWidget);
        updateButton->setObjectName(QStringLiteral("updateButton"));

        horizontalLayout_2->addWidget(updateButton);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 444, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuLayout = new QMenu(menuBar);
        menuLayout->setObjectName(QStringLiteral("menuLayout"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuLayout->menuAction());
        menuFile->addAction(actionSerial_Port);
        menuFile->addAction(actionDisplay_Serial_Data);
        menuFile->addAction(actionDisconnect);
        menuFile->addAction(actionClose);
        menuLayout->addAction(actionLoad_Setup_File);
        mainToolBar->addAction(actionSerial_Port);
        mainToolBar->addAction(actionDisplay_Serial_Data);
        mainToolBar->addAction(actionDisconnect);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionLoad_Setup_File);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionSerial_Port->setText(QApplication::translate("MainWindow", "Serial Port", 0));
        actionClose->setText(QApplication::translate("MainWindow", "Close", 0));
        actionDisconnect->setText(QApplication::translate("MainWindow", "Disconnect", 0));
        actionDisplay_Serial_Data->setText(QApplication::translate("MainWindow", "Display Serial Data", 0));
        actionLoad_Setup_File->setText(QApplication::translate("MainWindow", "Load Layout File", 0));
        label->setText(QApplication::translate("MainWindow", "Load Layout File", 0));
        tabWidget->setTabText(tabWidget->indexOf(DefaultTab), QApplication::translate("MainWindow", "Default Tab", 0));
        updateBox->setTitle(QApplication::translate("MainWindow", "Update Type", 0));
        radioLive->setText(QApplication::translate("MainWindow", "Live Changes", 0));
        radioOnSubmit->setText(QApplication::translate("MainWindow", "Change on Submit", 0));
        submitButton->setText(QApplication::translate("MainWindow", "Submit", 0));
        updateButton->setText(QApplication::translate("MainWindow", "Update", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuLayout->setTitle(QApplication::translate("MainWindow", "Layout", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
