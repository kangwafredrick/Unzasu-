#ifndef UNZASUDASHBOARD_H
#define UNZASUDASHBOARD_H

#include <QDialog>

namespace Ui {
class UnzasuDashboard;
}

class UnzasuDashboard : public QDialog
{
    Q_OBJECT

public:
    explicit UnzasuDashboard(QWidget *parent = nullptr);
    ~UnzasuDashboard();

private:
    Ui::UnzasuDashboard *ui;
};

#endif // UNZASUDASHBOARD_H
