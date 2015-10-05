#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "serialdialog.h"
#include <QString>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionSerial_Port_triggered()
{
    serialDialog sDialog;
    sDialog.setWindowTitle("Serial Port Setup");
    sDialog.setModal(true);
    sDialog.exec();

}

void MainWindow::on_actionClose_triggered()
{
    QApplication::quit();
}


/*
void MainWindow::setSPortNameVar(std::string name)
{
    SPortNameVar = name;
}

std::string MainWindow::getSPortNameVar()
{
    return SPortNameVar;
}

void MainWindow::printSPortNameVar()
{
    QString name = QString::fromStdString(SPortNameVar);
    qDebug() << "Port Name :" << name;// << SPortNameVar;
}
*/
