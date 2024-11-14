#ifndef CLIENT_H
#define CLIENT_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlTableModel>

class Client {
private:
    int idcl;
    QString nomcl, prenomcl, emailcl, adressecl, histocl;
    int IDC;


public:
    Client() {}

    // Constructeur uniquement déclaré ici, pas défini
    Client(int, QString, QString, QString, QString, QString, int);
    Client(int);
    // Getters
public:
    // Constructeurs, destructeurs, et autres méthodes publiques...

    // Getters
    int getIdcl() const;
    QString getnomcl() const;
    QString getprenomcl() const;
    QString getemailcl() const;
    QString getadressecl() const;
    QString gethistocl() const;
    int getIDC() const;

    // Setters
    void setidcl(int id);
    void setnomcl(const QString& nom);
    void setprenomcl(const QString& prenom);
    void setemailcl(const QString& email);
    void setadressecl(const QString& adresse);
    void sethistocl(const QString& historique);
    void setIDC(int idc);

    bool ajouter();

    QSqlQueryModel* afficher();

    bool supprimer(int);
    bool modifierClient(int idcl, QString nomcl, QString prenomcl, QString emailcl, QString adressecl, QString histocl, int IDC);

};

#endif // CLIENT_H
