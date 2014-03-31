


#include "drive.h"



void driveProcess()
{
    opTracker.tracker[4].perform_fOperation(1.0);
    opTracker.tracker[8].perform_fOperation(1.0);
    opTracker.tracker[12].perform_fOperation(1.0);
    opTracker.tracker[4].perform_fOperation(3.0);

    opTracker.tracker[4].perform_fOperation(1.0);
    opTracker.tracker[8].perform_fOperation(1.0);
    opTracker.tracker[12].perform_fOperation(1.0);
    opTracker.tracker[4].perform_fOperation(3.0);

    opTracker.tracker[21].perform_iOperation(5);
    opTracker.tracker[22].perform_fOperation(6.0);
    opTracker.tracker[23].perform_dOperation(7.0);
    opTracker.tracker[24].perform_vOperation();





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












