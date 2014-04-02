#ifndef RPSCLASSES_H
#define RPSCLASSES_H


#include "../commonDependencies.h"




//based on killed struct
struct set
{
    float X;
    float Y;
    float Head;
};



//based on killed struct
class RPSinfo
{
public:
    struct set getExpected();
    struct set getStart();
    struct set getStartPrime();
    struct set getEnd();
    struct set getEndPrime();

    void getExpected(struct set exp);
    void getStart(struct set logStart);
    void getStartPrime(struct set logStartPrime);
    void getEnd(struct set logEnd);
    void getEndPrime(struct set logEndPrime);

private:
    struct set expected;

    struct set loggedStart;
    struct set loggedStartPrime;

    struct set loggedEnd;
    struct set loggedEndPrime;
};












class RPScleaner
{
    public:
        RPScleaner();

        //set initial move values
        void initiateMoveData();
        //set current values
        //stalls out after x time?
        //continues to scan until values aren't 0,0,0
        //SETTER method
        void update();

        //DO INTERNAL CALLS NEED [THIS.]METHOD();???

        //called internally, avoid externally
        //checks for 0,0,0
        bool currentValuesAreLegit();



        //sets X displacement
        void compareX(float supposedValue);
        //sets Y displacement
        void compareY(float supposedValue);
        //sets Angle displacement
        void compareAngle(float supposedValue);



        float getInitX();
        float getInitY();
        float getInitAngle();

        float getCurrentX();
        float getCurrentY();
        float getCurrentAngle();

        float getDisplacementX();
        float getDisplacementY();
        float getDisplacementAngle();


    private:

        struct set real;

        struct set displaced;

        struct set displacement;

//        float realX;
//        float realY;
//        float realHead;

//        float displacedX;
//        float displacedY;
//        float displacedHead;

//        float displacementX;
//        float displacementY;
//        float displacementHead;
};






extern RPScleaner cleaner;








#endif // RPSCLASSES_H
