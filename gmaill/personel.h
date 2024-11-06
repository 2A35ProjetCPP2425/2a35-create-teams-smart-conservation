#ifndef PERSONEL_H
#define PERSONEL_H

#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QString>
#include <QDate>

class personel
{
    QString nom, prenom, poste, mail;
    int id, telephone;
    int salaire; // Assurez-vous que salaire est de type float
    QDate date;

public:
    // Constructeurs
    personel();
    personel(int id, QString nom, QString prenom, QDate date, QString poste, int salaire, QString mail, int telephone);

    // Getters
    QString getNom() { return nom; }
    QString getPrenom() { return prenom; }
    QString getPoste() { return poste; }
    QString getMail() { return mail; }
    int getID() { return id; }
    int getTelephone() { return telephone; }
    int getsalaire() { return salaire; } // Changez le type de retour en float
    QDate getDate() { return date; }

    // Setters
    void setNom(QString n) { nom = n; }
    void setPrenom(QString p) { prenom = p; }
    void setPoste(QString po) { poste = po; }
    void setMail(QString m) { mail = m; }
    void setID(int id1) { id = id1; }
    void setTelephone(int telephone1) { telephone = telephone1; }
    void setsalaire(int salaire1) { salaire = salaire1; }// Changez le type de paramètre en float
    void setDate(QDate d) { date = d; }


    // Méthodes
    bool ajouter();
    bool supprimer(int id);
    QSqlQueryModel* afficher();
    bool modifier(int id);
};

#endif // PERSONEL_H
