#include "probabilitytable.h"
#include "ui_probabilitytable.h"
#include <QTableWidgetItem>
#include <QString>

//Probability Table GUI
ProbabilityTable::ProbabilityTable(QWidget *parent,System sys) :
    QMainWindow(parent),
    ui(new Ui::ProbabilityTable)
{
    ui->setupUi(this);
    this->system = sys;

     for(int i=0;i< max((int) system.arrivalTime.size(),(int)system.serviceTime.size());i++)
     {
         for(int j=0;j<4;j++)
         {
             if(i<(int)system.arrivalTime.size()){
                 if(j==0)
                   ui->arrivalTable->setItem(i,j,new QTableWidgetItem(QString::number(system.arrivalTime[i])));
                 else if(j==1)
                    ui->arrivalTable->setItem(i,j,new QTableWidgetItem(QString::number(system.probabilityArrival[i])));
                 else if(j==2)
                    ui->arrivalTable->setItem(i,j,new QTableWidgetItem(QString::number(system.cumulativeArrival[i]/100)));

                 else
                        ui->arrivalTable->setItem(i,j,new QTableWidgetItem( i == 0 ?  "1 - " + QString::number(system.cumulativeArrival[i])  :  QString::number(system.cumulativeArrival[i - 1] + 1) + " - " + (i!=(system.arrivalTime.size()-1) ? QString::number(system.cumulativeArrival[i]) :"00")));
             }


             if(i<(int)system.serviceTime.size()){
                 if(j==0)
                   ui->serviceTable->setItem(i,j,new QTableWidgetItem(QString::number(system.serviceTime[i])));
                 else if(j==1)
                    ui->serviceTable->setItem(i,j,new QTableWidgetItem(QString::number(system.probabilityService[i])));
                 else if(j==2)
                    ui->serviceTable->setItem(i,j,new QTableWidgetItem(QString::number(system.cumulativeService[i]/100)));

                 else
                        ui->serviceTable->setItem(i,j,new QTableWidgetItem( i == 0 ?  "1 - " + QString::number(system.cumulativeService[i])  :  QString::number(system.cumulativeService[i - 1] + 1) + " - " +( i!=(system.serviceTime.size()+1) ? QString::number(system.cumulativeService[i]) : "00" )));
             }

         }

     }





}

ProbabilityTable::~ProbabilityTable()
{
    delete ui;
}
