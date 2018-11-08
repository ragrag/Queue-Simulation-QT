#ifndef SYSTEM_H
#define SYSTEM_H
#include <vector>
#include <algorithm>
#include <ctime>
#include "task.h"
#include "Result.h"
using namespace std;


class System
{




public:
    vector <int>  arrivalTime;
    vector <double> probabilityArrival;
    vector <int> serviceTime;
    vector <double> probabilityService;
    vector <double> cumulativeArrival;
    vector <double> cumulativeService;

    vector <Task> tasks;
    vector <Task> driveInQueue;
    vector <Task> insideQueue;
    Result result;

    System(vector<int>,vector<double>,vector<int>,vector<double>);
    System();
    int	getArrivalTime();
    int	getServiceTime();
    void buildSystem(int);
    void buildTables();
    void getTables();
    Result calculateSystem();
    void clear();
    ~System();
};


#endif // SYSTEM_H
