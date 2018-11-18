#include "task.h"

//Task Class (Job) has information about the task variables

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


//Return value by order
int Task::operator[] (int i)
{
  switch (i) {
    case 0: return taskID;
    case 1: return interarrivalTime;
    case 2: return arrivalTime;
    case 3: return serviceTime;
    case 4: return timeServiceBegins;
    case 5: return waitingTime;
    case 6: return timeServiceEnds;
    case 7: return timeSpentInSystem;
    case 8: return idleTime;
    default: return -1;
  }
}

//Print task details
void Task::print()
{

    cout << taskID << " \t\t" << interarrivalTime << "\t\t" << arrivalTime << "\t\t" << serviceTime << "\t\t" << timeServiceBegins << "\t\t"
        << waitingTime << "\t\t" << timeServiceEnds << "\t\t" << timeSpentInSystem << "\t\t" << idleTime << "  \n";

}
Task::~Task()
{
}
