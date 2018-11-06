#ifndef TASK_H
#define TASK_H
#include <iostream>
using namespace std;
class Task
{

public:
    int taskID;
    int interarrivalTime;
    int arrivalTime;
    int serviceTime;
    int timeServiceBegins;
    int waitingTime;
    int timeServiceEnds;
    int timeSpentInSystem;
    int idleTime;

    void print();
    Task(int,int,int,int,int,int,int,int,int);
    int operator[] (int i);
    ~Task();
};


#endif // TASK_H
