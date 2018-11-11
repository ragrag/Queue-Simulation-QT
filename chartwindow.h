#ifndef CHARTWINDOW_H
#define CHARTWINDOW_H


#include <QMainWindow>
#include "System.h"
#include "Result.h"

using namespace std;
namespace Ui {
class ChartWindow;
}

class ChartWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ChartWindow(QWidget *parent = nullptr, vector < pair<System,Result> > runList = vector <pair <System,Result> > () );
    ~ChartWindow();

private:
    Ui::ChartWindow *ui;
    vector < pair<System,Result> > runList;
};

#endif // CHARTWINDOW_H
