#ifndef MYDB_H
#define MYDB_H
#include <QSql>
#include<QSqlDatabase>
#include<QSqlDriverPlugin>
#include <QMessageBox>
#include <QSqlDriver>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlTableModel>
#include<QSqlResult>
#include<QDebug>
#include<QSqlQueryModel>
#include<QTableWidget>
#include<QDialog>
#include<QBuffer>
#include<QByteArray>
#include<QFile>
#include<QDebug>

class MyDB
{
private:
    MyDB();
    static MyDB *instance;
    void init();
    QSqlDatabase db;
public:
    static  MyDB* getInstance();
    static void   ResetInstance();


    QSqlDatabase getDBInstance();
    ~MyDB();
};

#endif // MYDB_H
