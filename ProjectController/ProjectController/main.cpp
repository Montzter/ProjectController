#include "mainwindow.h"
#include <QApplication>
#include "ui_mainwindow.h"
#include "serialdialog.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <qDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.setWindowTitle("FPGA Project Controller");
    w.setWindowIcon(QIcon(":/icons/icons/PCblur2.ico"));
    w.show();

    return a.exec();
}
