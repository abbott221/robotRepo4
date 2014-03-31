#ifndef CLASSES_H
#define CLASSES_H


#include "../main.h"




class Operation
{
public:
    Operation();

    void set_iOperation(void ( *intPtr ) (int iValue));
    void set_fOperation(void ( *floatPtr ) (float fValue));
    void set_dOperation(void ( *doublePtr ) (double dValue));
    void set_vOperation(void ( *voidPtr ) ());

    void perform_iOperation(int iValue);
    void perform_fOperation(float fValue);
    void perform_dOperation(double dValue);
    void perform_vOperation();

private:
    void ( *iPtr ) (int iValue);
    void ( *fPtr ) (float fValue);
    void ( *dPtr ) (double dValue);
    void ( *vPtr ) ();
};



class OperationTracker
{
public:
    OperationTracker(int size);
    void add_iOperation(int callID, void ( *intPtr ) (int iValue));
    void add_fOperation(int callID, void ( *floatPtr ) (float fValue));
    void add_dOperation(int callID, void ( *doublePtr ) (double dValue));
    void add_vOperation(int callID, void ( *voidPtr ) ());
    //void addOperation(int arraySpot, void ( *floatPtr ) (float value));
    //void addOperation(Operation dOperation);
    //void performOperation(float fValue);

    Operation * tracker;

private:
    //int filled;
    int trackerSize;
};




class Movement
{
public:
    Movement();

    int getIntValue();
    float getFloatValue();
    double getDoubleValue();

    TypeEnum getDataType();

    void set_iMovement( int callID, int value);
    void set_fMovement( int callID, float value);
    void set_dMovement( int callID, double value);
    void set_vMovement( int callID);

    void perform_iMovement();
    void perform_fMovement();
    void perform_dMovement();
    void perform_vMovement();

private:
    int operationCallID;

    int iValue;
    float fValue;
    double dValue;

    TypeEnum dataType;
    //values
};



class MovementTracker
{
public:
    //size is 144
    MovementTracker();

    //presets as operation, value
    void add_iMovement(int dOp, int value);
    void add_fMovement(int dOp, float value);
    void add_dMovement(int dOp, double value);
    void add_vMovement(int dOp); //void

    //driveProcess as operation, value
//    void perform_iMovement(int dOp);
//    void perform_fMovement(int dOp);
//    void perform_dMovement(int dOp);
//    void perform_vMovement(int dOp);

    Movement * tracker;

private:
    int filled;
    int trackerSize;
};





extern MovementTracker mTracker;
extern OperationTracker opTracker;









#endif // CLASSES_H
