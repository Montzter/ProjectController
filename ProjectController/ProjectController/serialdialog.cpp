#include "serialdialog.h"
#include "ui_serialdialog.h"
#include <QSerialPortInfo>
#include <QSerialPort>
#include <QDebug>
serialDialog::serialDialog(QWidget *parent, QSerialPort *serial) :
    QDialog(parent),
    ui(new Ui::serialDialog)
{
    ui->setupUi(this);

    int comPortIndex = 0;

    foreach( const QSerialPortInfo &info, QSerialPortInfo::availablePorts()){
        if(info.isBusy())
        {
            qDebug() << ui->comPorts->count()+1;
            qDebug() << (info.portName()) << " is busy";
        }
        else
        {
            qDebug() << ui->comPorts->count()+1;
            ui->comPorts->addItem(info.portName());
            qDebug() << (info.portName()) << " is not busy";
        }
    }
}

serialDialog::~serialDialog()
{
    delete ui;
}


void serialDialog::on_cancelButton_clicked()
{
    close();
}

