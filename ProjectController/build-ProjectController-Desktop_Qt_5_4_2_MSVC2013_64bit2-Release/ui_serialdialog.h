/********************************************************************************
** Form generated from reading UI file 'serialdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALDIALOG_H
#define UI_SERIALDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_serialDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *portLabel;
    QComboBox *comPorts;
    QHBoxLayout *horizontalLayout_2;
    QLabel *baudLabel;
    QComboBox *baudCombo;
    QHBoxLayout *horizontalLayout_3;
    QLabel *dataLabel;
    QComboBox *dataCombo;
    QHBoxLayout *horizontalLayout_4;
    QLabel *parityLabel;
    QComboBox *parityCombo;
    QHBoxLayout *horizontalLayout_5;
    QLabel *stopLabel;
    QComboBox *stopbitCombo;
    QHBoxLayout *horizontalLayout_6;
    QLabel *flowLabel;
    QComboBox *flowCombo;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *connectButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *serialDialog)
    {
        if (serialDialog->objectName().isEmpty())
            serialDialog->setObjectName(QStringLiteral("serialDialog"));
        serialDialog->resize(201, 213);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(serialDialog->sizePolicy().hasHeightForWidth());
        serialDialog->setSizePolicy(sizePolicy);
        serialDialog->setMinimumSize(QSize(201, 213));
        serialDialog->setMaximumSize(QSize(201, 213));
        gridLayout = new QGridLayout(serialDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        portLabel = new QLabel(serialDialog);
        portLabel->setObjectName(QStringLiteral("portLabel"));

        horizontalLayout->addWidget(portLabel);

        comPorts = new QComboBox(serialDialog);
        comPorts->setObjectName(QStringLiteral("comPorts"));

        horizontalLayout->addWidget(comPorts);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        baudLabel = new QLabel(serialDialog);
        baudLabel->setObjectName(QStringLiteral("baudLabel"));

        horizontalLayout_2->addWidget(baudLabel);

        baudCombo = new QComboBox(serialDialog);
        baudCombo->setObjectName(QStringLiteral("baudCombo"));

        horizontalLayout_2->addWidget(baudCombo);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        dataLabel = new QLabel(serialDialog);
        dataLabel->setObjectName(QStringLiteral("dataLabel"));

        horizontalLayout_3->addWidget(dataLabel);

        dataCombo = new QComboBox(serialDialog);
        dataCombo->setObjectName(QStringLiteral("dataCombo"));

        horizontalLayout_3->addWidget(dataCombo);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        parityLabel = new QLabel(serialDialog);
        parityLabel->setObjectName(QStringLiteral("parityLabel"));

        horizontalLayout_4->addWidget(parityLabel);

        parityCombo = new QComboBox(serialDialog);
        parityCombo->setObjectName(QStringLiteral("parityCombo"));

        horizontalLayout_4->addWidget(parityCombo);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        stopLabel = new QLabel(serialDialog);
        stopLabel->setObjectName(QStringLiteral("stopLabel"));

        horizontalLayout_5->addWidget(stopLabel);

        stopbitCombo = new QComboBox(serialDialog);
        stopbitCombo->setObjectName(QStringLiteral("stopbitCombo"));

        horizontalLayout_5->addWidget(stopbitCombo);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        flowLabel = new QLabel(serialDialog);
        flowLabel->setObjectName(QStringLiteral("flowLabel"));

        horizontalLayout_6->addWidget(flowLabel);

        flowCombo = new QComboBox(serialDialog);
        flowCombo->setObjectName(QStringLiteral("flowCombo"));

        horizontalLayout_6->addWidget(flowCombo);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        connectButton = new QPushButton(serialDialog);
        connectButton->setObjectName(QStringLiteral("connectButton"));

        horizontalLayout_7->addWidget(connectButton);

        cancelButton = new QPushButton(serialDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout_7->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout_7);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(serialDialog);

        QMetaObject::connectSlotsByName(serialDialog);
    } // setupUi

    void retranslateUi(QDialog *serialDialog)
    {
        serialDialog->setWindowTitle(QApplication::translate("serialDialog", "Dialog", 0));
        portLabel->setText(QApplication::translate("serialDialog", "Port:", 0));
        baudLabel->setText(QApplication::translate("serialDialog", "Baud rate:", 0));
        baudCombo->clear();
        baudCombo->insertItems(0, QStringList()
         << QApplication::translate("serialDialog", "1200", 0)
         << QApplication::translate("serialDialog", "2400", 0)
         << QApplication::translate("serialDialog", "4800", 0)
         << QApplication::translate("serialDialog", "9600", 0)
         << QApplication::translate("serialDialog", "19200", 0)
         << QApplication::translate("serialDialog", "38400", 0)
         << QApplication::translate("serialDialog", "57600", 0)
         << QApplication::translate("serialDialog", "115200", 0)
        );
        dataLabel->setText(QApplication::translate("serialDialog", "Data:", 0));
        dataCombo->clear();
        dataCombo->insertItems(0, QStringList()
         << QApplication::translate("serialDialog", "5 bit", 0)
         << QApplication::translate("serialDialog", "6 bit", 0)
         << QApplication::translate("serialDialog", "7 bit", 0)
         << QApplication::translate("serialDialog", "8 bit", 0)
        );
        parityLabel->setText(QApplication::translate("serialDialog", "Parity:", 0));
        parityCombo->clear();
        parityCombo->insertItems(0, QStringList()
         << QApplication::translate("serialDialog", "none", 0)
         << QApplication::translate("serialDialog", "odd", 0)
         << QApplication::translate("serialDialog", "even", 0)
         << QApplication::translate("serialDialog", "mark", 0)
         << QApplication::translate("serialDialog", "space", 0)
        );
        stopLabel->setText(QApplication::translate("serialDialog", "Stop:", 0));
        stopbitCombo->clear();
        stopbitCombo->insertItems(0, QStringList()
         << QApplication::translate("serialDialog", "1 bit", 0)
         << QApplication::translate("serialDialog", "1.5 bit", 0)
         << QApplication::translate("serialDialog", "2 bit", 0)
        );
        flowLabel->setText(QApplication::translate("serialDialog", "Flow Control:", 0));
        flowCombo->clear();
        flowCombo->insertItems(0, QStringList()
         << QApplication::translate("serialDialog", "Xon/Xoff", 0)
         << QApplication::translate("serialDialog", "hardware", 0)
         << QApplication::translate("serialDialog", "none", 0)
        );
        connectButton->setText(QApplication::translate("serialDialog", "Connect", 0));
        cancelButton->setText(QApplication::translate("serialDialog", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class serialDialog: public Ui_serialDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALDIALOG_H
