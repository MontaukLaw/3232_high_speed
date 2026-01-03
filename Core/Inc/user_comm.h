#ifndef _USER_COMM_H_
#define _USER_COMM_H_

#include "main.h"
#include "adc.h"
#include "dma.h"
#include "usart.h"
#include "gpio.h"
#include "sys.h"
#include <stdint.h>
#include "adc_app.h"

#include "stm32g431xx.h"
#include "switch_hal.h"

typedef struct
{
    GPIO_TypeDef *port;
    uint16_t pin;
} GPIO_Channel;

#define CH_DEF(n) {OUT_##n##_GPIO_Port, OUT_##n##_Pin}

#define ADC_BUFFER_SIZE 100
#define INPUT_CH_NUMBER 32

#define ADC_CHANNEL_NUMBER 32

#define TOTAL_POINTS (INPUT_CH_NUMBER * ADC_CHANNEL_NUMBER)

#define FRAME_LEN (TOTAL_POINTS + 4)

#endif
