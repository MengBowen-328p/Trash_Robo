#include "corexy.h"

void X_Motor_RUN(char dir, int len)  //X轴电机旋转   para: dir(0:正向旋转,1:反向旋转); len(距离)
{
    if(dir == "0")        //正向旋转
    {
        
    }
    else if(dir == "1")   //反向旋转
    {

    }
}

void Y_Motor_RUN(char dir, int len)  //Y轴电机旋转   para: dir(0:正向旋转,1:反向旋转); len(距离)
{
    if (dir == "0")        //正向旋转
    {
        /* code */
    }
    else if (dir == "1")   //反向旋转
    {
        /* code */
    } 
}

void Z_Motor_RUN(char dir, int len)  //Z轴舵机旋转    para: dir(0:正向旋转,1:反向旋转); len(夹子下降距离/*为固定值大概*/)
{
    if (dir == "0")
    {
        /* code */
    }
    else if (dir == "1")
    {
        /* code */
    }
}

void A_Motor_RUN(char dir, int angle)  //A轴电机旋转    para: dir(0:正向旋转,1:反向旋转); angle(夹子最终角度)
{
    if (dir == "0")
    {
        /* code */
    }
    else if (dir == "1")
    {
        /* code */
    }
}

