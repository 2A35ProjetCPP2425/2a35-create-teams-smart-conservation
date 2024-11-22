#include "connexion.h"

connexion::connexion() {}
bool connexion::createconnect()
{bool test=false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("projet_cpp2A35");//inserer le nom de la source de données
    db.setUserName("mehdi");//inserer nom de l'utilisateur
    db.setPassword("esprit35");//inserer mot de passe de cet utilisateur

    if (db.open())
        test=true;





    return  test;
}
