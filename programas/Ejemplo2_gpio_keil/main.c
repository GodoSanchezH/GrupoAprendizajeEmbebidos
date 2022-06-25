
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include "stm32f10x.h"                  // Device header

uint32_t i;
int main(void){

  //habilitacion del clock del puerto b
  RCC->APB2ENR |= (1<<3);

  //configuracion gpio output ,pushpull , 2mhz

  GPIOB->CRH |= (1<<25);
  GPIOB->CRH &=~(1<<24) &~(1<<26) &~(1<<27);

	
	//habailitar clock en el puerto A
	  RCC->APB2ENR |= (1<<2);
	
	//configuramos entrada
	GPIOA->CRH |= (1<<31);
  GPIOA->CRH &=~(1<<29) &~(1<<28) &~(1<<30);
	

for(;;){

	if((GPIOA->IDR & (1<<15))==0){
	
	  GPIOB->ODR |=(1<<14);
	}else{ GPIOB->ODR &= ~(1<<14); }
	
  //GPIOB->ODR ^=(1<<4);
	//for(i=0;i<=99999;i++);

	/**
	Fosc = 8MHZ
	Fcy = 8mhz
	Tcy = 1/Fcy=0.125uS
	
	*/
}

}