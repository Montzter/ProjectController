/********************************************************************************
** Form generated from reading UI file 'serialdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_serialDialog
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *portLabel;
    QComboBox *comPorts;
    QHBoxLayout *horizontalLayout_2;
    QLabel *baudLabel;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *dataLabel;
    QComboBox *comboBox_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *parityLabel;
    QComboBox *comboBox_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *stopLabel;
    QComboBox *comboBox_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *flowLabel;
    QComboBox *comboBox_5;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *connectButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *serialDialog)
    {
        if (serialDialog->objectName().isEmpty())
            serialDialog->setObjectName(QStringLiteral("serialDialog"));
        serialDialog->resize(201, 222);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(serialDialog->sizePolicy().hasHeightForWidth());
        serialDialog->setSizePolicy(sizePolicy);
        serialDialog->setMinimumSize(QSize(201, 222));
        serialDialog->setMaximumSize(QSize(201, 222));
        widget = new QWidget(serialDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 10, 160, 195));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        portLabel = new QLabel(widget);
        portLabel->setObjectName(QStringLiteral("portLabel"));

        horizontalLayout->addWidget(portLabel);

        comPorts = new QComboBox(widget);
        comPorts->setObjectName(QStringLiteral("comPorts"));

        horizontalLayout->addWidget(comPorts);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        baudLabel = new QLabel(widget);
        baudLabel->setObjectName(QStringLiteral("baudLabel"));

        horizontalLayout_2->addWidget(baudLabel);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_2->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        dataLabel = new QLabel(widget);
        dataLabel->setObjectName(QStringLiteral("dataLabel"));

        horizontalLayout_3->addWidget(dataLabel);

        comboBox_2 = new QComboBox(widget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        horizontalLayout_3->addWidget(comboBox_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        parityLabel = new QLabel(widget);
        parityLabel->setObjectName(QStringLiteral("parityLabel"));

        horizontalLayout_4->addWidget(parityLabel);

        comboBox_3 = new QComboBox(widget);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        horizontalLayout_4->addWidget(comboBox_3);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        stopLabel = new QLabel(widget);
        stopLabel->setObjectName(QStringLiteral("stopLabel"));

        horizontalLayout_5->addWidget(stopLabel);

        comboBox_4 = new QComboBox(widget);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));

        horizontalLayout_5->addWidget(comboBox_4);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        flowLabel = new QLabel(widget);
        flowLabel->setObjectName(QStringLiteral("flowLabel"));

        horizontalLayout_6->addWidget(flowLabel);

        comboBox_5 = new QComboBox(widget);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));

        horizontalLayout_6->addWidget(comboBox_5);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        connectButton = new QPushButton(widget);
        connectButton->setObjectName(QStringLiteral("connectButton"));

        horizontalLayout_7->addWidget(connectButton);

        cancelButton = new QPushButton(widget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout_7->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout_7);


        retranslateUi(serialDialog);

        QMetaObject::connectSlotsByName(serialDialog);
    } // setupUi

    void retranslateUi(QDialog *serialDialog)
    {
        serialDialog->setWindowTitle(QApplication::translate("serialDialog", "Dialog", 0));
        portLabel->setText(QApplication::translate("serialDialog", "Port:", 0));
        baudLabel->setText(QApplication::translate("serialDialog", "Baud rate:", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("serialDialog", "110", 0)
         << QApplication::translate("serialDialog", "300", 0)
         << QApplication::translate("serialDialog", "600", 0)
         << QApplication::translate("serialDialog", "1200", 0)
         << QApplication::translate("serialDialog", "2400", 0)
         << QApplication::translate("serialDialog", "4800", 0)
         << QApplication::translate("serialDialog", "9600", 0)
         << QApplication::translate("serialDialog", "14400", 0)
         << QApplication::translate("serialDialog", "19200", 0)
         << QApplication::translate("serialDialog", "38400", 0)
         << QApplication::translate("serialDialog", "57600", 0)
         << QApplication::translate("serialDialog", "115200", 0)
         << QApplication::translate("serialDialog", "230400", 0)
         << QApplication::translate("serialDialog", "460800", 0)
         << QApplication::translate("serialDialog", "921600", 0)
        );
        dataLabel->setText(QApplication::translate("serialDialog", "Data:", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("serialDialog", "7 bit", 0)
         << QApplication::translate("serialDialog", "8 bit", 0)
        );
        parityLabel->setText(QApplication::translate("serialDialog", "Parity:", 0));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("serialDialog", "none", 0)
         << QApplication::translate("serialDialog", "odd", 0)
         << QApplication::translate("serialDialog", "even", 0)
         << QApplication::translate("serialDialog", "mark", 0)
         << QApplication::translate("serialDialog", "space", 0)
        );
        stopLabel->setText(QApplication::translate("serialDialog", "Stop:", 0));
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("serialDialog", "1 bit", 0)
         << QApplication::translate("serialDialog", "1.5 bit", 0)
         << QApplication::translate("serialDialog", "2 bit", 0)
        );
        flowLabel->setText(QApplication::translate("serialDialog", "Flow Control:", 0));
        comboBox_5->clear();
        comboBox_5->insertItems(0, QStringList()
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
