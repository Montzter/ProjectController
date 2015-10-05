#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    //void setSPortNameVar(std::string name);
    //std::string getSPortNameVar();
    //void printSPortNameVar();
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionSerial_Port_triggered();

    void on_actionClose_triggered();

private:
    std::string SPortNameVar = "";
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
