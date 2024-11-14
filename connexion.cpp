#include "connexion.h"
#include <QSqlError>
#include <QDebug>

connexion::connexion() {}

bool connexion::createconnect() {
    bool test = false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("CPP_Project2A35"); // Nom de la source de données (DSN)
    db.setUserName("youssef"); // Nom d'utilisateur Oracle
    db.setPassword("hamzi"); // Mot de passe de l'utilisateur

    if (db.open()) {
        test = true;
        qDebug() << "Connexion à la base de données réussie.";

    } else {
        qDebug() << "Erreur de connexion : " << db.lastError().text();
    }

    return test;
}
