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



void DriveForTime(float time);




int main(void)
{
    LCD.Clear( FEHLCD::Black );
    LCD.SetFontColor( FEHLCD::White );


    DriveForTime(3.0);


    return 0;
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



