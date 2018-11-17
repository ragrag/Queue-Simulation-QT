#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <vector>
#include "task.h"
#include "System.h"
#include <string>
#include <QString>
#include <QStringListModel>
#include <QStringList>
#include <QTableWidgetItem>
#include "probabilitytable.h"
#include <QWidget>

#include<qwt_plot.h>
#include<qwt_plot_curve.h>
#include<qwt_plot_histogram.h>
#include<qwt_series_data.h>
#include<iostream>
#include <QDialog>



#include <QPushButton>
#include <QWidget>
#include <QFont>
#include <QIcon>
#include <QLocale>
#include <QTranslator>
#include <QLibraryInfo>
#include <qwt_plot.h>
#include <qwt_plot_histogram.h>
#include <qwt_series_data.h>
#include <qwt_scale_map.h>
//#include <QtWidgets>

#include "qwt_plot_grid.h"
#include "qwt_interval.h"
#include "qwt_series_data.h"
#include "qwt_series_store.h"

vector < pair<System,Result> > runList;
using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


   // srand(time(NULL));
    srand(1);
    if(!ui->customRunsCheckbox->isChecked())
    {
        ui->customRunsText->setEnabled(false);
        ui->customJobsText->setEnabled(false);
    }





}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_beginSimulationBtn_clicked()
{


        vector <int>  arrivalTime = { 0,1,2,3,4,5 };
        vector <double> probabilityArrival = {0.09, 0.17 , 0.27, 0.20, 0.15, 0.12};

        vector <int> serviceTime = { 1,2,3,4};
        vector <double> probabilityService = { 0.20, 0.40 , 0.28, 0.12 };
        int jobs;
        int runs;
        if(ui->customRunsCheckbox->isChecked())
        {
            runs =  ui->customRunsText->toPlainText().toInt();
            jobs = ui->customJobsText->toPlainText().toInt();

        }
        else {
            jobs = 100;
            runs = 30;
        }

        System system = System(arrivalTime, probabilityArrival, serviceTime, probabilityService);
        cout << endl;


        Result finalResult= Result();
        Result finalResultTwoCars= Result();
        runList.clear();
        ui->runsList->clear();
        for (int i = 0;i < runs;i++)
        {
            system.buildSystem(jobs);
            Result run = system.calculateSystem();
            finalResult = finalResult+run ;
            runList.push_back(make_pair(system,run));
             ui->runsList->addItem("Run :"+QString::number(i+1));

             system.buildSystemTwoCars(jobs);
             run = system.calculateSystem();
             finalResultTwoCars = finalResultTwoCars + run;
        }
        finalResult = finalResult / runs;
        finalResultTwoCars = finalResultTwoCars / runs;


        ui->resultsLabel->setText("Results : "+QString::number(runs) +" runs, "+QString::number(jobs)+" Jobs");

 for(int i=0;i<9;i++)
 {
     ui->resultsTable->setItem(i,0,new QTableWidgetItem(   QString::number(finalResult[i])  ));
 }
  ui->resultsTable->setItem(9,0,new QTableWidgetItem(  QString::number(finalResultTwoCars.avgWaitingDrivein) ));
  ui->resultsTable->setItem(10,0,new QTableWidgetItem(  QString::number(finalResultTwoCars.avgWaitingInside) ));
 ui->resultsTable->horizontalHeader()->setVisible(false);


}

void MainWindow::on_customRunsCheckbox_toggled(bool checked)
{
    if(checked)
    {
        ui->customRunsText->setEnabled(true);
        ui->customJobsText->setEnabled(true);
    }
    else {
        ui->customRunsText->setEnabled(false);
        ui->customJobsText->setEnabled(false);
        ui->customRunsText->setText("");
        ui->customJobsText->setText("");

    }
}

void MainWindow::on_runsBtn_clicked()
{

int idx =ui->runsList->currentIndex().row();
if(idx!=-1)
{
      runWindowObj = new runWindow(this,runList[idx].first,runList[idx].second);
      runWindowObj->show();
}
}

void MainWindow::on_probabilityTableBtn_clicked()
{
    vector <int>  arrivalTime = { 0,1,2,3,4,5 };
    vector <double> probabilityArrival = {0.09, 0.17 , 0.27, 0.20, 0.15, 0.12};

    vector <int> serviceTime = { 1,2,3,4};
    vector <double> probabilityService = { 0.20, 0.40 , 0.28, 0.12 };
    System system = System(arrivalTime, probabilityArrival, serviceTime, probabilityService);
      probabilityTableWindow = new ProbabilityTable(this,system);
      probabilityTableWindow->show();

}


void MainWindow::on_chartsBtn_clicked()
{
    chartsWindow = new ChartWindow(this,runList);
    chartsWindow->show();
}
