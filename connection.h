#ifndef CONNECTION_H
#define CONNECTION_H
#include <QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
#include "secondwindow.h"
class Connection
{
    QSqlDatabase db;

public:
    Connection();
    bool createconnect();
    void closeConnection();
};

#endif // CONNECTION_H
