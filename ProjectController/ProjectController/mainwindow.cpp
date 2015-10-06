#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "serialdialog.h"
#include <string>
#include <QString>
#include <QDebug>
#include <QSerialPort>


QSerialPort serial;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->statusBar->showMessage("Connect Serial Port");
    ui->actionSerial_Port->setEnabled(true);
    ui->actionDisconnect->setEnabled(false);
}

MainWindow::~MainWindow()
{
    if(serial.isOpen()){
        serial.close();
    }
    delete ui;
}

void MainWindow::on_actionSerial_Port_triggered()
{
    int execResult;
    QString portName;
    QString Baud;
    QString DataW;
    QString Parity;
    QString StopBits;
    QString FlowControl;

    serialDialog sDialog;
    sDialog.setWindowIcon(QIcon(":/icons/icons/Serial.ico"));
    sDialog.setWindowFlags(sDialog.windowFlags() & ~Qt::WindowContextHelpButtonHint);
    sDialog.setWindowTitle("Serial Port Setup");
    sDialog.setModal(true);\
    execResult = sDialog.exec();

    if(execResult== QDialog::Accepted){
        qDebug() << "Accepted";
        portName = sDialog.getPortName();
        Baud = sDialog.getBaudRate();
        DataW = sDialog.getDataWidth();
        Parity = sDialog.getParity();
        StopBits = sDialog.getStopBits();
        FlowControl = sDialog.getFlowControl();

        qDebug() << "Port name: " << portName;
        qDebug() << "Baud Rate: " << Baud;
        qDebug() << "Data Width: " << DataW;
        qDebug() << "Parity : " << Parity;
        qDebug() << "Stop Bits: " << StopBits;
        qDebug() << "Flow Control: " << FlowControl;

        //Setup serial port
        setupSerial(portName,Baud,DataW,Parity,StopBits,FlowControl);

        serial.open(QIODevice::ReadWrite);
        serial.write("<Driver><Name>Camera</Name><ID>1</ID></Driver>");

        ui->actionDisconnect->setEnabled(true);
        ui->actionSerial_Port->setEnabled(false);
        ui->statusBar->showMessage("Connected to Serial Port");
    }
    else if(execResult == QDialog::Rejected){
        ui->statusBar->showMessage("Connect Serial Port");
        qDebug() << "Rejected";
    }
    else{
        qDebug() << "Error?";
    }


}

void MainWindow::on_actionClose_triggered()
{
    QApplication::quit();
}

void MainWindow::setupSerial(QString portName, QString Baud, QString DataW, QString Parity, QString StopBits, QString FlowControl){

    //Set serial port name
    setPortName(portName);

    //Set serial port baud rate
    setBaudRate(Baud);

    //Set serial port data width
    setDataWidth(DataW);

    //Set serial port parity
    setParity(Parity);

    //Set serial port stop bits
    setStopBits(StopBits);

    //Set serial port flow control
    setFlowControl(FlowControl);
}

void MainWindow::setPortName(QString portName){
    serial.setPortName(portName);
}

void MainWindow::setBaudRate(QString Baud){
    if(Baud == "1200"){
        serial.setBaudRate(QSerialPort::Baud1200);
    }
    else if(Baud == "2400"){
        serial.setBaudRate(QSerialPort::Baud2400);
    }
    else if(Baud == "4800"){
        serial.setBaudRate(QSerialPort::Baud4800);
    }
    else if(Baud == "9600"){
        serial.setBaudRate(QSerialPort::Baud9600);
    }
    else if(Baud == "19200"){
        serial.setBaudRate(QSerialPort::Baud19200);
    }
    else if(Baud == "38400"){
        serial.setBaudRate(QSerialPort::Baud38400);
    }
    else if(Baud == "57600"){
        serial.setBaudRate(QSerialPort::Baud57600);
    }
    else if(Baud == "115200"){
        serial.setBaudRate(QSerialPort::Baud115200);
    }
}

void MainWindow::setDataWidth(QString DataW){
    if(DataW == "5 bit"){
        serial.setDataBits(QSerialPort::Data5);
    }
    if(DataW == "6 bit"){
        serial.setDataBits(QSerialPort::Data6);
    }
    if(DataW == "7 bit"){
        serial.setDataBits(QSerialPort::Data7);
    }
    if(DataW == "8 bit"){
        serial.setDataBits(QSerialPort::Data8);
    }
}

void MainWindow::setParity(QString Parity){
    if(Parity == "none"){
        serial.setParity(QSerialPort::NoParity);
    }
    else if(Parity == "odd"){
        serial.setParity(QSerialPort::OddParity);
    }
    else if(Parity == "even"){
        serial.setParity(QSerialPort::EvenParity);
    }
    else if(Parity == "mark"){
        serial.setParity(QSerialPort::MarkParity);
    }
    else if(Parity == "space"){
        serial.setParity(QSerialPort::SpaceParity);
    }
}

void MainWindow::setStopBits(QString StopBits){
    if(StopBits == "1 bit"){
        serial.setStopBits(QSerialPort::OneStop);
    }
    else if(StopBits == "1.5 bit"){
        serial.setStopBits(QSerialPort::OneAndHalfStop);
    }
    else if(StopBits == "2 bit"){
        serial.setStopBits(QSerialPort::TwoStop);
    }
}

void MainWindow::setFlowControl(QString FlowControl){
    if(FlowControl == "Xon/Xoff"){
        serial.setFlowControl(QSerialPort::SoftwareControl);
    }
    else if(FlowControl == "hardware"){
        serial.setFlowControl(QSerialPort::HardwareControl);
    }
    else if(FlowControl == "none"){
        serial.setFlowControl(QSerialPort::NoFlowControl);
    }
}

void MainWindow::on_actionDisconnect_triggered()
{
    ui->actionDisconnect->setEnabled(false);
    ui->actionSerial_Port->setEnabled(true);
    ui->statusBar->showMessage("Disconnected from Serial Port");

    if(serial.isOpen()){
        serial.close();
        qDebug() << "Serial Port has been closed.";
    }
    else{
        qDebug() << "No Serial Port was open.";
    }
}
