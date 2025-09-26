#include "adduser.h"
#include "ui_adduser.h"

AddUser::AddUser(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddUser)
{
    ui->setupUi(this);
}

AddUser::~AddUser()
{
    delete ui;
}

void AddUser::on_btn_submit_user_clicked()
{

}


void AddUser::on_btn_reset_user_clicked()
{

}

