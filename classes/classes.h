#ifndef CLASSES_H
#define CLASSES_H


#include "../main.h"




class Operation
{
public:
    Operation();
    void setOperation(void ( *floatPtr ) (float value));
    void performOperation(float fValue);
private:
    void ( *fPtr ) (float value);
};



class OperationTracker
{
public:
    OperationTracker(int size);
    void addOperation(void ( *floatPtr ) (float value));
    //void addOperation(int arraySpot, void ( *floatPtr ) (float value));
    //void addOperation(Operation dOperation);
    //void performOperation(float fValue);

    Operation * tracker;

private:
    int filled;
    int trackerSize;
};



extern OperationTracker opTracker;









#endif // CLASSES_H
