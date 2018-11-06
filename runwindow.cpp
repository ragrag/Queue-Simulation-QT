#include "runwindow.h"
#include "ui_runwindow.h"
#include <algorithm>
runWindow::runWindow(QWidget *parent, System sys, Result res) :
    QMainWindow(parent),
    ui(new Ui::runWindow)
{
    ui->setupUi(this);
    this->system = make_pair(sys,res);



    QStringList lst;
    lst <<"taskID"<<"Interarrival Time "<<"Arrival time"<<"Service Time"<<"Service Begin "
       <<"Waiting"<<"Service end"<<"Time Spent "<<"Idle";
     ui->driveinTable->setColumnCount(9);
     ui->driveinTable->setRowCount((int)system.first.driveInQueue.size());
     ui->driveinTable->setHorizontalHeaderLabels(lst);
     ui->driveinTable->verticalHeader()->setVisible(false);

     ui->insideTable->setColumnCount(9);
     ui->insideTable->setRowCount((int)system.first.insideQueue.size());
     ui->insideTable->setHorizontalHeaderLabels(lst);
     ui->insideTable->verticalHeader()->setVisible(false);


     for(int i=0;i< max((int) system.first.driveInQueue.size(),(int)system.first.insideQueue.size());i++)
     {
         for(int j=0;j<9;j++)
         {
             if(i<(int)system.first.driveInQueue.size())
                   ui->driveinTable->setItem(i,j,new QTableWidgetItem(QString::number(system.first.driveInQueue[i][j])));
             if(i<(int)system.first.insideQueue.size())
                   ui->insideTable->setItem(i,j,new QTableWidgetItem(QString::number(system.first.insideQueue[i][j])));
         }

     }



     QStringList lstRes;
     lstRes <<"Service drive in"<<"Service Inside"<<"drive in waiting"<<"Inside waiting"<<"Max inside Queue"<<"Probability inside"<<"Idle inside";
      ui->resultsTable->setColumnCount(1);
      ui->resultsTable->setRowCount(7);
      ui->resultsTable->setVerticalHeaderLabels(lstRes);
      for(int i=0;i<7;i++)
      {
          ui->resultsTable->setItem(i,0,new QTableWidgetItem(  i!=5 ?  QString::number(system.second[i]) : QString::number(system.second[i]) +"%" ));
      }
      ui->resultsTable->horizontalHeader()->setVisible(false);





}

runWindow::~runWindow()
{
    delete ui;
}
