#ifndef ARDUINO_H
#define ARDUINO_H

#include <QObject>
#include "QtSerialPort/qserialport.h"
#include <QSerialPortInfo>

class Arduino : public QObject
{
    Q_OBJECT

public:
    explicit Arduino(QObject *parent = nullptr);
    ~Arduino();

    void initArduino();  // Initialiser la communication avec l'Arduino
    void readData();     // Lire les données envoyées par l'Arduino

signals:
    void poidsReceived(float poids);  // Signal pour indiquer que le poids a été reçu

private:
    QSerialPort *serialPort;  // Port série pour communiquer avec l'Arduino
    QString buffer;           // Tampon pour stocker les données lues
};

#endif // ARDUINO_H
