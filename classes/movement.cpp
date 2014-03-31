
#include "classes.h"






//************************************************
//*                                              *
//*           BEGIN Movement CLASS               *
//*                                              *
//************************************************
/*
Movement::Movement()
{
    iPtr;
    fPtr;
    dPtr;
    vPtr;
}




void Operation::set_iOperation( void ( *intPtr ) (int iValue))
{
    iPtr = intPtr;
}

void Operation::set_fOperation( void ( *floatPtr ) (float fValue))
{
    fPtr = floatPtr;
}

void Operation::set_dOperation( void ( *doublePtr ) (double dValue))
{
    dPtr = doublePtr;
}

void Operation::set_vOperation( void ( *voidPtr ) ())
{
    vPtr = voidPtr;
}




void Operation::perform_iOperation(int iValue)
{
    (*iPtr)(iValue);
}

void Operation::perform_fOperation(float fValue)
{
    (*fPtr)(fValue);
}

void Operation::perform_dOperation(double dValue)
{
    (*dPtr)(dValue);
}

void Operation::perform_vOperation()
{
    (*vPtr)();
}







//************************************************
//*                                              *
//*        BEGIN MovementTracker CLASS           *
//*                                              *
//************************************************

OperationTracker::OperationTracker(int size)
{
    trackerSize = size;
    tracker = new Operation[size];
}




void OperationTracker::add_iOperation(int callID, void ( *intPtr ) (int iValue) )
{
    tracker[callID].set_iOperation( (*intPtr) );
}

void OperationTracker::add_fOperation(int callID, void ( *floatPtr ) (float fValue) )
{
    tracker[callID].set_fOperation( (*floatPtr) );
}

void OperationTracker::add_dOperation(int callID, void ( *doublePtr ) (double dValue) )
{
    tracker[callID].set_dOperation( (*doublePtr) );
}

void OperationTracker::add_dOperation(int callID, void ( *voidPtr ) () )
{
    tracker[callID].set_vOperation( (*voidPtr) );
}

/**/

