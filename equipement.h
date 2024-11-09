#ifndef EQUIPEMENT_H
#define EQUIPEMENT_H
#include <QString>
#include <QSqlQuery>
#include <QSqlError>
#include <QVariant>
#include <QSqlQueryModel>
#include<QDate>
#include<QRegularExpression>
#include<QSqlTableModel>
class equipement
{
private:
        int id_eq;
        QString nom_e, categorie_e, etat_e;
        QDate Date_aq_e,Date_D_e,Date_P_e;
        QString fournisseur_e,localisation_e;
        double prix_e;
        QString parametre_M_e;

public:
        int getid(){return id_eq;}
        int setid(int id)
        {
            id_eq=id;
            return id_eq;
        }

        QString setnom(QString nom)
        {
            nom_e=nom;
            return nom_e;
        }
        QString setcategorie(QString categorie)
        {
            categorie_e=categorie;
            return categorie_e;
        }
        QString setetat(QString etat)
        {
            etat_e=etat;
            return etat_e;
        }
        QString setfournisseur(QString fournisseur)
        {
            fournisseur_e=fournisseur;
            return fournisseur_e;
        }
        QString setlocalisation(QString localisation)
        {
            localisation_e=localisation;
            return localisation_e;
        }
        QString setparametre(QString parametre)
        {
            parametre_M_e=parametre;
            return parametre_M_e;
        }
        double setprix(double prix){
            prix_e=prix;
            return prix_e;
        }
        QDate setdated(QDate dated){
            Date_D_e=dated;
            return dated;
        }
        QDate setdatep(QDate datep){
            Date_P_e=datep;
            return Date_P_e;
        }
        QDate setdatea(QDate datea){
            Date_aq_e=datea;
            return Date_aq_e;
        }
        equipement();
    equipement(int id,QString nom,QString categorie,QString etat,QString fournisseur,QString localisation,QString parametre,QDate dated,QDate datep,QDate dateaq,double p);
    bool ajouter();

    QSqlQueryModel* afficher();
    bool supprimer(int id);
    bool modifier(int id);
    QSqlQueryModel* rechercher(const QString& partialId);
    QSqlQueryModel* trier(const QString& methode);
    QSqlTableModel* getTableModel(QObject *parent);
};






#endif // EQUIPEMENT_H
