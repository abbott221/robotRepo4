


#include "drive.h"



void driveProcess()
{
    opTracker.tracker[0].performOperation(1.0);
    opTracker.tracker[1].performOperation(1.0);
    opTracker.tracker[2].performOperation(1.0);
    opTracker.tracker[0].performOperation(3.0);
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
