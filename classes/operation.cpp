

#include "classes.h"


Operation::Operation()
{
    fPtr;
}

void Operation::setOperation(void ( *floatPtr ) (float value))
{
    fPtr = floatPtr;
}



void Operation::performOperation(float fValue)
{
    (*fPtr)(fValue);
}









OperationTracker::OperationTracker(int size)
{
    filled = 0;
    trackerSize = size;
    tracker = new Operation[size];
}
void OperationTracker::addOperation( void ( *floatPtr ) (float value) )
{
    //tricky spot
    tracker[filled].setOperation( (*floatPtr) );
    filled += 1;
}


