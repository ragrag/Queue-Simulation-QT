#include "System.h"
#include "Task.h"

System::System(vector <int>  arrivalTime, vector <double> probabilityArrival, vector <int> serviceTime, vector <double> probabilityService,int samples)
{
    this->arrivalTime = arrivalTime;
    this->probabilityArrival = probabilityArrival;
    this->serviceTime = serviceTime;
    this->probabilityService = probabilityService;
    result = Result();
    buildTables();
    buildSystem(samples);
}

void System::buildTables() {
    cumulativeArrival.clear();
    cumulativeService.clear();
    for (int i = 0;i < max(arrivalTime.size(), serviceTime.size());i++)
    {
        if (i <arrivalTime.size())
            cumulativeArrival.push_back(i == 0 ? probabilityArrival[0] * 100 : cumulativeArrival[i - 1] + probabilityArrival[i] * 100);
        if (i <serviceTime.size())
            cumulativeService.push_back(i == 0 ? probabilityService[0] * 100 : cumulativeService[i - 1] + probabilityService[i] * 100);
    }
}
void System::getTables()
{

    cout << "Arrival Time" << endl;
    cout << "Prob\t \tCumulative\t Range\n";
    for (int i = 0;i < arrivalTime.size();i++)
    {
        cout << probabilityArrival[i] << "\t\t";
        cout << cumulativeArrival[i] / 100 << "\t\t";
        i == 0 ? cout << 1 << " - " << cumulativeArrival[i] << "\n" : cout << cumulativeArrival[i - 1] + 1 << " - " << cumulativeArrival[i] << "\n";
    }
    cout << endl << endl;
    cout << "Service Time" << endl;
    cout << "Prob\t \tCumulative\t Range\n";
    for (int i = 0;i < serviceTime.size();i++)
    {
        cout << probabilityService[i] << "\t\t";
        cout << cumulativeService[i] / 100 << "\t\t";
        i == 0 ? cout << 1 << " - " << cumulativeService[i] << "\n" : cout << cumulativeService[i - 1] + 1 << " - " << cumulativeService[i] << "\n";
    }


}

void System::buildSystem(int samples)
{
    clear();
    for (int i = 0;i < samples;i++)
    {
        //cout << " i :" << i << endl;
        int interArrivalTime = getArrivalTime();
        int serviceTime = getServiceTime();
        int arrival = i == 0 ? 0 : tasks[i - 1].arrivalTime + interArrivalTime;
        if (i == 0)
        {
            Task firstTask = Task(1, 0, 0, serviceTime, 0, 0, serviceTime, serviceTime, 0);
            tasks.push_back(firstTask);
            driveInQueue.push_back(firstTask);
            continue;
        }
        else if (i == 1 || (i > 1 && arrival > driveInQueue[driveInQueue.size()- 2].timeServiceEnds))
        {

            int serviceBegin;
            if (driveInQueue.back().timeServiceEnds < arrival)
                serviceBegin = arrival;
            else serviceBegin = driveInQueue.back().timeServiceEnds;

            int waiting;
            if (driveInQueue.back().timeServiceEnds < arrival)
                waiting = 0;
            else waiting = driveInQueue.back().timeServiceEnds - arrival;

            int serviceEnd = serviceBegin + serviceTime;
            int timeSpent = serviceEnd - arrival;
            int idle = driveInQueue.back().timeServiceEnds > arrival ? 0 : arrival - driveInQueue.back().timeServiceEnds;
            driveInQueue.push_back(Task(i + 1, interArrivalTime, arrival, serviceTime, serviceBegin, waiting, serviceEnd, timeSpent, idle));
            tasks.push_back(Task(i + 1, interArrivalTime, arrival, serviceTime, serviceBegin, waiting, serviceEnd, timeSpent, idle));
            continue;
        }
        else
        {

            if (insideQueue.size() == 0)
            {
                insideQueue.push_back(Task(i + 1, interArrivalTime, arrival, serviceTime, arrival, 0, arrival + serviceTime, serviceTime, 0));
                tasks.push_back(Task(i + 1, interArrivalTime, arrival, serviceTime, arrival, 0, arrival + serviceTime, serviceTime, 0));
                continue;
            }
            else {
                int serviceBegin;
                if (insideQueue.back().timeServiceEnds < arrival)
                    serviceBegin = arrival;
                else serviceBegin = insideQueue.back().timeServiceEnds;

                int waiting;
                if (insideQueue.back().timeServiceEnds < arrival)
                    waiting = 0;
                else waiting = insideQueue.back().timeServiceEnds - arrival;

                int serviceEnd = serviceBegin + serviceTime;
                int timeSpent = serviceEnd - arrival;
                int idle = insideQueue.back().timeServiceEnds > arrival ? 0 : arrival - insideQueue.back().timeServiceEnds;
                insideQueue.push_back(Task(i + 1, interArrivalTime, arrival, serviceTime, serviceBegin, waiting, serviceEnd, timeSpent, idle));
                tasks.push_back(Task(i + 1, interArrivalTime, arrival, serviceTime, serviceBegin, waiting, serviceEnd, timeSpent, idle));
            }
        }
    }

}

int System::getArrivalTime()
{

    int random = rand() % 100 + 1;
    //cout << "Arrival rand :" << random << "\n";
    for (int i = 0;i < cumulativeArrival.size();i++)
    {
        if (i == 0)
        {
            if (random >= 1 && random <= cumulativeArrival[i])
                return arrivalTime[i];
        }
        else if (random >cumulativeArrival[i-1] && random <= cumulativeArrival[i] ) {
            return arrivalTime[i];
        }
    }
    return -1;
}


int System::getServiceTime()
{

    int random = rand() % 100 + 1;
    //cout << "Service rand :" << random << "\n";
    for (int i = 0;i < cumulativeService.size();i++)
    {
        if (i == 0)
        {
            if (random >= 1 && random <= cumulativeService[i])
                return serviceTime[i];
        }
        else if (random >cumulativeService[i - 1] && random <= cumulativeService[i]) {
            return serviceTime[i];
        }
    }
    return -1;
}

Result System::calculateSystem() {

    float driveinSvc = 0;
    float driveinWaiting = 0;

    float insideSvc = 0;
    float insideWaiting = 0;
    int idleInside = 0;
    int maxInsideQueue = 1;

    int numDrivein = driveInQueue.size();
    int numInside = insideQueue.size();
    float probInside =(float) numInside*((float) 100/tasks.size());

    for (auto t : driveInQueue)
    {
        driveinSvc += t.serviceTime;
        driveinWaiting += t.waitingTime;
    }
    for (auto t : insideQueue)
    {
        insideSvc += t.serviceTime;
        insideWaiting += t.waitingTime;
        idleInside += t.idleTime;
    }

    if (numInside > 1)
    {
        for (int i = numInside - 1;i >= 0;i--)
        {
            int maxInsideQueueTemp = 1;
            for (int j = i - 1;j >= 0;j--)
            {
                if (insideQueue[i].arrivalTime < insideQueue[j].timeServiceEnds)
                {
                    maxInsideQueueTemp++;
                    maxInsideQueue = max(maxInsideQueue, maxInsideQueueTemp);
                }
                else break;
            }
        }
    }
    result = Result(driveinSvc / numDrivein, numInside==0?0:insideSvc / numInside, driveinWaiting / numDrivein, numInside == 0 ? 0 : insideWaiting / numInside, maxInsideQueue, probInside, idleInside);

    return result;
}

void System::clear() {
    tasks.clear();
    driveInQueue.clear();
    insideQueue.clear();
    result.clear();
}
System::~System()
{
}
