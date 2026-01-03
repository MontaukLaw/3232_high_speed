/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
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

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32g4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_W_Pin GPIO_PIN_13
#define LED_W_GPIO_Port GPIOC
#define SW_4067_1_EN_Pin GPIO_PIN_14
#define SW_4067_1_EN_GPIO_Port GPIOC
#define SW_4067_2_EN_Pin GPIO_PIN_15
#define SW_4067_2_EN_GPIO_Port GPIOC
#define OUT_1_Pin GPIO_PIN_0
#define OUT_1_GPIO_Port GPIOC
#define OUT_2_Pin GPIO_PIN_1
#define OUT_2_GPIO_Port GPIOC
#define OUT_3_Pin GPIO_PIN_2
#define OUT_3_GPIO_Port GPIOC
#define OUT_4_Pin GPIO_PIN_3
#define OUT_4_GPIO_Port GPIOC
#define OUT_5_Pin GPIO_PIN_0
#define OUT_5_GPIO_Port GPIOA
#define OUT_6_Pin GPIO_PIN_1
#define OUT_6_GPIO_Port GPIOA
#define OUT_7_Pin GPIO_PIN_2
#define OUT_7_GPIO_Port GPIOA
#define OUT_13_Pin GPIO_PIN_3
#define OUT_13_GPIO_Port GPIOA
#define OUT_14_Pin GPIO_PIN_4
#define OUT_14_GPIO_Port GPIOA
#define OUT_15_Pin GPIO_PIN_5
#define OUT_15_GPIO_Port GPIOA
#define OUT_16_Pin GPIO_PIN_6
#define OUT_16_GPIO_Port GPIOA
#define OUT_17_Pin GPIO_PIN_7
#define OUT_17_GPIO_Port GPIOA
#define OUT_18_Pin GPIO_PIN_4
#define OUT_18_GPIO_Port GPIOC
#define OUT_19_Pin GPIO_PIN_5
#define OUT_19_GPIO_Port GPIOC
#define OUT_20_Pin GPIO_PIN_0
#define OUT_20_GPIO_Port GPIOB
#define OUT_21_Pin GPIO_PIN_1
#define OUT_21_GPIO_Port GPIOB
#define OUT_22_Pin GPIO_PIN_2
#define OUT_22_GPIO_Port GPIOB
#define OUT_23_Pin GPIO_PIN_10
#define OUT_23_GPIO_Port GPIOB
#define OUT_24_Pin GPIO_PIN_12
#define OUT_24_GPIO_Port GPIOB
#define OUT_25_Pin GPIO_PIN_13
#define OUT_25_GPIO_Port GPIOB
#define OUT_26_Pin GPIO_PIN_14
#define OUT_26_GPIO_Port GPIOB
#define OUT_27_Pin GPIO_PIN_15
#define OUT_27_GPIO_Port GPIOB
#define OUT_28_Pin GPIO_PIN_6
#define OUT_28_GPIO_Port GPIOC
#define OUT_29_Pin GPIO_PIN_7
#define OUT_29_GPIO_Port GPIOC
#define OUT_30_Pin GPIO_PIN_8
#define OUT_30_GPIO_Port GPIOC
#define OUT_31_Pin GPIO_PIN_9
#define OUT_31_GPIO_Port GPIOC
#define OUT_32_Pin GPIO_PIN_8
#define OUT_32_GPIO_Port GPIOA
#define OUT_12_Pin GPIO_PIN_15
#define OUT_12_GPIO_Port GPIOA
#define OUT_11_Pin GPIO_PIN_10
#define OUT_11_GPIO_Port GPIOC
#define OUT_10_Pin GPIO_PIN_11
#define OUT_10_GPIO_Port GPIOC
#define OUT_9_Pin GPIO_PIN_12
#define OUT_9_GPIO_Port GPIOC
#define OUT_8_Pin GPIO_PIN_2
#define OUT_8_GPIO_Port GPIOD
#define SW_4067_S0_Pin GPIO_PIN_5
#define SW_4067_S0_GPIO_Port GPIOB
#define SW_4067_S1_Pin GPIO_PIN_6
#define SW_4067_S1_GPIO_Port GPIOB
#define SW_4067_S2_Pin GPIO_PIN_7
#define SW_4067_S2_GPIO_Port GPIOB
#define SW_4067_S3_Pin GPIO_PIN_9
#define SW_4067_S3_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
