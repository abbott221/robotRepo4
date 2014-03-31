



#include "main.h"




FEHMotor lMotor(FEHMotor::Motor0);
FEHMotor rMotor(FEHMotor::Motor1);

ButtonBoard buttons( FEHIO::Bank3 );
FEHEncoder  leftEncoder( FEHIO::P0_0);
FEHEncoder  rightEncoder( FEHIO::P0_1);

AnalogInputPin CDS(FEHIO::P0_7);

AnalogInputPin optoLeft(FEHIO::P2_0);
AnalogInputPin optoMid(FEHIO::P2_2);
AnalogInputPin optoRight(FEHIO::P2_4);

FEHWONKA TheRPS;
FEHServo lolServo(FEHServo::Servo0);
FEHBattery lolBattery (FEHIO::BATTERY_VOLTAGE);









OperationTracker opTracker(30);






int main(void)
{
    LCD.Clear( FEHLCD::Black );
    LCD.SetFontColor( FEHLCD::White );

    //OperationTracker opTracker(4);

    opTracker.add_fOperation( 4, &DriveForTime );
    opTracker.add_fOperation( 8, &TurnLeftForTime );
    opTracker.add_fOperation( 12, &TurnRightForTime );
    opTracker.add_fOperation( 16, &BackwardsForTime );

    opTracker.add_iOperation( 21, &PrintInt );
    opTracker.add_fOperation( 22, &PrintFloat );
    opTracker.add_dOperation( 23, &PrintDouble );
    opTracker.add_vOperation( 24, &PrintVoid );



    driveProcess();



    return 0;
}












