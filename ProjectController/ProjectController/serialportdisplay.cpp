#include "serialportdisplay.h"
#include "ui_serialportdisplay.h"

SerialPortDisplay::SerialPortDisplay(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SerialPortDisplay)
{
    ui->setupUi(this);
}

SerialPortDisplay::~SerialPortDisplay()
{
    delete ui;
}

void SerialPortDisplay::setRXText(QString string){
    QString rx = ui->rxText->toPlainText();
    rx.append(string);
    ui->rxText->setPlainText(rx);
}

void SerialPortDisplay::setTXText(QString string){
    QString tx = ui->txText->toPlainText();
    tx.append(string);
    ui->txText->setPlainText(tx);
}

void SerialPortDisplay::on_clearRXButton_clicked()
{
    ui->rxText->clear();
}

void SerialPortDisplay::on_clearTXButton_clicked()
{
    ui->txText->clear();
}
