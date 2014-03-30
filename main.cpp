#include <FEHLCD.h>
#include <FEHIO.h>
#include <FEHUtility.h>
#include <FEHMotor.h>
#include <FEHServo.h>
#include <FEHWONKA.h>
#include <FEHBattery.h>


FEHMotor lMotor(FEHMotor::Motor0);
FEHMotor rMotor(FEHMotor::Motor1);
ButtonBoard buttons( FEHIO::Bank3 );


class Operation
{
public:
    Operation();
    void setOperation(void ( *floatPtr ) (float value));
    void performOperation(float fValue);
private:
    void ( *fPtr ) (float value);
};




void DriveForTime(float time);

void TurnLeftForTime(float time);

void TurnRightForTime(float time);

void BackwardsForTime(float time);




int main(void)
{
    LCD.Clear( FEHLCD::Black );
    LCD.SetFontColor( FEHLCD::White );

    Operation straight;
    straight.setOperation(&DriveForTime);

    Operation left;
    left.setOperation(&TurnLeftForTime);

    Operation right;
    right.setOperation(&TurnRightForTime);

    Operation back;
    back.setOperation(&BackwardsForTime);



    straight.performOperation(1.0);
    left.performOperation(1.0);
    right.performOperation(1.0);
    straight.performOperation(3.0);



    return 0;
}


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

