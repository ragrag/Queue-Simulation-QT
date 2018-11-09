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
    void clear();
    Result operator+(Result);
    Result operator/(int);
    Result();
    Result(float, float, float,float ,int, float, int);
    float operator[] (int i);
    ~Result();
};


#endif // RESULT_H
