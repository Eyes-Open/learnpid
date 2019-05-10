#include "Control_Task.h"
#include "CloudMotor.h"
#include "stm32f4xx.h"
#include "ChassisMotor.h"

long long time_1ms = 0;
void Control_Task()
{
//    time_1ms ++;
//    if(time_1ms > 2000)
//        time_1ms = 0;
//    if(time_1ms == 1000)
//        CM_LF_Positionloop.Set = 7000;
//    if(time_1ms == 2000)
//        CM_LF_Positionloop.Set = 1000;
		CM_LF_Positionloop.Set = 5000;
    ChassisMotor_Ctrl();
    ChassisMotor_Out();
}
