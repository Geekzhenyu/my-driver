//
// Created by MaoZhenYu on 24-8-3.
//

#ifndef OLED_IIC_H
#define OLED_IIC_H

#include "delay.h"


//IICµÄSDAºÍSCL
#define SCL_GPIO_PORT               GPIOB
#define SCL_GPIO_PIN                GPIO_PIN_6
#define SDA_GPIO_PORT               GPIOB
#define SDA_GPIO_PIN                GPIO_PIN_7

#define SCL(x) do { HAL_GPIO_WritePin(SCL_GPIO_PORT, SCL_GPIO_PIN, (x) ? 1 : 0); } while (0)
#define SDA(x) do { HAL_GPIO_WritePin(SDA_GPIO_PORT, SDA_GPIO_PIN, (x) ? 1 : 0); } while (0)




#endif //OLED_IIC_H
