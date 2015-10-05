#include "serialdialog.h"
#include "ui_serialdialog.h"
#include <QSerialPortInfo>
#include <QSerialPort>
#include <QDebug>

serialDialog::serialDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::serialDialog)
{
    //parent->

    ui->setupUi(this);

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

    /*qDebug() << ui->comPorts->currentText();
    qDebug() << ui->baudCombo->currentText();
    qDebug() << ui->dataCombo->currentText();
    qDebug() << ui->parityCombo->currentText();
    qDebug() << ui->stopbitCombo->currentText();
    qDebug() << ui->flowCombo->currentText();
*/
}

serialDialog::~serialDialog()
{
    delete ui;
}

void serialDialog::on_cancelButton_clicked()
{
    QDialog::reject();//close();
}

void serialDialog::on_connectButton_clicked()
{
    QDialog::accept();
}

QString serialDialog::getPortName(){
    QString portName = ui->comPorts->currentText();
    return portName;
}

QString serialDialog::getBaudRate(){
    QString BaudRate = ui->baudCombo->currentText();
    return BaudRate;
}

QString serialDialog::getDataWidth(){
    QString DataWidth = ui->dataCombo->currentText();
    return DataWidth;
}

QString serialDialog::getParity(){
    QString Parity = ui->parityCombo->currentText();
    return Parity;
}

QString serialDialog::getStopBits(){
    QString StopBits = ui->stopbitCombo->currentText();
    return StopBits;
}

QString serialDialog::getFlowControl(){
    QString FlowControl = ui->flowCombo->currentText();
    return FlowControl;
}







