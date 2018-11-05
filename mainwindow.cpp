#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <vector>
#include "task.h"
#include "System.h"
#include <string>
#include <QString>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    srand(time(NULL));
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
        int samples = 10;
        int runs = 100;

        System system = System(arrivalTime, probabilityArrival, serviceTime, probabilityService,samples);

        system.getTables();

        cout << endl;
        cout << "taskID   Interarrival Time   Arrival time   serviceTime   Service Begin       waiting   Service End     Time Spent \t     Idle\n";
        for (auto t : system.tasks)
        {
            t.print();
        }
        cout << endl << "Drive in Queue" << endl;
        for (auto t : system.driveInQueue)
        {
            t.print();
        }

        cout << endl << "Inside Queue" << endl;
        for (auto t : system.insideQueue)
        {
            t.print();
        }

cout<<endl;

        Result finalResult= Result();

        for (int i = 0;i < runs;i++)
        {
            system.buildSystem(samples);
            finalResult = finalResult+ system.calculateSystem();
        }
        finalResult = finalResult / runs;

        ui->resultTextBox->setText("Results of : " + QString::number(runs) + " Runs, with : " + QString::number(samples) + " sampless\n"+
                + "\nservice drive in:\n" + QString::number(finalResult.avgSvcDrivein) + "\nservice inside:\n" + QString::number(finalResult.avgSvcInside)
                    + "\ndrive in waiting:\n " + QString::number(finalResult.avgWaitingDrivein) + "\nwaiting inside:\ " + QString::number(finalResult.avgWaitingInside)
                    + "\nmax inside queue:\n " + QString::number(finalResult.maxQueueLength) + "\nprobability inside :\n " + QString::number(finalResult.probInside) + "%"
                    + "\nidle inside:\n " + QString::number(finalResult.idleTime) +"\n");




}
