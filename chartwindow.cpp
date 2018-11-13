#include "chartwindow.h"
#include "ui_chartwindow.h"


ChartWindow::ChartWindow(QWidget *parent,vector <pair < System,Result> > runList) :
    QMainWindow(parent),
    ui(new Ui::ChartWindow)
{
    ui->setupUi(this);
    this->runList = runList;


}

ChartWindow::~ChartWindow()
{
   delete ui;
}



void ChartWindow::on_svcDPieBtn_clicked()
{


    map <float,int> mp;
    for (auto v : runList)
    {
        mp[ truncf(v.second.avgSvcDrivein * 10) / 10]++;
    }
    createPieChart(mp,"Avarage Service Drive-in");

}

void ChartWindow::on_svcIPieBtn_clicked()
{
    map <float,int> mp;
    for (auto v : runList)
    {
        mp[ truncf(v.second.avgSvcInside * 10) / 10]++;
    }
    createPieChart(mp,"Avarage Service Inside");
}

void ChartWindow::on_waitDPieBtn_clicked()
{
    map <float,int> mp;
    for (auto v : runList)
    {
        mp[ truncf(v.second.avgWaitingDrivein * 10) / 10]++;
    }
    createPieChart(mp,"Avarage Waiting Drive-in");
}

void ChartWindow::on_waitIPieBtn_clicked()
{
    map <float,int> mp;
    for (auto v : runList)
    {
        mp[ truncf(v.second.avgWaitingInside * 10) / 10]++;
    }
    createPieChart(mp,"Avarage Waiting Inside");
}

void ChartWindow::on_qlPieBtn_clicked()
{
    map <int,int> mp;
    for (auto v : runList)
    {
        mp[ v.second.maxQueueLength]++;
    }
    createPieChart(mp,"Maximum Queue Length Inside");
}

void ChartWindow::on_probPieBtn_clicked()
{
    map <int,int> mp;
    for (auto v : runList)
    {
        mp[v.second.probInside]++;
    }
    createPieChart(mp,"Probability To Go Inside");
}

void ChartWindow::on_idlePieBtn_clicked()
{
    map <int,int> mp;
    for (auto v : runList)
    {
        mp[v.second.idleTime]++;
    }
    createPieChart(mp,"Idle Portion Inside");
}



void ChartWindow::on_svcDBarBtn_clicked()
{

    map <float,int> mp;
    for (auto v : runList)
    {
        mp[truncf(v.second.avgSvcInside * 10) / 10]++;
    }
    createBarChart(mp,"Avarage Service Drive-in");
}

void ChartWindow::on_svcIBarBtn_clicked()
{
    map <float,int> mp;
    for (auto v : runList)
    {
        mp[truncf(v.second.avgSvcInside* 10) / 10]++;
    }
    createBarChart(mp,"Avarage Service Inside");
}

void ChartWindow::on_waitDBarBtn_clicked()
{
    map <float,int> mp;
    for (auto v : runList)
    {
        mp[truncf(v.second.avgWaitingDrivein* 10) / 10]++;
    }
    createBarChart(mp,"Avarage Waiting Drive-in");
}

void ChartWindow::on_waitIBarBtn_clicked()
{
    map <float,int> mp;
    for (auto v : runList)
    {
        mp[truncf(v.second.avgWaitingInside* 10) / 10]++;
    }
    createBarChart(mp,"Avarage Waiting Inside");
}

void ChartWindow::on_qlBarBtn_clicked()
{
    map <int,int> mp;
    for (auto v : runList)
    {
        mp[v.second.maxQueueLength]++;
    }
    createBarChart(mp,"Maximum Queue Length Inside");
}

void ChartWindow::on_probBarBtn_clicked()
{
    map <int,int> mp;
    for (auto v : runList)
    {
        mp[v.second.probInside]++;
    }
    createBarChart(mp,"Probability To Go Inside");
}

void ChartWindow::on_idleBarBtn_clicked()
{
    map <int,int> mp;
    for (auto v : runList)
    {
        mp[v.second.idleTime]++;
    }
    createBarChart(mp,"Idle Portion Inside");
}



   template<typename T> void ChartWindow::createPieChart(T mp,string title)
{

    QPieSeries *series = new QPieSeries();

    int maxN =-1;
    int idx;
    int it =0;
    for(auto v:mp)
    {
          series->append(QString::number(v.first), v.second);
        if(v.second > maxN)
        {
            maxN = v.second;
            idx = it;
        }
        it++;
    }



    QPieSlice *slice = series->slices().at(idx);
    slice->setExploded();
    slice->setLabelVisible();
    slice->setPen(QPen(Qt::darkGreen, 2));
    slice->setBrush(Qt::green);

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle(QString::fromStdString(title));
    //chart->legend()->hide();

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    QWidget * chartWindow = new QWidget(0);
    QVBoxLayout *layout = new QVBoxLayout(chartWindow);
    layout->addWidget(chartView);
    setLayout(layout);
    layout->activate();

    chartWindow->resize(800,400);
    chartWindow->show();


}



template<typename T> void ChartWindow::createBarChart(T mp,string title)
{


    QBarSet *set0 = new QBarSet(QString::fromStdString(title));
    QStringList categories;


for (auto v:mp)
{
cout<<(float)v.first<<endl;
    *set0<<(float)v.second;
 categories<<QString::number((float)v.first);
}
QBarSeries *series = new QBarSeries();
   series->append(set0);

   QChart *chart = new QChart();
   chart->addSeries(series);
   chart->setTitle(QString::fromStdString(title));
   chart->setAnimationOptions(QChart::SeriesAnimations);


   QBarCategoryAxis *axis = new QBarCategoryAxis();
   axis->append(categories);
   chart->createDefaultAxes();
   chart->setAxisX(axis, series);
   chart->legend()->setVisible(true);
   chart->legend()->setAlignment(Qt::AlignBottom);
   QChartView *chartView = new QChartView(chart);
   chartView->setRenderHint(QPainter::Antialiasing);


     QWidget * chartWindow = new QWidget(0);
     QVBoxLayout *layout = new QVBoxLayout(chartWindow);
     layout->addWidget(chartView);
     setLayout(layout);
     layout->activate();

     chartWindow->resize(800,400);
     chartWindow->show();


}
