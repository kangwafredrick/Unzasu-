#ifndef UNZASUMAINWINDOW_H
#define UNZASUMAINWINDOW_H

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

private:
    Ui::UnzasuMainWindow *ui;
};
#endif // UNZASUMAINWINDOW_H
