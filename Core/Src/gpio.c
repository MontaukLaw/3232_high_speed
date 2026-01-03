/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    gpio.c
  * @brief   This file provides code for the configuration
  *          of all used GPIO pins.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "gpio.h"

/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/*----------------------------------------------------------------------------*/
/* Configure GPIO                                                             */
/*----------------------------------------------------------------------------*/
/* USER CODE BEGIN 1 */

/* USER CODE END 1 */

/** Configure pins as
        * Analog
        * Input
        * Output
        * EVENT_OUT
        * EXTI
*/
void MX_GPIO_Init(void)
{

  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOF_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOC, LED_W_Pin|SW_4067_1_EN_Pin|SW_4067_2_EN_Pin|OUT_1_Pin
                          |OUT_2_Pin|OUT_3_Pin|OUT_4_Pin|OUT_18_Pin
                          |OUT_19_Pin|OUT_28_Pin|OUT_29_Pin|OUT_30_Pin
                          |OUT_31_Pin|OUT_11_Pin|OUT_10_Pin|OUT_9_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, OUT_5_Pin|OUT_6_Pin|OUT_7_Pin|OUT_13_Pin
                          |OUT_14_Pin|OUT_15_Pin|OUT_16_Pin|OUT_17_Pin
                          |OUT_32_Pin|OUT_12_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, OUT_20_Pin|OUT_21_Pin|OUT_22_Pin|OUT_23_Pin
                          |OUT_24_Pin|OUT_25_Pin|OUT_26_Pin|OUT_27_Pin
                          |SW_4067_S0_Pin|SW_4067_S1_Pin|SW_4067_S2_Pin|SW_4067_S3_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(OUT_8_GPIO_Port, OUT_8_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : LED_W_Pin SW_4067_1_EN_Pin SW_4067_2_EN_Pin */
  GPIO_InitStruct.Pin = LED_W_Pin|SW_4067_1_EN_Pin|SW_4067_2_EN_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pins : OUT_1_Pin OUT_2_Pin OUT_3_Pin OUT_4_Pin
                           OUT_18_Pin OUT_19_Pin OUT_28_Pin OUT_29_Pin
                           OUT_30_Pin OUT_31_Pin OUT_11_Pin OUT_10_Pin
                           OUT_9_Pin */
  GPIO_InitStruct.Pin = OUT_1_Pin|OUT_2_Pin|OUT_3_Pin|OUT_4_Pin
                          |OUT_18_Pin|OUT_19_Pin|OUT_28_Pin|OUT_29_Pin
                          |OUT_30_Pin|OUT_31_Pin|OUT_11_Pin|OUT_10_Pin
                          |OUT_9_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pins : OUT_5_Pin OUT_6_Pin OUT_7_Pin OUT_13_Pin
                           OUT_14_Pin OUT_15_Pin OUT_16_Pin OUT_17_Pin
                           OUT_32_Pin OUT_12_Pin */
  GPIO_InitStruct.Pin = OUT_5_Pin|OUT_6_Pin|OUT_7_Pin|OUT_13_Pin
                          |OUT_14_Pin|OUT_15_Pin|OUT_16_Pin|OUT_17_Pin
                          |OUT_32_Pin|OUT_12_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : OUT_20_Pin OUT_21_Pin OUT_22_Pin OUT_23_Pin
                           OUT_24_Pin OUT_25_Pin OUT_26_Pin OUT_27_Pin */
  GPIO_InitStruct.Pin = OUT_20_Pin|OUT_21_Pin|OUT_22_Pin|OUT_23_Pin
                          |OUT_24_Pin|OUT_25_Pin|OUT_26_Pin|OUT_27_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pin : OUT_8_Pin */
  GPIO_InitStruct.Pin = OUT_8_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
  HAL_GPIO_Init(OUT_8_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : SW_4067_S0_Pin SW_4067_S1_Pin SW_4067_S2_Pin SW_4067_S3_Pin */
  GPIO_InitStruct.Pin = SW_4067_S0_Pin|SW_4067_S1_Pin|SW_4067_S2_Pin|SW_4067_S3_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 2 */

/* USER CODE END 2 */
