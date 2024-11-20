#include "secondwindow.h"
#include "secondwindow.cpp"

#include "connection.h"
#include <QApplication>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
   Connection c;
  bool test=c.createconnect();
  MainWindow w;
  if(test)
  {  w.show();

      QMessageBox::information(nullptr,QObject::tr("ok"),
                               QObject::tr("connexion successful\n" "Click Cancel to exit."), QMessageBox::Cancel);}
  else{
       QMessageBox::critical(nullptr,QObject::tr("not ok"),
                             QObject::tr("connexion failed\n" "Click Cancel to exit."), QMessageBox::Cancel);
  }
  w.show();






    return a.exec();
};
