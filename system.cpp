#include "System.h"
#include "Task.h"


//The main container class for the program

//Contructor that takes parameters and calculates probability tables
System::System(vector <int>  arrivalTime, vector <double> probabilityArrival, vector <int> serviceTime, vector <double> probabilityService)
{
    this->arrivalTime = arrivalTime;
    this->probabilityArrival = probabilityArrival;
    this->serviceTime = serviceTime;
    this->probabilityService = probabilityService;
    result = Result();
    buildTables();
}

System::System()
{

}

//Creates Cumulative probability tables
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

//Returns Cumulative Probability tables
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


//Populates system queues, twocars is true if the capacity of the drivein Queue is 3 (can have 2 cars waiting in the queue)
void System::buildSystem(int samples,bool twocars)
{
    clear();


        //Iterate over the number of jobs
    for (int i = 0;i < samples;i++)
    {

        int interArrivalTime =getArrivalTime();

        int serviceTime = getServiceTime();

        int arrival = i == 0 ? 0 : tasks[i - 1].arrivalTime + interArrivalTime;   //getting arrival time

        //Populate the first job in the drivein queue
        if (i == 0)
        {
            Task firstTask = Task(1, 0, 0, serviceTime, 0, 0, serviceTime, serviceTime, 0);
            tasks.push_back(firstTask);
            driveInQueue.push_back(firstTask);
            continue;
        }

        //Check if its the second job (or third if twocar drivein queue), or if the condition for the customer to go in the drivein queue is met
        else if  ( (twocars? (i == 1 || i==2 ): i == 1 ) || ( (twocars? i>2: i > 1) && arrival >= driveInQueue[driveInQueue.size()- (twocars? 3:2)].timeServiceEnds))
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
            int timeSpent = serviceEnd -    arrival;
            int idle = driveInQueue.back().timeServiceEnds > arrival ? 0 : arrival - driveInQueue.back().timeServiceEnds;
            driveInQueue.push_back(Task(i + 1, interArrivalTime, arrival, serviceTime, serviceBegin, waiting, serviceEnd, timeSpent, idle));
            tasks.push_back(Task(i + 1, interArrivalTime, arrival, serviceTime, serviceBegin, waiting, serviceEnd, timeSpent, idle));
            continue;
        }

        //Customer goes in the inside queue
        else

        {


            //If the inside queue is empty
            if (insideQueue.size() == 0)
            {

                insideQueue.push_back(Task(i + 1, interArrivalTime, arrival, serviceTime, arrival, 0, arrival + serviceTime, serviceTime,arrival));
                tasks.push_back(Task(i + 1, interArrivalTime, arrival, serviceTime, arrival, 0, arrival + serviceTime, serviceTime, arrival));
                continue;
            }

            //if it is not empty
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

//getting random interarrival time
int System::getArrivalTime()
{
    int random = rand() % 100 + 1; //random number generation
    //Checking ranges and returning appropriate number
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

//getting random service time
int System::getServiceTime()
{

    int random = rand() % 100 + 1; //random number generation


    //checking ranges and returning appropriate number
    for (int i = 0;i < cumulativeService.size();i++)
    {
        if (i == 0)
        {
            if (random >= 1 && random <= cumulativeService[i])
            {
                return serviceTime[i];
            }
        }
        else if (random >cumulativeService[i - 1] && random <= cumulativeService[i]) {
            return serviceTime[i];
        }
    }
    return -1;
}


//Calculating the results based on populated queues
Result System::calculateSystem() {


    //initializing values to 0
    float driveinSvc = 0;
    float driveinWaiting = 0;

    float insideSvc = 0;
    float insideWaiting = 0;
    int idleInside = 0;
    int maxInsideQueue = 1;

    int numDrivein =(int) driveInQueue.size();
    int numInside = (int)insideQueue.size();
    float probInside =(float) ((float)numInside*((float) 100/tasks.size()) )/100;
    float svcAll = 0;
    float interArrivalAll = 0;

    //accumilating values
    for (auto t : driveInQueue)
    {
        driveinSvc += t.serviceTime;
        driveinWaiting += t.waitingTime;
        svcAll += t.serviceTime;
        interArrivalAll += t.interarrivalTime;
    }
    for (auto t : insideQueue)
    {
        insideSvc += t.serviceTime;
        insideWaiting += t.waitingTime;
        svcAll += t.serviceTime;
        idleInside += t.idleTime;
    }


    //getting maximum queue length
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

    //setting correct idle time
    if(idleInside == 0)
    {
       idleInside = tasks.back().timeServiceEnds;
    }
    else {
        if (tasks.back().taskID > insideQueue.back().taskID)
            idleInside += tasks.back().timeServiceEnds - insideQueue.back().timeServiceEnds;

    }


    //returning results/n (avarage)
   return result = Result(driveinSvc / numDrivein, numInside ==0 ?0:insideSvc / numInside, driveinWaiting / numDrivein, numInside == 0 ? 0 : insideWaiting / numInside,numInside==0?0: maxInsideQueue, probInside,   idleInside     ,svcAll/tasks.size(),interArrivalAll/tasks.size());


}


//Clearing members
void System::clear() {
    tasks.clear();
    driveInQueue.clear();
    insideQueue.clear();
    result.clear();
}
System::~System()
{
}
