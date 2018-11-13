#ifndef CHARTWINDOW_H
#define CHARTWINDOW_H


#include <QMainWindow>
#include "System.h"
#include "Result.h"
#include <map>
#include <QtWidgets/QApplication>
#include <QtWidgets/QVBoxLayout>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>


QT_CHARTS_USE_NAMESPACE
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
    void createPieChart( map<int,int> );

private slots:
    void on_pushButton_18_clicked();

private:
    Ui::ChartWindow *ui;
    vector < pair<System,Result> > runList;
};

#endif // CHARTWINDOW_H
