#include "unzasumainwindow.h"
#include "./ui_unzasumainwindow.h"

UnzasuMainWindow::UnzasuMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::UnzasuMainWindow)
{
    ui->setupUi(this);
    setWindowTitle("v1.0");

    ptrLogin = new Login();





}

UnzasuMainWindow::~UnzasuMainWindow()
{
    delete ui;
    delete ptrLogin;
}

void UnzasuMainWindow::on_btn_mainwindow_login_clicked()
{
   ptrLogin->show();
}

