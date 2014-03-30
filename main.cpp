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




int main(void)
{
    LCD.Clear( FEHLCD::Black );
    LCD.SetFontColor( FEHLCD::White );


    Operation doStuff;

    doStuff.setOperation(&DriveForTime);

    doStuff.performOperation(3.0);

    //(*fPtr)(3.0);


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

    //Sleep(time);

    float startTime = TimeNow();
    float dTime = 0.0;
    while( dTime < time )
    {
        //logDataStuffs();
        dTime = TimeNow() - startTime;
    }

    rMotor.Stop();
    lMotor.Stop();
}



