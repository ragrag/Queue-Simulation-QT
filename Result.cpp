#include "Result.h"

Result::Result()
{
     avgSvcDrivein=0;
     avgSvcInside=0;
     avgWaitingDrivein = 0;
     avgWaitingInside = 0;
     maxQueueLength=0;
     probInside=0;
     idleTime=0;
}

Result::Result(float avgDriveinSvc,float avgInsideSvc,float avgWaitingDrivein,float avgWaitingInside, int maxQueueLength, float probInside,int idleTime)
{
    this-> avgSvcDrivein= avgDriveinSvc;
    this->avgSvcInside= avgInsideSvc;
    this->avgWaitingDrivein = avgWaitingDrivein;
    this->avgWaitingInside = avgWaitingInside;
    this->maxQueueLength= maxQueueLength;
    this->probInside= probInside;
    this->idleTime= idleTime;
}
Result Result::operator+(Result other)
{

    return Result(avgSvcDrivein + other.avgSvcDrivein, avgSvcInside + other.avgSvcInside,
        avgWaitingDrivein + other.avgWaitingDrivein, avgWaitingInside + other.avgWaitingInside ,maxQueueLength + other.maxQueueLength, probInside + other.probInside, idleTime + other.idleTime );

}

Result Result::operator/(int n)
{
    return Result(avgSvcDrivein/n , avgSvcInside/n, avgWaitingDrivein / n, avgWaitingInside / n, maxQueueLength/n, probInside/n, idleTime/n);
}


void Result::clear()
{
    avgSvcDrivein = 0;
    avgSvcInside = 0;
    avgWaitingDrivein = 0;
    avgWaitingInside = 0;
    maxQueueLength = 0;
    probInside = 0;
    idleTime = 0;
}


Result::~Result()
{
}
