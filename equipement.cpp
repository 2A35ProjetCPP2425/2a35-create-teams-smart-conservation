#include "equipement.h"
equipement::equipement(){}
equipement::equipement(int id,QString nom,QString categorie,QString etat,QString fournisseur,QString localisation,QString parametre,QDate dated,QDate datep,QDate dateaq,double p) {
    id_eq=id;
    nom_e=nom;
    categorie_e=categorie;
    etat_e=etat;
    fournisseur_e=fournisseur;
    localisation_e=localisation;
    parametre_M_e=parametre;
    Date_D_e=dated;
    Date_P_e=datep;
    Date_aq_e=dateaq;
    prix_e=p;

}
bool equipement::ajouter() {
    QRegularExpression regex("^[A-Za-z ]+$");


    if (!regex.match(nom_e).hasMatch() || !regex.match(categorie_e).hasMatch()||!regex.match(etat_e).hasMatch() ||! regex.match(fournisseur_e).hasMatch()||! regex.match(localisation_e).hasMatch()||! regex.match(parametre_M_e).hasMatch()) {
        qDebug() << "Invalid input: Name and surname should only contain letters.";
        return false;
    }
    QSqlQuery query;
    query.prepare("INSERT INTO MEHDI.EQUIPEMENT (ID_EQUIPEMENT, NOM, CATEGORIE, ETAT, DATE_AQUESITION, DATE_DERNIERM, DATE_PROCHAINM, FOURNISSEUR, LOCALISATION, PRIX, PARAMETRE_SUIVI) "
                  "VALUES (:id_eq, :nom, :categorie, :etat, :date_aquesition, :date_dm, :date_pm, :fournisseur, :localisation, :prix, :parametre_suivi)");


    query.bindValue(":id_eq", id_eq);

    query.bindValue(":nom", nom_e);
    query.bindValue(":categorie", categorie_e);
    query.bindValue(":date_aquesition", Date_aq_e);
    query.bindValue(":date_dm",Date_D_e);
    query.bindValue(":date_pm", Date_P_e);
    query.bindValue(":etat", etat_e);
    query.bindValue(":fournisseur", fournisseur_e);
    query.bindValue(":localisation", localisation_e);
   // query.bindValue(":fournisseur", fournisseur_e);
    query.bindValue(":prix", prix_e);
    query.bindValue(":parametre_suivi",parametre_M_e);

    return query.exec();

}

bool equipement::supprimer(int id)
{
    QSqlQuery query;



    query.prepare("DELETE FROM MEHDI.EQUIPEMENT WHERE (ID_EQUIPEMENT=:id_eq) ");
    query.bindValue(":id_eq", id);


    return query.exec();
}
QSqlQueryModel* equipement::afficher() {
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM MEHDI.EQUIPEMENT");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));

    return model;
}

bool equipement::modifier(int id)
{
    QSqlQuery query;
    QString queryString = "UPDATE MEHDI.EQUIPEMENT SET ";
    bool firstField = true;


    if (!nom_e.isEmpty()) {
        if (!firstField) queryString += ", ";
        queryString += "NOM=:nom";
        firstField = false;
    }
    if (!categorie_e.isEmpty()) {
        if (!firstField) queryString += ", ";
        queryString += "CATEGORIE=:categorie";
        firstField = false;
    }
    if (!etat_e.isEmpty()) {
        if (!firstField) queryString += ", ";
        queryString += "ETAT=:etat";
        firstField = false;
    }
    if (!fournisseur_e.isEmpty()) {
        if (!firstField) queryString += ", ";
        queryString += "FOURNISSEUR=:fournisseur";
        firstField = false;
    }
    if (!localisation_e.isEmpty()) {
        if (!firstField) queryString += ", ";
        queryString += "LOCALISATION=:localisation";
        firstField = false;
    }
    if (!Date_aq_e.isNull()) {
        if (!firstField) queryString += ", ";
        queryString += "DATE_AQUESITION=:date_aquesition";
        firstField = false;
    }
    if (!Date_D_e.isNull()) {
        if (!firstField) queryString += ", ";
        queryString += "DATE_DERNIERM=:date_dm";
        firstField = false;
    }
    if (!Date_P_e.isNull()) {
        if (!firstField) queryString += ", ";
        queryString += "DATE_PROCHAINM=:date_pm";
        firstField = false;
    }
    if (prix_e!=0) {
        if (!firstField) queryString += ", ";
        queryString += "PRIX=:prix";
        firstField = false;
    }
    if (!parametre_M_e.isEmpty()) {
        if (!firstField) queryString += ", ";
        queryString += "PARAMETRE_SUIVI=:parametre";
        firstField = false;
    }


    if (firstField) {

        return false;
    }


    queryString += " WHERE ID_EQUIPEMENT=:id_eq";


    query.prepare(queryString);


    if (!nom_e.isEmpty()) query.bindValue(":nom", nom_e);
    if (!categorie_e.isEmpty()) query.bindValue(":categorie", categorie_e);
    if (!etat_e.isEmpty()) query.bindValue(":etat", etat_e);
    if (!fournisseur_e.isEmpty()) query.bindValue(":fournisseur", fournisseur_e);
    if (!localisation_e.isEmpty()) query.bindValue(":localisation", localisation_e);
    if (!Date_aq_e.isNull()) query.bindValue(":date_aquesition", Date_aq_e);
    if (!Date_D_e.isNull()) query.bindValue(":date_dm", Date_D_e);
    if (!Date_P_e.isNull()) query.bindValue(":date_pm", Date_P_e);
    if (!parametre_M_e.isEmpty()) query.bindValue(":parametre", parametre_M_e);
    if (prix_e != 0) query.bindValue(":prix", prix_e);

    query.bindValue(":id_eq", id);

    return query.exec();
}
QSqlQueryModel* equipement::rechercher(const QString &partialId) {
    QSqlQuery query;


    query.prepare("SELECT * FROM MEHDI.EQUIPEMENT WHERE TO_CHAR(ID_EQUIPEMENT) LIKE :partialId");
    query.bindValue(":partialId", partialId + "%");
    if (!query.exec()) {
        qDebug() << "Search failed, SQL error:" << query.lastError().text();
        return nullptr;
    }
    // Fill model with results
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery(std::move(query));
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_EQUIPEMENT"));
    //model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    //model->setHeaderData(2, Qt::Horizontal, QObject::tr("CATEGORIE"));


    return model;
}

QSqlQueryModel* equipement::trier(const QString& methode) {
    QSqlQuery query;


    QString queryString = "SELECT * FROM MEHDI.EQUIPEMENT";
    if (methode == "nom") {
        queryString += " ORDER BY NOM ASC";
    } else if (methode == "date") {
        queryString += " ORDER BY DATE_AQUESITION ASC";
    }

    query.exec(queryString);


    QSqlQueryModel* model = new QSqlQueryModel();
    model->setQuery(std::move(query));
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_EQUIPEMENT"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("CATEGORIE"));


    return model;
}
QSqlTableModel* equipement::getTableModel(QObject *parent)
{
    QSqlTableModel *model = new QSqlTableModel(parent);
    model->setTable("MEHDI.EQUIPEMENT");
    model->setEditStrategy(QSqlTableModel::OnFieldChange);
    model->select();
    return model;
}


