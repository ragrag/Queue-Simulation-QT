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
     avgSvcAll=0;
     avgInterArrival=0;
}

Result::Result(float avgDriveinSvc,float avgInsideSvc,float avgWaitingDrivein,float avgWaitingInside, int maxQueueLength, float probInside,int idleTime,float avgSvcAll,float avgInterArrival)
{
    this-> avgSvcDrivein= avgDriveinSvc;
    this->avgSvcInside= avgInsideSvc;
    this->avgWaitingDrivein = avgWaitingDrivein;
    this->avgWaitingInside = avgWaitingInside;
    this->maxQueueLength= maxQueueLength;
    this->probInside= probInside;
    this->idleTime= idleTime;
    this->avgSvcAll = avgSvcAll;
    this->avgInterArrival = avgInterArrival;
}

float Result::operator[] (int i)
{
  switch (i) {
  case 0: return (float) avgSvcAll;
  case 1: return (float) avgInterArrival;
  case 2: return avgSvcDrivein;
  case 3: return avgSvcInside;
  case 4: return avgWaitingDrivein;
  case 5: return avgWaitingInside;
  case 6: return (float) maxQueueLength;
  case 7: return probInside;
  case 8: return (float) idleTime;

  default: return -1;
  }
}

Result Result::operator+(Result other)
{

    return Result(avgSvcDrivein + other.avgSvcDrivein, avgSvcInside + other.avgSvcInside,
        avgWaitingDrivein + other.avgWaitingDrivein, avgWaitingInside + other.avgWaitingInside ,maxQueueLength + other.maxQueueLength, probInside + other.probInside, idleTime + other.idleTime,
                  avgSvcAll+other.avgSvcAll,avgInterArrival +other.avgInterArrival);

}

Result Result::operator/(int n)
{
    return Result(avgSvcDrivein/n , avgSvcInside/n, avgWaitingDrivein / n, avgWaitingInside / n, maxQueueLength/n, probInside/n, idleTime/n,avgSvcAll/n,avgInterArrival/n);
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
    avgSvcAll = 0;
    avgInterArrival = 0;
}


Result::~Result()
{
}
