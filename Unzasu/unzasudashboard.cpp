#include "unzasudashboard.h"
#include "ui_unzasudashboard.h"

UnzasuDashboard::UnzasuDashboard(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::UnzasuDashboard)
{
    ui->setupUi(this);
}

UnzasuDashboard::~UnzasuDashboard()
{
    delete ui;
}
