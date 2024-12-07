#include "arduino.h"
#include <QDebug>

Arduino::Arduino(QObject *parent) : QObject(parent), serialPort(new QSerialPort(this)) {
    connect(serialPort, &QSerialPort::readyRead, this, &Arduino::readData);  // Connecter la lecture des données
}

Arduino::~Arduino() {
    if (serialPort->isOpen()) {
        serialPort->close();
    }
}

void Arduino::initArduino() {
    serialPort->setPortName("COM7");  // Changez ce port en fonction de votre configuration
    serialPort->setBaudRate(QSerialPort::Baud9600);
    serialPort->setDataBits(QSerialPort::Data8);
    serialPort->setParity(QSerialPort::NoParity);
    serialPort->setStopBits(QSerialPort::OneStop);
    serialPort->setFlowControl(QSerialPort::NoFlowControl);

    if (serialPort->open(QIODevice::ReadWrite)) {
        qDebug() << "Arduino connecté.";
    } else {
        qDebug() << "Échec de la connexion à Arduino. Erreur : " << serialPort->errorString();
    }
}

void Arduino::readData() {
    QByteArray data = serialPort->readAll();  // Lire les nouvelles données reçues
    buffer.append(QString::fromUtf8(data));

    // Vérifier si un message complet est présent dans le tampon
    while (buffer.contains(',')) {  // On suppose que le format est "poids,etat"
        int commaIndex = buffer.indexOf(',');

        // Séparer le poids et l'état
        QString poidsStr = buffer.left(commaIndex).trimmed(); // Supprimer les espaces et les caractères indésirables
        QString etatStr = buffer.mid(commaIndex + 1).trimmed();

        qDebug() << "Poids brut : " << poidsStr << ", État brut : " << etatStr;

        bool okPoids, okEtat;
        float poids = poidsStr.toFloat(&okPoids);
        int etat = etatStr.toInt(&okEtat);

        if (okPoids && okEtat) {
            // Si la conversion a réussi, envoyer les données
            qDebug() << "Poids converti : " << poids << ", État converti : " << etat;

            // Émettre le signal pour indiquer que le poids a été reçu
            emit poidsReceived(poids);
        } else {
            qDebug() << "Erreur de conversion des données.";
        }

        // Supprimer les données traitées du tampon
        buffer.clear();
    }
}

