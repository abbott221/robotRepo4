



#include "main.h"




FEHMotor lMotor(FEHMotor::Motor0);
FEHMotor rMotor(FEHMotor::Motor1);
ButtonBoard buttons( FEHIO::Bank3 );








OperationTracker opTracker(30);






int main(void)
{
    LCD.Clear( FEHLCD::Black );
    LCD.SetFontColor( FEHLCD::White );

    //OperationTracker opTracker(4);

    //Operation straight;
    opTracker.addOperation( 4, &DriveForTime );

    //Operation left;
    opTracker.addOperation( 8, &TurnLeftForTime );

    //Operation right;
    opTracker.addOperation( 12, &TurnRightForTime );

    //Operation back;
    opTracker.addOperation( 16, &BackwardsForTime );



    driveProcess();



    return 0;
}












