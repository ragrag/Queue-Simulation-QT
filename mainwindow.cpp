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



//The Main Screen of the program

vector < System > runList; //A vector of pairs holding <System,Result> pairs
using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


   //srand(time(NULL));
    srand(1); //Random with a seed of 1
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

void MainWindow::on_beginSimulationBtn_clicked() //Begin Simulation Button
{


        vector <int>  arrivalTime = { 0,1,2,3,4,5 }; //Interrrivals time
        vector <double> probabilityArrival = {0.09, 0.17 , 0.27, 0.20, 0.15, 0.12}; //Interarrival times probabilities

        vector <int> serviceTime = { 1,2,3,4};   //Service Times
        vector <double> probabilityService = { 0.20, 0.40 , 0.28, 0.12 }; //Service Times Probabilities
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

        System system = System(arrivalTime, probabilityArrival, serviceTime, probabilityService);//System Initilization



        Result finalResult= Result();
        Result finalResultTwoCars= Result();
        runList.clear();
        ui->runsList->clear();
        for (int i = 0;i < runs;i++)                //Running and accumilating results
        {
            system.buildSystem(jobs,false);
            Result run = system.calculateSystem();
            finalResult = finalResult+run ;
            runList.push_back(system);
             ui->runsList->addItem("Run :"+QString::number(i+1));

             system.buildSystem(jobs,true);
             run = system.calculateSystem();
             finalResultTwoCars = finalResultTwoCars + run;
        }
        finalResult = finalResult / runs;               //Getting average
        finalResultTwoCars = finalResultTwoCars / runs;




        //Displaying
        ui->resultsLabel->setText("Results : "+QString::number(runs) +" runs, "+QString::number(jobs)+" Jobs");

        ui->resultsTable->setItem(0,0,new QTableWidgetItem(  QString::number(2.51) ));
        ui->resultsTable->setItem(1,0,new QTableWidgetItem(  QString::number(2.32) ));
 for(int i=0;i<11;i++)
 {
     ui->resultsTable->setItem(i+2,0,new QTableWidgetItem(i+2!=10? QString::number(finalResult[i]) :(QString::number(finalResult[i])) +"%"));
 }

  ui->resultsTable->setItem(13,0,new QTableWidgetItem(  QString::number(finalResultTwoCars.avgWaitingDrivein) ));
  ui->resultsTable->setItem(14,0,new QTableWidgetItem(  QString::number(finalResultTwoCars.avgWaitingInside) ));
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
      runWindowObj = new runWindow(this,runList[idx]);
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
