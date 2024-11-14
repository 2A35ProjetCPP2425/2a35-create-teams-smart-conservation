#include "client.h"
#include <QSqlError>
#include <QMessageBox>
#include <QString>
Client::Client(int idcl, QString nomcl, QString prenomcl, QString emailcl, QString adressecl, QString histocl, int IDC) {
    this->idcl = idcl;
    this->nomcl = nomcl;
    this->prenomcl = prenomcl;
    this->emailcl = emailcl;
    this->adressecl = adressecl;
    this->histocl = histocl;
    this->IDC = IDC; // N'oubliez pas de définir idc ici
}
Client::Client(int idcl){
    this->idcl=idcl;
}
// Getter pour idcl
int Client::getIdcl() const {
    return idcl;
}

// Setter pour idcl
void Client::setidcl(int id) {
    idcl = id;
}

// Getter pour nomcl
QString Client::getnomcl() const {
    return nomcl;
}

// Setter pour nomcl
void Client::setnomcl(const QString& nom) {
    nomcl = nom;
}

// Getter pour prenomcl
QString Client::getprenomcl() const {
    return prenomcl;
}

// Setter pour prenomcl
void Client::setprenomcl(const QString& prenom) {
    prenomcl = prenom;
}

// Getter pour emailcl
QString Client::getemailcl() const {
    return emailcl;
}

// Setter pour emailcl
void Client::setemailcl(const QString& email) {
    emailcl = email;
}

// Getter pour adressecl
QString Client::getadressecl() const {
    return adressecl;
}

// Setter pour adressecl
void Client::setadressecl(const QString& adresse) {
    adressecl = adresse;
}

// Getter pour histocl
QString Client::gethistocl() const {
    return histocl;
}

// Setter pour histocl
void Client::sethistocl(const QString& historique) {
    histocl = historique;
}

// Getter pour IDC
int Client::getIDC() const {
    return IDC;
}

// Setter pour IDC
void Client::setIDC(int idc) {
    IDC = idc;
}


bool Client::ajouter() {
    QSqlQuery query;

    // Préparation de la requête SQL
    query.prepare("INSERT INTO CLIENT (IDCL, NOMCL, PRENOMCL, EMAILCL, ADRESSECL, HISTOCL, IDC) "
                  "VALUES (:IDCL, :NOMCL, :PRENOMCL, :EMAILCL, :ADRESSECL, :HISTOCL, :IDC)");

    // Lier les valeurs
    query.bindValue(":IDCL", QString::number(idcl));
    query.bindValue(":NOMCL", nomcl);
    query.bindValue(":PRENOMCL", prenomcl);  // Corrected typo here
    query.bindValue(":EMAILCL", emailcl);
    query.bindValue(":ADRESSECL", adressecl);
    query.bindValue(":HISTOCL", histocl);
    query.bindValue(":IDC", QString::number(IDC));

    // Exécution de la requête
    if (query.exec()) {
        qDebug() << "Client ajouté avec succès";
        return true;
    } else {
        qDebug() << "Erreur lors de l'ajout du client : " << query.lastError().text();
        return false;
    }
}
bool Client::supprimer(int idcl)
{
    QSqlQuery query;
    QString res=QString::number(idcl);
    query.prepare("delete from client where IDCL= :idcl");
    query.bindValue(":idcl",res);
    return query.exec();
}
QSqlQueryModel * Client::afficher()
{

    QSqlQueryModel *model=new QSqlQueryModel();
    model->setQuery("SELECT * FROM CLIENT");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("idcl"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("nomcl"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("prenomcl"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("emailcl"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("adressecl"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("histocl"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("IDC"));
    return model;
}


/*bool Client::modifierClient(int idcl, QString nomcl, QString prenomcl, QString emailcl, QString adressecl, QString histocl, int IDC)
{
    QSqlQuery query;

    // Préparation de la requête SQL pour mettre à jour le client
    query.prepare("UPDATE CLIENT SET "
                  "NOMCL = :nomcl, "
                  "PRENOMCL= :prenomcl, "
                  "EMAILCL = :emailcl, "
                  "ADRESSECL = :adressecl, "
                  "HISTOCL = :histocl, "
                  "IDC = :IDC "
                  "WHERE IDCL = :idcl");


    // Liaison des nouvelles valeurs
    query.bindValue(":idcl", idcl);
    query.bindValue(":nomcl", nomcl);
    query.bindValue(":prenomcl", prenomcl);
    query.bindValue(":emailcl", emailcl);
    query.bindValue(":adressecl", adressecl);
    query.bindValue(":histocl", histocl);
    query.bindValue(":IDC", IDC);

    // Exécution de la requête SQL
    if (query.exec()) {
        // Utilisation des setters pour mettre à jour l'état interne de l'objet
        setidcl(idcl);                 // Met à jour l'ID du client
        setnomcl(nomcl);               // Met à jour le nom du client
        setprenomcl(prenomcl);         // Met à jour le prénom du client
        setemailcl(emailcl);           // Met à jour l'email du client
        setadressecl(adressecl);       // Met à jour l'adresse du client
        sethistocl(histocl);           // Met à jour l'historique d'achat du client
        setIDC(IDC);                   // Met à jour l'IDC du client
        return true;                   // Indique que la mise à jour a réussi
    }

    return false; // Indique que la mise à jour a échoué
}

*/
bool Client::modifierClient(int idcl, QString nomcl, QString prenomcl, QString emailcl, QString adressecl, QString histocl, int IDC)
{
    QSqlQuery query;
    QString queryString = "UPDATE CLIENT SET ";

    bool firstUpdate = true;

    // Only add columns to the query if the value is not empty
    if (!nomcl.isEmpty()) {
        queryString += (firstUpdate ? "" : ", ") + QString("NOMCL = :nomcl");
        firstUpdate = false;
    }
    if (!prenomcl.isEmpty()) {
        queryString += (firstUpdate ? "" : ", ") + QString("PRENOMCL = :prenomcl");
        firstUpdate = false;
    }
    if (!emailcl.isEmpty()) {
        queryString += (firstUpdate ? "" : ", ") + QString("EMAILCL = :emailcl");
        firstUpdate = false;
    }
    if (!adressecl.isEmpty()) {
        queryString += (firstUpdate ? "" : ", ") + QString("ADRESSECL = :adressecl");
        firstUpdate = false;
    }
    if (!histocl.isEmpty()) {
        queryString += (firstUpdate ? "" : ", ") + QString("HISTOCL = :histocl");
        firstUpdate = false;
    }
    if (IDC != -1) { // assuming -1 is an invalid IDC
        queryString += (firstUpdate ? "" : ", ") + QString("IDC = :IDC");
        firstUpdate = false;
    }

    // Add the WHERE condition at the end
    queryString += " WHERE IDCL = :idcl";

    // Prepare the query
    query.prepare(queryString);

    // Bind the values only for the fields that are updated
    if (!nomcl.isEmpty()) query.bindValue(":nomcl", nomcl);
    if (!prenomcl.isEmpty()) query.bindValue(":prenomcl", prenomcl);
    if (!emailcl.isEmpty()) query.bindValue(":emailcl", emailcl);
    if (!adressecl.isEmpty()) query.bindValue(":adressecl", adressecl);
    if (!histocl.isEmpty()) query.bindValue(":histocl", histocl);
    if (IDC != -1) query.bindValue(":IDC", IDC);
    query.bindValue(":idcl", idcl);

    // Execute the query
    if (query.exec()) {
        // Update internal state only for fields that have been modified
        if (!nomcl.isEmpty()) setnomcl(nomcl);
        if (!prenomcl.isEmpty()) setprenomcl(prenomcl);
        if (!emailcl.isEmpty()) setemailcl(emailcl);
        if (!adressecl.isEmpty()) setadressecl(adressecl);
        if (!histocl.isEmpty()) sethistocl(histocl);
        if (IDC != -1) setIDC(IDC);

        return true;
    }

    return false; // Update failed
}
