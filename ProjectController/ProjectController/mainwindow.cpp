#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "serialdialog.h"
#include "serialportdisplay.h"
#include <string>
#include <QString>
#include <QDebug>
#include <QSerialPort>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QStringList>
#include <QTabWidget>
#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //QWidget cWidg;
    //QVBoxLayout vlayout;

    serial = new QSerialPort;
    sDisplay = new SerialPortDisplay(this);
    sDisplay->setWindowIcon(QIcon(":/icons/icons/SerialDisplay.ico"));


    ui->setupUi(this);
    ui->statusBar->showMessage("Connect Serial Port");
    ui->actionSerial_Port->setEnabled(true);
    ui->actionDisconnect->setEnabled(false);
    connect(serial,SIGNAL(readyRead()),this,SLOT(serialReceived()));
    connect(sDisplay,SIGNAL(rejected()),this,SLOT(serialdisplayClosed()));
}

MainWindow::~MainWindow()
{
    if(serial->isOpen()){
        serial->close();
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

    sDialog = new serialDialog(this);
    sDialog->setWindowIcon(QIcon(":/icons/icons/Serial.ico"));
    sDialog->setWindowFlags(sDialog->windowFlags() & ~Qt::WindowContextHelpButtonHint);
    sDialog->setWindowTitle("Serial Port Setup");
    sDialog->setModal(true);
    execResult = sDialog->exec();

    if(execResult== QDialog::Accepted){
        qDebug() << "Accepted";
        portName = sDialog->getPortName();
        Baud = sDialog->getBaudRate();
        DataW = sDialog->getDataWidth();
        Parity = sDialog->getParity();
        StopBits = sDialog->getStopBits();
        FlowControl = sDialog->getFlowControl();

        //Setup serial port
        setupSerial(portName,Baud,DataW,Parity,StopBits,FlowControl);

        serial->open(QIODevice::ReadWrite);


        sendQString("Read:all;Read:1;Write:2:false;Write:3:8;Do:1");
        /*
        QByteArray txWrite = "<Driver><Name>Camera</Name><ID>1</ID></Driver>";
        serial->write(txWrite);
        QString strings = txWrite;
        sDisplay->setTXText(strings);
*/

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

void MainWindow::setupSerial(QString portName, QString Baud, QString DataW, QString Parity, QString StopBits, QString FlowControl)
{

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

void MainWindow::setPortName(QString portName)
{
    serial->setPortName(portName);
}

void MainWindow::setBaudRate(QString Baud)
{
    if(Baud == "1200"){
        serial->setBaudRate(QSerialPort::Baud1200);
    }
    else if(Baud == "2400"){
        serial->setBaudRate(QSerialPort::Baud2400);
    }
    else if(Baud == "4800"){
        serial->setBaudRate(QSerialPort::Baud4800);
    }
    else if(Baud == "9600"){
        serial->setBaudRate(QSerialPort::Baud9600);
    }
    else if(Baud == "19200"){
        serial->setBaudRate(QSerialPort::Baud19200);
    }
    else if(Baud == "38400"){
        serial->setBaudRate(QSerialPort::Baud38400);
    }
    else if(Baud == "57600"){
        serial->setBaudRate(QSerialPort::Baud57600);
    }
    else if(Baud == "115200"){
        serial->setBaudRate(QSerialPort::Baud115200);
    }
}

void MainWindow::setDataWidth(QString DataW)
{
    if(DataW == "5 bit"){
        serial->setDataBits(QSerialPort::Data5);
    }
    if(DataW == "6 bit"){
        serial->setDataBits(QSerialPort::Data6);
    }
    if(DataW == "7 bit"){
        serial->setDataBits(QSerialPort::Data7);
    }
    if(DataW == "8 bit"){
        serial->setDataBits(QSerialPort::Data8);
    }
}

void MainWindow::setParity(QString Parity)
{
    if(Parity == "none"){
        serial->setParity(QSerialPort::NoParity);
    }
    else if(Parity == "odd"){
        serial->setParity(QSerialPort::OddParity);
    }
    else if(Parity == "even"){
        serial->setParity(QSerialPort::EvenParity);
    }
    else if(Parity == "mark"){
        serial->setParity(QSerialPort::MarkParity);
    }
    else if(Parity == "space"){
        serial->setParity(QSerialPort::SpaceParity);
    }
}

void MainWindow::setStopBits(QString StopBits)
{
    if(StopBits == "1 bit"){
        serial->setStopBits(QSerialPort::OneStop);
    }
    else if(StopBits == "1.5 bit"){
        serial->setStopBits(QSerialPort::OneAndHalfStop);
    }
    else if(StopBits == "2 bit"){
        serial->setStopBits(QSerialPort::TwoStop);
    }
}

void MainWindow::setFlowControl(QString FlowControl)
{
    if(FlowControl == "Xon/Xoff"){
        serial->setFlowControl(QSerialPort::SoftwareControl);
    }
    else if(FlowControl == "hardware"){
        serial->setFlowControl(QSerialPort::HardwareControl);
    }
    else if(FlowControl == "none"){
        serial->setFlowControl(QSerialPort::NoFlowControl);
    }
}

void MainWindow::on_actionDisconnect_triggered()
{
    ui->actionDisconnect->setEnabled(false);
    ui->actionSerial_Port->setEnabled(true);
    ui->statusBar->showMessage("Disconnected from Serial Port");

    if(serial->isOpen()){
        serial->close();
        qDebug() << "Serial Port has been closed.";
    }
    else{
        qDebug() << "No Serial Port was open.";
    }
}

void MainWindow::serialReceived()
{
    QString sRead(serial->readAll());
    sDisplay->setRXText(sRead);
}

void MainWindow::on_actionDisplay_Serial_Data_triggered()
{
    ui->actionDisplay_Serial_Data->setEnabled(false);
    sDisplay->setWindowFlags(sDisplay->windowFlags() & ~Qt::WindowContextHelpButtonHint);
    sDisplay->show();
    sDisplay->exec();
}

void MainWindow::sendQString(QString text){
    QByteArray txWrite = text.toStdString().c_str();
    serial->write(txWrite);
    //QString strings = txWrite;
    sDisplay->setTXText(text);
}

void MainWindow::serialdisplayClosed(){
    ui->actionDisplay_Serial_Data->setEnabled(true);
}

void MainWindow::on_actionLoad_Setup_File_triggered()
{
    setupFile = new QString;
    *setupFile = QFileDialog::getOpenFileName(this,tr("Open File"),"./setup","layout Files (*.layout)");
    qDebug() << *setupFile;

    if(*setupFile == ""){
        qDebug() << "Cancelled";
    }
    else{
        //Open file and readAll into fileString then close file
        qDebug() <<"Opening File";
        QFile file(*setupFile);
        file.open(QIODevice::ReadOnly);
        QTextStream in(&file);
        QString fileString = in.readAll();
        file.close();


        //cut out extra chars
        fileString = fileString.replace("\r","");
        fileString = fileString.replace("\n","");
        fileString = fileString.replace("\t","");

        //cut out everything outside of <Setup>...</Setup>
        int start = fileString.indexOf("<Setup>") + 7;
        int end = fileString.indexOf("</Setup>");
        fileString = fileString.mid(start,end-start);



        QString startStr="<Driver>";
        QString endStr = "</Driver>";
        QString resultStr;
        qDebug() << "Test" << fileString.indexOf(endStr);
        getBetweenTags(2,&fileString,&startStr,&endStr, &resultStr);
        //qDebug() << fileString;
        //qDebug() << resultStr;

        //getQStringBetweenQStrings(string, front, back)
        //QStringList fileSList = fileString.split("<Driver>");
        //fileSList.replaceInStrings("\r","");
        //fileSList.replaceInStrings("\n","");
        //fileSList.replaceInStrings("\t","");
        //qDebug() << fileSList;


        //Count # of drivers
        //int numDrivers = fileString.count("<Driver>");
        //qDebug() << "There are" << numDrivers << "drivers." << endl;


        //for( int i=0; i< numDrivers; ++i)
        //{
        //    qDebug() << "Driver " << i+1 << "." << endl;

        //}
        //int driverStart = 0;
        //int driverEnd = 0;
        //while((driverStart = fileString.indexOf("<Driver>",driverStart)) != -1){
        //    qDebug() << "Found <Driver> tag at index position " << driverStart << endl;
        //    fileString.chop(driverStart)
        //    driverStart++;
        //}
        //qDebug() << endl << fileString;


    }
}

void MainWindow::getBetweenTags(int instance, QString *string, QString *front, QString *back, QString *result){
    qDebug() << "front" << *front;
    int instances = string->count(front);
    int lengthFront = front->length();

    if(instances < instance){
        qDebug() << "instance requested not in file";
    }
    else{
        int curInst = 0;
        int indexFront = string->indexOf(front);
        curInst++;
        qDebug() << "First Instance of" << *front << "is at index" << indexFront;

        while(curInst < instance){
            indexFront = string->indexOf(front,indexFront+1);
            curInst++;
        }

        qDebug() << instance << "Instance of" << *front << "is at index" <<indexFront;
        qDebug() << string->right(indexFront);
        qDebug() << endl;


        //int indexFront = front->indexOf(front)+lengthFront;
        //int indexBack = back->indexOf(back);
        //int lengthResult = indexBack - indexFront;


        //*result = string->mid(indexFront,lengthResult);
    }
}

void MainWindow::on_radioLive_clicked()
{
    ui->submitButton->setEnabled(false);
}

void MainWindow::on_radioOnSubmit_clicked()
{
    ui->submitButton->setEnabled(true);
}
