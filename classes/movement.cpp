
#include "classes.h"






//************************************************
//*                                              *
//*           BEGIN Movement CLASS               *
//*                                              *
//************************************************

Movement::Movement()
{
    operationCallID = 0;

    iValue = 0;
    fValue = 0;
    dValue = 0;

    dataType = tVoid;
}




int Movement::getIntValue()
{
    return iValue;
}

float Movement::getFloatValue()
{
    return fValue;
}

double Movement::getDoubleValue()
{
    return dValue;
}




TypeEnum Movement::getDataType()
{
    return dataType;
}




void Movement::set_iMovement( int callID, int value)
{
    operationCallID = callID;
    iValue = value;
    dataType = tInt;
}

void Movement::set_fMovement( int callID, float value)
{
    operationCallID = callID;
    fValue = value;
    dataType = tFloat;
}

void Movement::set_dMovement( int callID, double value)
{
    operationCallID = callID;
    dValue = value;
    dataType = tDouble;
}

void Movement::set_vMovement( int callID)
{
    operationCallID = callID;
    dataType = tVoid;
}





void Movement::perform_iMovement()
{
    opTracker.tracker[operationCallID].perform_iOperation(iValue);
}

void Movement::perform_fMovement()
{
    opTracker.tracker[operationCallID].perform_fOperation(fValue);
}

void Movement::perform_dMovement()
{
    opTracker.tracker[operationCallID].perform_dOperation(dValue);
}

void Movement::perform_vMovement()
{
    opTracker.tracker[operationCallID].perform_vOperation();
}








//************************************************
//*                                              *
//*        BEGIN MovementTracker CLASS           *
//*                                              *
//************************************************

MovementTracker::MovementTracker()
{
    filled = 0;
    trackerSize = 144;
    tracker = new Movement[144];
}




void MovementTracker::add_iMovement(int dOp, int value)
{
    tracker[filled].set_iMovement( dOp, value );
    filled += 1;
}

void MovementTracker::add_fMovement(int dOp, float value)
{
    tracker[filled].set_fMovement( dOp, value );
    filled += 1;
}

void MovementTracker::add_dMovement(int dOp, double value)
{
    tracker[filled].set_dMovement( dOp, value );
    filled += 1;
}

void MovementTracker::add_vMovement(int dOp)
{
    tracker[filled].set_vMovement( dOp );
    filled += 1;
}























