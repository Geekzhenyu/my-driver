//
// Created by MaoZhenYu on 24-8-3.
//

#ifndef DELAY_H
#define DELAY_H

#include "stm32f1xx_hal.h"

void HAL_Delay_us_init(uint8_t SYSCLK);
void HAL_Delay_us(uint32_t nus);

#endif //DELAY_H
