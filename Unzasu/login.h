#ifndef LOGIN_H
#define LOGIN_H
#include "dashboard.h"
#include "admindashboard.h"

#include <QDialog>

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_btn_submit_login_clicked();

    void on_btn_Reset_login_clicked();

private:
    //Creating a dashboard object
    Dashboard *ptrDashboard;
    AdminDashboard *ptrAdminDashboard;

    Ui::Login *ui;


};

#endif // LOGIN_H
