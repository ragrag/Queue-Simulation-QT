#include "task.h"



Task::Task(int taskID, int interarrivalTime, int arrivalTime, int serviceTime, int timeServiceBegins, int waitingTime, int timeServiceEnds, int timeSpentInSystem, int idleTime)
{
    this->taskID= taskID;
    this->interarrivalTime = interarrivalTime;
    this->arrivalTime = arrivalTime;
    this->serviceTime = serviceTime;
    this->timeServiceBegins = timeServiceBegins;
    this->waitingTime = waitingTime;
    this->timeServiceEnds = timeServiceEnds;
    this->timeSpentInSystem = timeSpentInSystem;
    this->idleTime = idleTime;

}

void Task::print()
{

    cout << taskID << " \t\t" << interarrivalTime << "\t\t" << arrivalTime << "\t\t" << serviceTime << "\t\t" << timeServiceBegins << "\t\t"
        << waitingTime << "\t\t" << timeServiceEnds << "\t\t" << timeSpentInSystem << "\t\t" << idleTime << "  \n";

}
Task::~Task()
{
}
