#include "mydb.h"

MyDB* MyDB::instance=nullptr;
MyDB::MyDB() {

    init();
}

void MyDB::init() {

    db = QSqlDatabase::addDatabase("QSQLITE", "Data");
    db.setDatabaseName("C:/Unzasu/Unzasu");

    if(QFile::exists("C:/Unzasu/Unzasu"))
        qDebug() <<"Hi Fred! DB File Exists";
    else
        qDebug() << " Hi Fred Sorry I cant find the Databse File";
    if(!db.open())
        qDebug() <<db.lastError().text();
    else
        QDebug() <<"Hi Fred Database file loaded successfuly";

}

MyDB *MyDB::getInstance()
{
    QDebug()<< "in MyDB::getInstance()";

    if(instance==nullptr)
        instance= new MyDB();
    return instance;
}

QSqlDatabase MyDB::getInstance()
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
