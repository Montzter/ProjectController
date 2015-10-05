#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionSerial_Port_triggered();

    void on_actionClose_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

/*
*.setPortName("com4")
*.setBaudRate(QSerialPort::Baud9600);
*.setDataBits(QSerialPort::Data8);
*.setParity(QSerialPort::NoParity);
*.setStopBits(QSerialPort::OneStop);
*.setFlowControl(QSerialPort::NoFlowControl);
.open(QIODevice::ReadWrite);
.write("ok");

*/
