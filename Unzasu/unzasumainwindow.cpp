#include "unzasumainwindow.h"
#include "./ui_unzasumainwindow.h"

UnzasuMainWindow::UnzasuMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::UnzasuMainWindow)
{
    ui->setupUi(this);
    setWindowTitle("v1.0");
}

UnzasuMainWindow::~UnzasuMainWindow()
{
    delete ui;
}
