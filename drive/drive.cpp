


#include "drive.h"



void driveProcess()
{


    TypeEnum tempType;

    for (int i = 0; i < 144; i++)
    {
        tempType = mTracker.tracker[i].getDataType();

        if (tempType == tInt)
        {
            mTracker.tracker[i].perform_iMovement();
        }
        else if (tempType == tFloat)
        {
            mTracker.tracker[i].perform_fMovement();
        }
        else if (tempType == tDouble)
        {
            mTracker.tracker[i].perform_dMovement();
        }
        else if (tempType == tVoid)
        {
            mTracker.tracker[i].perform_vMovement();
        }
    }

    //AT END, POTENTIAL TO EXIT THE RUN AND REBOOT
}






void DriveForTime(float time)
{

    rMotor.SetPercent(80);
    lMotor.SetPercent(-1 * 80);

    float startTime = TimeNow();
    float dTime = 0.0;
    while( dTime < time )
    {
        dTime = TimeNow() - startTime;
    }

    rMotor.Stop();
    lMotor.Stop();
}

void TurnLeftForTime(float time)
{
    rMotor.SetPercent(80);
    lMotor.SetPercent(80);

    float startTime = TimeNow();
    float dTime = 0.0;
    while( dTime < time)
    {
        dTime = TimeNow() - startTime;
    }

    rMotor.Stop();
    lMotor.Stop();
}

void TurnRightForTime(float time)
{
    rMotor.SetPercent(-1 * 80);
    lMotor.SetPercent(-1 * 80);

    float startTime = TimeNow();
    float dTime = 0.0;
    while( dTime < time)
    {
        dTime = TimeNow() - startTime;
    }

    rMotor.Stop();
    lMotor.Stop();
}



void BackwardsForTime(float time)
{
    rMotor.SetPercent(-1 * 80);
    lMotor.SetPercent(80);

    float startTime = TimeNow();
    float dTime = 0.0;
    while( dTime < time)
    {
        dTime = TimeNow() - startTime;
    }

    rMotor.Stop();
    lMotor.Stop();
}




void PrintInt(int value)
{
    LCD.Write("Int: ");
    LCD.WriteLine(value);

    Sleep(1.0);
}

void PrintFloat(float value)
{
    LCD.Write("Float: ");
    LCD.WriteLine(value);

    Sleep(1.0);
}

void PrintDouble(double value)
{
    LCD.Write("Double: ");
    LCD.WriteLine(value);

    Sleep(1.0);
}

void PrintVoid()
{
    LCD.Write("Void.");

    Sleep(1.0);
}












