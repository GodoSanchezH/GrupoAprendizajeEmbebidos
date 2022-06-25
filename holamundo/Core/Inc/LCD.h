/*
 * LCD.h
 *
 *  Created on: Jun 18, 2022
 *      Author: HP
 */

#ifndef INC_LCD_H_
#define INC_LCD_H_

#include "main.h"
#include "stm32f1xx_hal.h"
#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>



#define E_ON    HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_SET);
#define E_OFF   HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, GPIO_PIN_RESET);

#define RS_ON   HAL_GPIO_WritePin(RS_GPIO_Port, RS_Pin, GPIO_PIN_SET);
#define RS_OFF  HAL_GPIO_WritePin(RS_GPIO_Port, RS_Pin, GPIO_PIN_RESET);

#define D4_ON   HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, GPIO_PIN_SET);
#define D4_OFF  HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, GPIO_PIN_RESET);

#define D5_ON   HAL_GPIO_WritePin(D5_GPIO_Port, D5_Pin, GPIO_PIN_SET);
#define D5_OFF  HAL_GPIO_WritePin(D5_GPIO_Port, D5_Pin, GPIO_PIN_RESET);

#define D6_ON   HAL_GPIO_WritePin(D6_GPIO_Port, D6_Pin, GPIO_PIN_SET);
#define D6_OFF   HAL_GPIO_WritePin(D6_GPIO_Port,D6_Pin, GPIO_PIN_RESET);

#define D7_ON   HAL_GPIO_WritePin(D7_GPIO_Port, D7_Pin, GPIO_PIN_SET);
#define D7_OFF   HAL_GPIO_WritePin(D7_GPIO_Port, D7_Pin, GPIO_PIN_RESET);

typedef enum{
    FILA1 = 1,
    FILA2,
    FILA3 ,
    FILA4
}Ubicacion;

void LCD_STM32_Cmd(uint8_t a);
void LCD_STM32_DataBus(uint8_t a);
void LCD_STM32_Init(void);
void LCD_STM32_SetCursor(uint8_t x , uint8_t y);
void LCD_STM32_Print_Char(char a);
void LCD_STM32_Print_String(char *a);
void LCD_STM32_New_Char(uint8_t a,uint8_t b,uint8_t c,uint8_t d,uint8_t e,uint8_t f,uint8_t g,uint8_t h,uint8_t i);
void LCD_STM32_Write_New_Char(uint8_t a);
void LCD_STM32_Clear(void);
void LCD_STM32_Home(void);


#endif /* INC_LCD_H_ */
