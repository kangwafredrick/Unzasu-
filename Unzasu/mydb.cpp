#include "mydb.h"
#include<QDebug>


MyDB* MyDB::instance=nullptr;
MyDB::MyDB() {

    init();
}

void MyDB::init() {

    db = QSqlDatabase::addDatabase("QSQLITE", "Data");
    db.setDatabaseName("C:/Unzasu/Unzasu/LBTCSU.db");

    if(QFile::exists("C:/Unzasu/Unzasu/LBTCSU.db"))
        qDebug() <<"Hi Fred! DB File Exists";
    else
        qDebug() << " Hi Fred Sorry I cant find the Databse File";
    if(!db.open())
        qDebug() <<db.lastError().text();
    else
        qDebug() <<"Hi Fred Database file loaded successfuly";

}

MyDB *MyDB::getInstance()
{
    qDebug()<< "in MyDB::getInstance()";

    if(instance==nullptr)
        instance= new MyDB();
    return instance;
}

QSqlDatabase MyDB::getDBInstance()
{
    return db;
}

void MyDB::ResetInstance()
{
    delete instance;
    instance=nullptr;
}

MyDB::~MyDB()
{
    db.close();
}
