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

}

MainWindow::~MainWindow()
{
    serial.close();
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

        //Set serial port name
        serial.setPortName(portName);

        //Set serial port baud rate
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


        //Set serial port data width
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

        //Set serial port parity
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

        //Set serial port stop bits
        if(StopBits == "1 bit"){
            serial.setStopBits(QSerialPort::OneStop);
        }
        else if(StopBits == "1.5 bit"){
            serial.setStopBits(QSerialPort::OneAndHalfStop);
        }
        else if(StopBits == "2 bit"){
            serial.setStopBits(QSerialPort::TwoStop);
        }

        //Set serial port flow control
        if(FlowControl == "Xon/Xoff"){
            serial.setFlowControl(QSerialPort::SoftwareControl);
        }
        else if(FlowControl == "hardware"){
            serial.setFlowControl(QSerialPort::HardwareControl);
        }
        else if(FlowControl == "none"){
            serial.setFlowControl(QSerialPort::NoFlowControl);
        }

        serial.open(QIODevice::ReadWrite);
        serial.write("OK");

    }
    else if(execResult == QDialog::Rejected){
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

