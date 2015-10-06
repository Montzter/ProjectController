#ifndef SERIALPORTDISPLAY_H
#define SERIALPORTDISPLAY_H

#include <QDialog>

namespace Ui {
class SerialPortDisplay;
}

class SerialPortDisplay : public QDialog
{
    Q_OBJECT

public:
    void setRXText(QString string);
    void setTXText(QString string);
    explicit SerialPortDisplay(QWidget *parent = 0);
    ~SerialPortDisplay();

private slots:


    void on_clearRXButton_clicked();

    void on_clearTXButton_clicked();

private:
    Ui::SerialPortDisplay *ui;
};

#endif // SERIALPORTDISPLAY_H
