#ifndef LEG_H
#define LEG_H

#include <Arduino.h>
#include <Multiservo.h>

struct Angle { //하나의 다리에 달린 서보모터의 각도를 제어하는 구조체
    short int hip;
    short int knee;
    short int ankle;
};
const Angle LEG_UP = {1, 60, 70};
const Angle LEG_DOWN = {1, -30, 70};
const Angle LEG_CROUCH = {1, 70, 70};  //각 다리마다 구현해야 하는 각도가 있는데 특정 목적에 맞게 6개로 분류함. 우리가 기호에 맞게 각도를 조절할수 있다.
const Angle LEG_FORWARD = {30, 1, 1};
const Angle LEG_BACK = {-50, 1, 1};
const Angle LEG_STD = {1, 1, 1};

class Leg  //Leg라는 클래스 안에 엄청나게 많은 것들이 내장되어 있다. 우린 Leg클래스 안에서 많은 작업들을 수행할 수 있다.
{
    public:
        Leg(short int pin_hip, short int pin_knee, short int pin_ankle, short int angle_hip, short int angle_knee, short int angle_ankle, char leg_side);
        Leg();
        void setupStaticAngle(short int angle_hip, short int angle_knee, short int angle_ankle);
        bool setupSide(char leg_side);  //어느 쪽
        void setupLeg();//거미로봇으로 하여금 우리가 설정한 기본자세로 있도록 서보모터의 각도를 제어한다.
        Angle getCurentAngle();//현재의 서보모터의 각도들이 몇도인지에 관한 정보를 받는다.
        bool moving(Angle angle);//함수의 입력값으로 angle구조체의 hip, knee, ankle값을 우리가 설정해서 원하는 관절 각도로 만들 수 있다.
        Angle getStaticAngle();
        void stand();//거미로봇이 서있도록 관절각도를 조절할 수 있다. 여기 안에서 moving 함수를 사용하여 서보모터의 각도를 제어할 것이다.

    //protected:

    private:
        Multiservo HIP; //다른 파일의 코드를 살펴보면 HIP.write(), KNEE.write(), ANKLE.write()처럼 코드를 짜서 직접 서보모터의 각도를 제어하여 바꿀 수 있다.
        Multiservo KNEE;
        Multiservo ANKLE;
        Angle leg_Angle;//구조체 변수로, 서보모터의 각도값이 들어가있다.
        Angle leg_CurentAngle;//현재의 각도를 알아야 여기에 몇도 각도를 더 추가해서 어떤 행위를 할지 우리가 직접 정할 수 있다.
        char side;//왼쪽 다리인지 오른쪽 다리인지에 관한 정보를 가져다주는 변수 side
};

#endif // LEG_H
