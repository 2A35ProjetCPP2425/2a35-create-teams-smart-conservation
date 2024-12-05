#include "arduino.h"
#include <QSerialPort>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QMessageBox>
#include "arduino.h"
#include "qsqlerror.h"
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QtSql/QSqlQuery>
#include <QDebug>
#include <QRegularExpression>  // Assurez-vous d'inclure cette en-tête

// Arduino class constructor
Arduino::Arduino(QObject *parent) : QObject(parent) {
    data = "";
    arduino_port_name = "COM3";
    arduino_is_available = false;
    serial = new QSerialPort(this);
}

// Get the Arduino port name
QString Arduino::getarduino_port_name() {
    return arduino_port_name;
}

// Get the QSerialPort object for serial communication
QSerialPort *Arduino::getserial() {
    return serial;
}

// Connect to the Arduino via the serial port
int Arduino::connect_arduino() {
    // Search for the Arduino board by vendor and product IDs
    foreach (const QSerialPortInfo &serial_port_info, QSerialPortInfo::availablePorts()) {
        if (serial_port_info.hasVendorIdentifier() && serial_port_info.hasProductIdentifier()) {
            if (serial_port_info.vendorIdentifier() == arduino_uno_vendor_id &&
                serial_port_info.productIdentifier() == arduino_uno_producy_id) {
                arduino_is_available = true;
                arduino_port_name = serial_port_info.portName();
            }
        }
    }

    qDebug() << "arduino_port_name is :" << arduino_port_name;

    if (arduino_is_available) {
        // Configure the serial port
        serial->setPortName(arduino_port_name);
        if (serial->open(QSerialPort::ReadWrite)) {
            serial->setBaudRate(QSerialPort::Baud9600);  // Baud rate: 9600 bits per second
            serial->setDataBits(QSerialPort::Data8);     // Data bits: 8 bits
            serial->setParity(QSerialPort::NoParity);    // No parity bit
            serial->setStopBits(QSerialPort::OneStop);   // One stop bit
            serial->setFlowControl(QSerialPort::NoFlowControl); // No flow control
            return 0; // Success
        }
        return 1; // Failed to open the serial port
    }
    return -1; // Arduino not found
}

// Close the Arduino connection
int Arduino::close_arduino() {
    if (serial->isOpen()) {
        serial->close();
        return 0; // Success
    }
    return 1; // Failed to close the connection
}




void Arduino::readWeightFromSensor() {
    QByteArray rawData = serial->readAll();  // Read all available data
    qDebug() << "Raw data received from Arduino: " << rawData;

    // Convert the data to a QString and accumulate it
    QString rawDataStr = QString::fromUtf8(rawData).trimmed();
    accumulatedData.append(rawDataStr);  // Accumulate received data

    qDebug() << "Accumulated data: " << accumulatedData;

    // Regular expression to extract a floating-point number after "Poids"
    QRegularExpression regex("Poids\\s*[:]?\\s*(-?\\d*\\.?\\d+)");  // Look for "Poids" followed by a number
    QRegularExpressionMatch match = regex.match(accumulatedData);

    QString weight;

    if (match.hasMatch()) {
        weight = match.captured(1);  // Extract the weight number
        qDebug() << "Extracted weight: " << weight;

        // Emit the weight as a double
        emit weightDetected(weight.toDouble());  // Emit as double

        // Clear the accumulated data for the next reading
        accumulatedData.clear();
    } else {
        qDebug() << "No weight data found.";
    }
}



// Save the detected weight to the database
bool Arduino::saveWeightToDatabase(double weight) {
    QSqlQuery query;
    query.prepare("INSERT INTO CLIENT (POIDS) VALUES (:weight)");
    query.bindValue(":weight", weight);

    if (query.exec()) {
        qDebug() << "Weight saved to database successfully.";
        return true;
    } else {
        qDebug() << "Failed to save weight to database: " << query.lastError();
        return false;
    }
}


// Read from Arduino and return as QByteArray
QByteArray Arduino::read_from_arduino() {
    if (serial->isOpen() && serial->isReadable()) {
        QByteArray data = serial->readAll(); // Lire les données disponibles
        qDebug() << "Données reçues : " << data;
        return data;
    }
    return QByteArray(); // Retourne une chaîne vide si aucune donnée
}


