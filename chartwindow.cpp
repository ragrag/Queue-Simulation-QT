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
  cout<<"DE";
}







void ChartWindow::on_pushButton_18_clicked()
{
    map <int,int> mp;
    for (auto v : runList)
    {
        mp[v.second.probInside]++;
    }
    createPieChart(mp);
}



void ChartWindow::createPieChart(map<int,int> mp)
{

    QPieSeries *series = new QPieSeries();

    int maxN =-1;
    int idx;
    int it =0;
    for(auto v:mp)
    {

        cout<<v.first << " "<<v.second<<endl;
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
    chart->setTitle("Simple piechart example");
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


void ChartWindow::on_svcDPieBtn_clicked()
{

}

void ChartWindow::on_svcIPieBtn_clicked()
{

}

void ChartWindow::on_waitDPieBtn_clicked()
{

}

void ChartWindow::on_waitIPieBtn_clicked()
{

}

void ChartWindow::on_qlPieBtn_clicked()
{

}

void ChartWindow::on_probPieBtn_clicked()
{

}

void ChartWindow::on_idlePieBtn_clicked()
{

}
