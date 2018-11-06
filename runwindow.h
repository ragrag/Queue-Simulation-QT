#ifndef RUNWINDOW_H
#define RUNWINDOW_H

#include <QMainWindow>
#include "System.h"
#include "Result.h"
#include <vector>
namespace Ui {
class runWindow;
}

class runWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit runWindow(QWidget *parent = 0,System sys = System() ,Result res = Result());
    ~runWindow();

private:
    Ui::runWindow *ui;
    pair <System,Result> system;
};

#endif // RUNWINDOW_H
