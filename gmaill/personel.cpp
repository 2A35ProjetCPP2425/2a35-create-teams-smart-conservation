#include "personel.h"
#include "qsqlerror.h"



personel::personel()  {}

personel::personel(int id, QString nom, QString prenom,QDate date,QString poste,int salaire, QString mail,int telephone)
{
    this->id = id;
    this->nom = nom;
    this->prenom = prenom;
    this->date = date;
    this->poste = poste;
    this->salaire = salaire;
    this->mail = mail;
    this->telephone = telephone;


}

bool personel::ajouter()
{
    QSqlQuery query;
   // QString res = QString::number(id);


    query.prepare("INSERT INTO ACHWEK.PERSONELL (ID, NOM, PRENOM, DATE_EMBAUCHE, POSTE, SALAIRE, MAIL, TELEPHONE ) "
                  "VALUES (:ID, :NOM, :PRENOM, :DATE_EMBAUCHE, :POSTE, :SALAIRE, :MAIL, :TELEPHONE)");

    query.bindValue(":ID", id);
    query.bindValue(":NOM", nom);
    query.bindValue(":PRENOM", prenom);
    query.bindValue(":DATE_EMBAUCHE", date);
    query.bindValue(":POSTE", poste);
    query.bindValue(":SALAIRE", salaire);
    query.bindValue(":MAIL", mail);
    query.bindValue(":TELEPHONE", telephone);
    return query.exec();



}


QSqlQueryModel* personel::afficher()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("select * from ACHWEK.PERSONELL");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("NOM"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("PRENOM"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("DATE_EMBAUCHE"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("POSTE"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("SALAIRE"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("MAIL"));
    model->setHeaderData(7,Qt::Horizontal,QObject::tr("TELEPHONE"));

    return model;  
}



bool personel::supprimer(int id)
{
    QSqlQuery query;
    QString res=QString::number(id);
    query.prepare("Delete from ACHWEK.PERSONELL where ID = :id ");
    query.bindValue(":id", res);

    return query.exec();
}



bool personel::modifier(int id)
{

    QSqlQuery query;
    query.prepare("UPDATE ACHWEK.PERSONELL SET NOM = :nom, PRENOM = :prenom, DATE_EMBAUCHE = :date_embauche, POSTE = :poste, SALAIRE = :salaire, MAIL = :mail, TELEPHONE = :telephone WHERE ID = :id");
    query.bindValue(":id", id);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":date_embauche", date);
    query.bindValue(":poste", poste);
    query.bindValue(":salaire", salaire);
    query.bindValue(":mail", mail);
    query.bindValue(":telephone", telephone);

    return query.exec(); // Si tout s'est bien passé
}

