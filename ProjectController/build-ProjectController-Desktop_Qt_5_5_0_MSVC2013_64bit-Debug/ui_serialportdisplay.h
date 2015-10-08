/********************************************************************************
** Form generated from reading UI file 'serialportdisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALPORTDISPLAY_H
#define UI_SERIALPORTDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SerialPortDisplay
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QPushButton *clearRXButton;
    QSpacerItem *verticalSpacer_2;
    QPlainTextEdit *rxText;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_2;
    QPushButton *clearTXButton;
    QSpacerItem *verticalSpacer_4;
    QPlainTextEdit *txText;

    void setupUi(QDialog *SerialPortDisplay)
    {
        if (SerialPortDisplay->objectName().isEmpty())
            SerialPortDisplay->setObjectName(QStringLiteral("SerialPortDisplay"));
        SerialPortDisplay->resize(512, 314);
        gridLayout = new QGridLayout(SerialPortDisplay);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        label = new QLabel(SerialPortDisplay);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        clearRXButton = new QPushButton(SerialPortDisplay);
        clearRXButton->setObjectName(QStringLiteral("clearRXButton"));

        verticalLayout_2->addWidget(clearRXButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_2);

        rxText = new QPlainTextEdit(SerialPortDisplay);
        rxText->setObjectName(QStringLiteral("rxText"));
        rxText->setReadOnly(true);

        horizontalLayout->addWidget(rxText);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        label_2 = new QLabel(SerialPortDisplay);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        clearTXButton = new QPushButton(SerialPortDisplay);
        clearTXButton->setObjectName(QStringLiteral("clearTXButton"));

        verticalLayout->addWidget(clearTXButton);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);


        horizontalLayout_2->addLayout(verticalLayout);

        txText = new QPlainTextEdit(SerialPortDisplay);
        txText->setObjectName(QStringLiteral("txText"));
        txText->setReadOnly(true);

        horizontalLayout_2->addWidget(txText);


        verticalLayout_3->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);


        retranslateUi(SerialPortDisplay);

        QMetaObject::connectSlotsByName(SerialPortDisplay);
    } // setupUi

    void retranslateUi(QDialog *SerialPortDisplay)
    {
        SerialPortDisplay->setWindowTitle(QApplication::translate("SerialPortDisplay", "Dialog", 0));
        label->setText(QApplication::translate("SerialPortDisplay", "Received    ", 0));
        clearRXButton->setText(QApplication::translate("SerialPortDisplay", "Clear rx", 0));
        label_2->setText(QApplication::translate("SerialPortDisplay", "Transmitted", 0));
        clearTXButton->setText(QApplication::translate("SerialPortDisplay", "Clear tx", 0));
    } // retranslateUi

};

namespace Ui {
    class SerialPortDisplay: public Ui_SerialPortDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALPORTDISPLAY_H
