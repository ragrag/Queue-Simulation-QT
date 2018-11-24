#ifndef RESULT_H
#define RESULT_H
class Result
{

public:

    float avgSvcDrivein;
    float avgSvcInside;
    float avgWaitingDrivein;
    float avgWaitingInside;
    int maxQueueLength;
    float probInside;
    int idleTime;
    float avgSvcAll;
    float avgInterArrival;
    void clear();
    Result();
    Result(float, float, float,float ,int, float, int,float,float);
    Result operator+(Result);
    Result operator/(int);
    float operator[] (int i);
    ~Result();
};


#endif // RESULT_H
