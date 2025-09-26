#include "login.h"
#include "ui_login.h"
#include "mydb.h"
#include <QSqlQuery>
#include <QCryptographicHash>
#include<QDebug>

Login::Login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
    ptrDashboard = new Dashboard();
    ptrAdminDashboard = new AdminDashboard();
}

Login::~Login()
{
    delete ui;
    delete ptrAdminDashboard;
    delete ptrDashboard;
}

void Login::on_btn_submit_login_clicked()
{
//query login details to the database
    QString username = ui->lineEdit_username_login->text();
    QString password = ui->lineEdit_password_login->text();
    QString role = ui->comboBox_select_account_type->currentText();

     ////////////////
    QByteArray hashedPassword = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256).toHex();

    QSqlQuery GetUser(MyDB::getInstance()->getDBInstance());

    if (role == "Admin") {
        GetUser.prepare("SELECT * FROM Admin_login WHERE username = :username AND password = :password");
    } else if (role == "Student") {
        GetUser.prepare("SELECT * FROM Student_login WHERE username = :username AND password = :password");
    } else {
        QMessageBox::warning(this, "Warning!", "Please select a valid account type.");
        return;
    }

    GetUser.bindValue(":username", username);
    GetUser.bindValue(":password", password);/// Use Hashed password

    if (GetUser.exec()) {
        int UserFindCount = 0;
        while (GetUser.next()) {
            UserFindCount++;
        }
        if (UserFindCount == 1) {
            if (role == "Admin") {
               ptrAdminDashboard->show();
            } else if (role == "Student") {
                 ptrDashboard->show();

            }
            this->hide();
        } else {
            QMessageBox::warning(this, "Warning!", "Invalid Username or Password.");
        }
    } else {
        QMessageBox::critical(this, "Database Error", "Failed to execute query: " + GetUser.lastError().text());
    }






}


void Login::on_btn_Reset_login_clicked()
{

}

