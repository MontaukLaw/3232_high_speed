#include "user_comm.h"

uint8_t sensor_adc_data[ADC_BUFFER_SIZE] = {0};
const GPIO_Channel channels[64] = {CH_DEF(1), CH_DEF(2), CH_DEF(3), CH_DEF(4), CH_DEF(5), CH_DEF(6), CH_DEF(7),
                                   CH_DEF(8), CH_DEF(9), CH_DEF(10), CH_DEF(11), CH_DEF(12), CH_DEF(13), CH_DEF(14), CH_DEF(15), CH_DEF(16),
                                   CH_DEF(17), CH_DEF(18), CH_DEF(19), CH_DEF(20), CH_DEF(21), CH_DEF(22), CH_DEF(23), CH_DEF(24),
                                   CH_DEF(25), CH_DEF(26), CH_DEF(27), CH_DEF(28), CH_DEF(29), CH_DEF(30), CH_DEF(31), CH_DEF(32)};

volatile uint8_t points_data[TOTAL_POINTS] = {0};
uint8_t tx_data[FRAME_LEN] = {0};

void set_channel_pin(uint8_t ch, GPIO_PinState pin_status)
{
    if (ch < sizeof(channels) / sizeof(channels[0]))
    {
        HAL_GPIO_WritePin(channels[ch].port, channels[ch].pin, pin_status);
    }
}

void adc_data_handler_with_idx(uint8_t point_nmb)
{
    // 简单计算平均值
    uint32_t adc_sum = 0;
    uint32_t i = 0;

    for (i = 0; i < ADC_BUFFER_SIZE; i++)
    {
        adc_sum += sensor_adc_data[i];
    }

    float result = adc_sum / (ADC_BUFFER_SIZE - 0);

    points_data[point_nmb] = (uint8_t)result; // 将结果存储到points_data中
}

void fill_tx_data(void)
{

    tx_data[TOTAL_POINTS] = 0xaa;
    tx_data[TOTAL_POINTS + 1] = 0x55;
    tx_data[TOTAL_POINTS + 2] = 0x03;
    tx_data[TOTAL_POINTS + 3] = 0x99;
}

void uart_send(void)
{
    fill_tx_data();
    memcpy(&tx_data[0], points_data, sizeof(points_data));

    HAL_UART_Transmit_DMA(&huart1, tx_data, FRAME_LEN);
}

void main_adc_task(void)
{
    uint16_t input_idx = 0;
    uint16_t adc_idx = 0;
    uint16_t point_nmb = 0;

    for (input_idx = 0; input_idx < INPUT_CH_NUMBER; input_idx++)
    {
        // 先打开GPIO输出
        set_channel_pin(input_idx, GPIO_PIN_SET);

        for (adc_idx = 0; adc_idx < ADC_CHANNEL_NUMBER; adc_idx++)
        {
            set_adc_ch(adc_idx);
            delay_us(10);
            point_nmb = input_idx * ADC_CHANNEL_NUMBER + adc_idx;
            adc_data_handler_with_idx(point_nmb);

            disable_adc_ch(adc_idx);
        }

        // 关闭GPIO输出
        set_channel_pin(input_idx, GPIO_PIN_RESET);
    }

    uart_send();

}