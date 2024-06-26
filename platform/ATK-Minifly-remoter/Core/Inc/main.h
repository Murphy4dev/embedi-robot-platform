/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
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
#include "stm32f1xx_hal.h"

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
#define NRF_INT_Pin GPIO_PIN_13
#define NRF_INT_GPIO_Port GPIOC
#define NRF_INT_EXTI_IRQn EXTI15_10_IRQn
#define KEY_R_INT_Pin GPIO_PIN_15
#define KEY_R_INT_GPIO_Port GPIOC
#define KEY_R_INT_EXTI_IRQn EXTI15_10_IRQn
#define VBAT_ADC_Pin GPIO_PIN_0
#define VBAT_ADC_GPIO_Port GPIOA
#define JST1_ROLL_ADC_Pin GPIO_PIN_1
#define JST1_ROLL_ADC_GPIO_Port GPIOA
#define JST1_PITCH_ADC_Pin GPIO_PIN_2
#define JST1_PITCH_ADC_GPIO_Port GPIOA
#define CE_Pin GPIO_PIN_3
#define CE_GPIO_Port GPIOA
#define CSN_Pin GPIO_PIN_4
#define CSN_GPIO_Port GPIOA
#define JST2_ROLL_ADC_Pin GPIO_PIN_0
#define JST2_ROLL_ADC_GPIO_Port GPIOB
#define JST2_PITCH_ADC_Pin GPIO_PIN_1
#define JST2_PITCH_ADC_GPIO_Port GPIOB
#define KEY_L_INT_Pin GPIO_PIN_11
#define KEY_L_INT_GPIO_Port GPIOB
#define KEY_L_INT_EXTI_IRQn EXTI15_10_IRQn
#define LED0_Pin GPIO_PIN_7
#define LED0_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
