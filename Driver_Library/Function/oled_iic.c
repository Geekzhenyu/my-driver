//
// Created by MaoZhenYu on 24-8-3.
//

#include "oled_iic.h"


void IIC_Start()
{
    SDA(1);
    SCL(1);
    HAL_Delay_us(5);
    SDA(0);
    HAL_Delay_us(5);
    SCL(0);  //钳住SCL，准备发送信息
}

void IIC_Stop()
{
    SDA(0);
    SCL(0);
    HAL_Delay_us(5);
    SCL(1);
    SDA(1);
    HAL_Delay_us(5);
}

void IIC_ACK()
{
    SCL(0);
    SDA(0);
    HAL_Delay_us(2);
    SCL(1);
    HAL_Delay_us(5);
    SCL(0);
}
void IIC_NACK()
{
    SCL(0);
    SDA(1);
    HAL_Delay_us(2);
    SCL(1);
    HAL_Delay_us(5);
    SCL(0);
}

uint8_t IIC_WaitAck()
{
    uint8_t errtime=0;
    SDA(1);
    SCL(1);
    while(HAL_GPIO_ReadPin(SDA_GPIO_PORT,SDA_GPIO_PIN) == 1)
    {
        errtime++;
        if(errtime>=250)
        {
            IIC_Stop();
            return 1;
        }
    }
    return 0;
}