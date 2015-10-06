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
    void setupSerial(QString portName, QString Baud, QString DataW, QString Parity, QString StopBits, QString FlowControl);
    void setPortName(QString portName);
    void setBaudRate(QString Baud);
    void setDataWidth(QString DataW);
    void setParity(QString Parity);
    void setStopBits(QString StopBits);
    void setFlowControl(QString FlowControl);
    ~MainWindow();

private slots:
    void on_actionSerial_Port_triggered();

    void on_actionClose_triggered();

    void on_actionDisconnect_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

