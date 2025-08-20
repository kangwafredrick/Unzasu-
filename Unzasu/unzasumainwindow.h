#ifndef UNZASUMAINWINDOW_H
#define UNZASUMAINWINDOW_H
#include "login.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class UnzasuMainWindow;
}
QT_END_NAMESPACE

class UnzasuMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    UnzasuMainWindow(QWidget *parent = nullptr);
    ~UnzasuMainWindow();

private slots:
    void on_btn_mainwindow_login_clicked();

private:
    Login *ptrLogin;
    Ui::UnzasuMainWindow *ui;
};
#endif // UNZASUMAINWINDOW_H
