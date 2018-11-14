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
#include <QtCharts/QBarSet>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarCategoryAxis>
#include "histogramplot.h"
#include <string>
#include <qtoolbar.h>
#include <qtoolbutton.h>
#include <qcombobox.h>
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
    template<typename T>  void createPieChart( T mp,string  );
    template<typename T> void createBarChart(T mp,string title);
    template<typename T> void createHistogram(T mp,string title);

private slots:

    void on_svcDPieBtn_2_clicked();

    void on_svcIPieBtn_clicked();

    void on_waitDPieBtn_clicked();

    void on_waitIPieBtn_clicked();

    void on_qlPieBtn_clicked();

    void on_probPieBtn_clicked();

    void on_idlePieBtn_clicked();




    void on_svcIBarBtn_clicked();

    void on_waitDBarBtn_clicked();

    void on_waitIBarBtn_clicked();

    void on_qlBarBtn_clicked();

    void on_probBarBtn_clicked();

    void on_idleBarBtn_clicked();

    void on_interBarBtn_clicked();

    void on_interPieBtn_clicked();

    void on_svcAllBarBtn_clicked();

    void on_svcAllPieBtn_clicked();

    void on_svcDBarBtn_2_clicked();

    void on_avgSvcAllHist_Btn_clicked();

    void on_avgInterHist_Btn_clicked();

    void on_avgSvcDHist_btn_clicked();

    void on_avgSvcIHist_Btn_clicked();

    void on_avgWaitDHist_Btn_clicked();

    void on_avgWaitI_Btn_clicked();

    void on_maxQHist_Btn_clicked();

    void on_probInHist_Btn_clicked();

    void on_idleHist_Btn_clicked();

private:
    Ui::ChartWindow *ui;
    vector < pair<System,Result> > runList;
     HistogramPlot *d_plot;
};

#endif // CHARTWINDOW_H
