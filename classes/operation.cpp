

#include "classes.h"



//************************************************
//*                                              *
//*          BEGIN Operation CLASS               *
//*                                              *
//************************************************

Operation::Operation()
{
    fPtr;
}

void Operation::setOperation( void ( *floatPtr ) (float value))
{
    fPtr = floatPtr;
}

void Operation::performOperation(float fValue)
{
    (*fPtr)(fValue);
}







//************************************************
//*                                              *
//*       BEGIN OperationTracker CLASS           *
//*                                              *
//************************************************

OperationTracker::OperationTracker(int size)
{
    trackerSize = size;
    tracker = new Operation[size];
}

void OperationTracker::addOperation(int callID, void ( *floatPtr ) (float value) )
{
    tracker[callID].setOperation( (*floatPtr) );
}















