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



void ChartWindow::on_svcDPieBtn_2_clicked()
{


    map <float,int> mp;
    for (auto v : runList)
    {
        mp[ truncf(v.second.avgSvcDrivein * 10) / 10]++;
    }
    createPieChart(mp,"Average Service Drive-in");

}

void ChartWindow::on_svcIPieBtn_clicked()
{
    map <float,int> mp;
    for (auto v : runList)
    {
        mp[ truncf(v.second.avgSvcInside * 10) / 10]++;
    }
    createPieChart(mp,"Average Service Inside");
}

void ChartWindow::on_waitDPieBtn_clicked()
{
    map <float,int> mp;
    for (auto v : runList)
    {
        mp[ truncf(v.second.avgWaitingDrivein * 10) / 10]++;
    }
    createPieChart(mp,"Average Waiting Drive-in");
}

void ChartWindow::on_waitIPieBtn_clicked()
{
    map <float,int> mp;
    for (auto v : runList)
    {
        mp[ truncf(v.second.avgWaitingInside * 10) / 10]++;
    }
    createPieChart(mp,"Average Waiting Inside");
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
    map <float,int> mp;
    for (auto v : runList)
    {
        mp[truncf(v.second.probInside*100)/100]++;
    }
    createPieChart(mp,"Probability to Go Inside");
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




void ChartWindow::on_svcAllPieBtn_clicked()
{
    map <float,int> mp;
    for (auto v : runList)
    {
        mp[truncf(v.second.avgSvcAll * 10) / 10]++;
    }
    createPieChart(mp,"Average Service Time (ALL)");
}


void ChartWindow::on_interPieBtn_clicked()
{
    map <float,int> mp;
    for (auto v : runList)
    {
        mp[truncf(v.second.avgInterArrival * 10) / 10]++;
    }
    createPieChart(mp,"Average Interarrival Time (ALL)");
}





void ChartWindow::on_svcAllBarBtn_clicked()
{
    map <float,int> mp;
    for (auto v : runList)
    {
        mp[v.second.avgSvcAll ]++;
    }
    createBarChart(mp,"Average Service Time (ALL)");
}


void ChartWindow::on_interBarBtn_clicked()
{
    map <float,int> mp;
    for (auto v : runList)
    {
        mp[truncf(v.second.avgInterArrival * 10) / 10]++;
    }
    createBarChart(mp,"Average Interarrival (ALL)");
}




void ChartWindow::on_svcDBarBtn_2_clicked()
{
    map <float,int> mp;
    for (auto v : runList)
    {
        mp[truncf(v.second.avgSvcDrivein * 10) / 10]++;
    }
    createBarChart(mp,"Average Service Drive-in");
}


void ChartWindow::on_svcIBarBtn_clicked()
{
    map <float,int> mp;
    for (auto v : runList)
    {
        mp[truncf(v.second.avgSvcInside* 10) / 10]++;
    }
    createBarChart(mp,"Average Service Inside");
}

void ChartWindow::on_waitDBarBtn_clicked()
{
    map <float,int> mp;
    for (auto v : runList)
    {
        mp[truncf(v.second.avgWaitingDrivein* 10) / 10]++;
    }
    createBarChart(mp,"Average Waiting Drive-in");
}

void ChartWindow::on_waitIBarBtn_clicked()
{
    map <float,int> mp;
    for (auto v : runList)
    {
        mp[truncf(v.second.avgWaitingInside* 10) / 10]++;
    }
    createBarChart(mp,"Average Waiting Inside");
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
    map <float,int> mp;
    for (auto v : runList)
    {
        mp[truncf(v.second.probInside*100)/100]++;
    }
    createBarChart(mp,"Probability to Go Inside");
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




void ChartWindow::on_avgSvcAllHist_Btn_clicked()
{


    map <float,int> mp;
    for (auto v : runList)
    {
        mp[truncf(v.second.avgSvcAll * 10) / 10]++;
    }


    createHistogram(mp,"Service Time (ALL)");
}



void ChartWindow::on_avgInterHist_Btn_clicked()
{
    map <float,int> mp;
       for (auto v : runList)
       {
           mp[truncf(v.second.avgInterArrival * 10) / 10]++;
       }
       createHistogram(mp,"Average Interarrival (ALL)");
}

void ChartWindow::on_avgSvcDHist_btn_clicked()
{
    map <float,int> mp;
       for (auto v : runList)
       {
           mp[truncf(v.second.avgSvcDrivein * 10) / 10]++;
       }
       createHistogram(mp,"Average Service Drive-in");
}

void ChartWindow::on_avgSvcIHist_Btn_clicked()
{
    map <float,int> mp;
       for (auto v : runList)
       {
           mp[truncf(v.second.avgSvcInside* 10) / 10]++;
       }
       createHistogram(mp,"Average Service Inside");
}

void ChartWindow::on_avgWaitDHist_Btn_clicked()
{
    map <float,int> mp;
       for (auto v : runList)
       {
           mp[truncf(v.second.avgWaitingDrivein* 10) / 10]++;
       }
       createHistogram(mp,"Average Waiting Drive-in");
}

void ChartWindow::on_avgWaitI_Btn_clicked()
{
    map <float,int> mp;
       for (auto v : runList)
       {
           mp[truncf(v.second.avgWaitingInside* 10) / 10]++;
       }
       createHistogram(mp,"Average Waiting Inside");
}

void ChartWindow::on_maxQHist_Btn_clicked()
{
    map <float,int> mp;
      for (auto v : runList)
      {
          mp[v.second.maxQueueLength]++;
      }
      createHistogram(mp,"Maximum Queue Length Inside");
}

void ChartWindow::on_probInHist_Btn_clicked()
{
    map <float,int> mp;
        for (auto v : runList)
        {
            mp[truncf(v.second.probInside*100)/100]++;
        }
        createHistogram(mp,"Probability to Go Inside");
}

void ChartWindow::on_idleHist_Btn_clicked()
{
    map <float,int> mp;
        for (auto v : runList)
        {
            mp[v.second.idleTime]++;
        }
        createHistogram(mp,"Idle Portion Inside");
}






void ChartWindow::on_svcAllLine_Btn_clicked()
{
        vector <float> mp;
        for (auto v : runList)
        {
           mp.push_back(v.second.avgSvcAll);
        }
        createLineChart(mp,"Average Service Time (ALL)");
}

void ChartWindow::on_interLine_Btn_clicked()
{
        vector <float> mp;
        for (auto v : runList)
        {
           mp.push_back(v.second.avgInterArrival);
        }
        createLineChart(mp,"Average Interarrival Time");
}

void ChartWindow::on_svcDLineBtn_2_clicked()
{
    vector <float> mp;
    for (auto v : runList)
    {
       mp.push_back(v.second.avgSvcDrivein);
    }
    createLineChart(mp,"Average Service Time Drive-in");
}

void ChartWindow::on_svcILineBtn_clicked()
{
    vector <float> mp;
    for (auto v : runList)
    {
       mp.push_back(v.second.avgSvcInside);
    }
    createLineChart(mp,"Average Service Time Inside");
}

void ChartWindow::on_waitDLineBtn_clicked()
{
    vector <float> mp;
    for (auto v : runList)
    {
       mp.push_back(v.second.avgWaitingDrivein);
    }
    createLineChart(mp,"Average Waiting Time Drive-in");
}

void ChartWindow::on_waitILineBtn_clicked()
{
    vector <float> mp;
    for (auto v : runList)
    {
       mp.push_back(v.second.avgWaitingInside);
    }
    createLineChart(mp,"Average Waiting Time Inside");
}

void ChartWindow::on_qlLineBtn_clicked()
{
    vector <float> mp;
    for (auto v : runList)
    {
       mp.push_back(v.second.maxQueueLength);
    }
    createLineChart(mp,"Maximum Queue Length Inside");
}

void ChartWindow::on_probLineBtn_clicked()
{
    vector <float> mp;
    for (auto v : runList)
    {
       mp.push_back(v.second.probInside);
    }
    createLineChart(mp,"Probability to Go Inside");
}

void ChartWindow::on_idleLineBtn_clicked()
{
    vector <float> mp;
    for (auto v : runList)
    {
       mp.push_back(v.second.idleTime);
    }
    createLineChart(mp,"Idle Portion Inside");
}


void ChartWindow::createHistogram(map<float,int> mp,string title)
{


    d_plot = new HistogramPlot( this,title ,mp );

    QWidget * chartWindow = new QWidget(0);
    QVBoxLayout *layout = new QVBoxLayout(chartWindow);
    layout->addWidget(d_plot);
    setLayout(layout);
    layout->activate();

    chartWindow->resize(800,400);
    chartWindow->show();


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
    slice->setPen(QPen(Qt::darkRed, 2));
    slice->setBrush(Qt::darkRed);

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



template<typename T> void ChartWindow::createLineChart(T mp,string title)
{
    QLineSeries *series = new QLineSeries();
    for(int i=0;i< mp.size();i++ )
    {
        series->append(i+1,mp[i]);
    }

    QValueAxis *axisX = new QValueAxis;
    axisX->setRange(1, mp.size());
    axisX->setTickCount(1);
    //axisX->setLabelFormat("%.2f");

    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->createDefaultAxes();
    chart->setTitle(QString::fromStdString(title));

    QChartView *chartView = new QChartView(chart);
    chartView->chart()->setAxisX(axisX, series);
    chartView->chart()->removeAxis(axisX);
    chartView->setRenderHint(QPainter::Antialiasing);

    QWidget * chartWindow = new QWidget(0);
    QVBoxLayout *layout = new QVBoxLayout(chartWindow);
    layout->addWidget(chartView);
    setLayout(layout);
    layout->activate();

    chartWindow->resize(1000,400);
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
