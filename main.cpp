



#include "main.h"




FEHMotor lMotor(FEHMotor::Motor0);
FEHMotor rMotor(FEHMotor::Motor1);
ButtonBoard buttons( FEHIO::Bank3 );








OperationTracker opTracker(4);






int main(void)
{
    LCD.Clear( FEHLCD::Black );
    LCD.SetFontColor( FEHLCD::White );

    //OperationTracker opTracker(4);

    //Operation straight;
    opTracker.addOperation(&DriveForTime);

    //Operation left;
    opTracker.addOperation(&TurnLeftForTime);

    //Operation right;
    opTracker.addOperation(&TurnRightForTime);

    //Operation back;
    opTracker.addOperation(&BackwardsForTime);



    driveProcess();



    return 0;
}












