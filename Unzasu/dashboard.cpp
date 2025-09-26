#include "dashboard.h"
#include "ui_dashboard.h"
#include "QLabel"
Dashboard::Dashboard(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dashboard)
{
    ui->setupUi(this);
    QLabel *heading = new QLabel("Student Dashboard",this);
}

Dashboard::~Dashboard()
{
    delete ui;
}
