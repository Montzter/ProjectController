#ifndef SERIALDIALOG_H
#define SERIALDIALOG_H

#include <QDialog>
#include <QSerialPort>

namespace Ui {
class serialDialog;
}

class serialDialog : public QDialog
{
    Q_OBJECT

public:
    explicit serialDialog(QWidget *parent = 0);
    QString getPortName();
    QString getBaudRate();
    QString getDataWidth();
    QString getParity();
    QString getStopBits();
    QString getFlowControl();
    ~serialDialog();

private slots:

    void on_cancelButton_clicked();

    void on_connectButton_clicked();

private:
    Ui::serialDialog *ui;
};

#endif // SERIALDIALOG_H
