#include "user_comm.h"

volatile static uint32_t fac_us = 0;

void delay_init(void)
{
    HAL_SYSTICK_CLKSourceConfig(SYSTICK_CLKSOURCE_HCLK); // SysTick频率为HCLK
    fac_us = 170;                                        // 不论是否使用OS,fac_us都需要使用
}

void delay_us(uint32_t nus)
{
    uint32_t temp;
    SysTick->LOAD = nus * fac_us;             // 装载计数值
    SysTick->VAL = 0x00;                      // 清空计数器
    SysTick->CTRL |= SysTick_CTRL_ENABLE_Msk; // 开始倒数
    do
    {
        temp = SysTick->CTRL;
    } while ((temp & 0x01) && !(temp & (1 << 16))); // 等待时间到达
    SysTick->CTRL &= ~SysTick_CTRL_ENABLE_Msk; // 关闭计数器
    SysTick->VAL = 0X00;                       // 清空计数器
}

void delay_ms(uint16_t nms)
{
    while (nms--)
    {
        delay_us(1000);
    }
}
