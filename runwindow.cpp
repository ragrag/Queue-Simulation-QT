#include "runwindow.h"
#include "ui_runwindow.h"
#include <algorithm>



//A window that displays details about invididual runs
runWindow::runWindow(QWidget *parent, System sys) :
    QMainWindow(parent),
    ui(new Ui::runWindow)
{
    ui->setupUi(this);
    this->system = sys;


    QStringList lst;
    lst <<"taskID"<<"Interarrival Time "<<"Arrival time"<<"Service Time"<<"Service Begin "
       <<"Waiting"<<"Service end"<<"Time Spent "<<"Idle";
     ui->driveinTable->setColumnCount(9);
     ui->driveinTable->setRowCount((int)system.driveInQueue.size() >0 ? (int)system.driveInQueue.size() : 0);
     ui->driveinTable->setHorizontalHeaderLabels(lst);
     ui->driveinTable->verticalHeader()->setVisible(false);

     ui->insideTable->setColumnCount(9);
     ui->insideTable->setRowCount((int)system.insideQueue.size() >0?(int)system.insideQueue.size():0);
     ui->insideTable->setHorizontalHeaderLabels(lst);
     ui->insideTable->verticalHeader()->setVisible(false);

     for(int i=0;i< max((int) system.driveInQueue.size(),(int)system.insideQueue.size());i++)
     {
         for(int j=0;j<9;j++)
         {
             if(i<(int)system.driveInQueue.size())
                   ui->driveinTable->setItem(i,j,new QTableWidgetItem(QString::number(system.driveInQueue[i][j])));
             if(i<(int)system.insideQueue.size())
                   ui->insideTable->setItem(i,j,new QTableWidgetItem(QString::number(system.insideQueue[i][j])));
         }

     }



     QStringList lstRes;
     lstRes <<"Avg Service Time (ALL)"<<"Avg Interarrival Time (ALL)"<<"Avg Service Time Drive-in"<<"Avg Service Time Inside"<<"Avg Waiting Time Drive-in"<<"Avg Waiting Time Inside"
           <<"Max inside Queue"<<"Probability To Go Inside"<<"Idle Portion Inside";
      ui->resultsTable->setColumnCount(1);
      ui->resultsTable->setRowCount(9);
      ui->resultsTable->setVerticalHeaderLabels(lstRes);
      for(int i=0;i<9;i++)
      {
          ui->resultsTable->setItem(i,0,new QTableWidgetItem( QString::number(system.result[i]) ));
      }
      ui->resultsTable->horizontalHeader()->setVisible(false);





}

runWindow::~runWindow()
{
    delete ui;
}

void runWindow::on_svcChartBtn_clicked()
{

    QLineSeries *series = new QLineSeries();
    for(int i=0;i< system.tasks.size();i++ )
    {
        series->append(i+1,system.tasks[i].serviceTime);
    }

    QValueAxis *axisX = new QValueAxis;
    axisX->setRange(1, system.tasks.size());
    axisX->setTickCount(1);
    //axisX->setLabelFormat("%.2f");

    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->createDefaultAxes();
    chart->setTitle("Service Times");

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

void runWindow::on_arrivalChartBtn_clicked()
{
    QLineSeries *series = new QLineSeries();
    for(int i=0;i< system.tasks.size();i++ )
    {
        series->append(i+1,system.tasks[i].interarrivalTime);
    }

    QValueAxis *axisX = new QValueAxis;
    axisX->setRange(1, system.tasks.size());
    axisX->setTickCount(1);
    //axisX->setLabelFormat("%.2f");

    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->createDefaultAxes();
    chart->setTitle("Interarrival Times");

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
