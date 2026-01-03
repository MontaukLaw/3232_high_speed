#include "user_comm.h"

void set_adc_ch(uint8_t adc_ch)
{
    if (adc_ch < ADC_CHANNEL_NUMBER)
    {

        HAL_GPIO_WritePin(SW_4067_S0_GPIO_Port, SW_4067_S0_Pin, (adc_ch & 0x01) ? GPIO_PIN_SET : GPIO_PIN_RESET);
        HAL_GPIO_WritePin(SW_4067_S1_GPIO_Port, SW_4067_S1_Pin, (adc_ch & 0x02) ? GPIO_PIN_SET : GPIO_PIN_RESET);
        HAL_GPIO_WritePin(SW_4067_S2_GPIO_Port, SW_4067_S2_Pin, (adc_ch & 0x04) ? GPIO_PIN_SET : GPIO_PIN_RESET);
        HAL_GPIO_WritePin(SW_4067_S3_GPIO_Port, SW_4067_S3_Pin, (adc_ch & 0x08) ? GPIO_PIN_SET : GPIO_PIN_RESET);
    }

    if (adc_ch < 16)
    {
        HAL_GPIO_WritePin(SW_4067_1_EN_GPIO_Port, SW_4067_1_EN_Pin, GPIO_PIN_RESET);
    }
    else if (adc_ch < 32)
    {
        HAL_GPIO_WritePin(SW_4067_2_EN_GPIO_Port, SW_4067_2_EN_Pin, GPIO_PIN_RESET);
    }
}

void disable_adc_ch(uint8_t adc_ch)
{
    if (adc_ch < 16)
    {
        HAL_GPIO_WritePin(SW_4067_1_EN_GPIO_Port, SW_4067_1_EN_Pin, GPIO_PIN_SET);
    }
    else if (adc_ch < 32)
    {
        HAL_GPIO_WritePin(SW_4067_2_EN_GPIO_Port, SW_4067_2_EN_Pin, GPIO_PIN_SET);
    }
}
