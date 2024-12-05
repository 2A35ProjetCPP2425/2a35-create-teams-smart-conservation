#ifndef ARDUINO_H
#define ARDUINO_H

#include <QObject>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>
#include <QByteArray>

class Arduino : public QObject
{
    Q_OBJECT

public:
    explicit Arduino(QObject *parent = nullptr);

    // Public methods
    int connect_arduino();              // Connect to the Arduino
    int close_arduino();                // Close the Arduino connection
    bool saveWeightToDatabase(double weight);  // Save weight to the database
   // bool setupDatabase(const QString &dbPath); // Setup database connection
    QString getarduino_port_name();     // Get the port name of the connected Arduino
    QSerialPort *getserial();           // Get the serial port object
    void readWeightFromSensor();        // Read weight data from the sensor
    QByteArray getWeightData();         // Public wrapper for accessing read_from_arduino()

signals:
    void weightDetected(const double &weight);  // Signal emitted when weight is detected

private:
    QString data;                        // Data received from the Arduino
    QString arduino_port_name;           // Arduino port name
    bool arduino_is_available;           // Flag to check if Arduino is available
    QSerialPort *serial;                 // Serial port object for communication with Arduino
    const int arduino_uno_vendor_id = 0x2341; // Example vendor ID for Arduino Uno
    const int arduino_uno_producy_id = 0x0043; // Example product ID for Arduino Uno
public:
    QByteArray read_from_arduino();// Private method for reading raw data from Arduino
private:
    QString accumulatedData;  // Stocke les données accumulées

};

#endif // ARDUINO_H
