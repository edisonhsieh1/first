/**
  ******************************************************************************
  * @file    led.c
  * @author  edison
  * @version V1.0
  * @date    2019-1-17
  * @brief   io设置函数
  ******************************************************************************
  * @attention
  *
  * 实验平台:STM32 zet6开发板 
  * 
  * 
  *
  ******************************************************************************
  */
  
/* Includes ------------------------------------------------------------------*/

#include "led.h"

/* Function & define----------------------------------------------------------*/

#define GPIO_ALL_Init(GPIO,GPIO_Pin,GPIO_Mode) _GPIO_ALL_Init(GPIO,GPIO_Pin,GPIO_Mode,GPIO_Speed_50MHz)//默认速度为50MHz
void _GPIO_ALL_Init(char GPIO,uint16_t GPIO_Pin,GPIOMode_TypeDef GPIO_Mode,GPIOSpeed_TypeDef GPIO_Speed);//初始设置IO

/* Init ----------------------------------------------------------------------*/

void LED_Init(void)
{
	GPIO_ALL_Init('B',GPIO_Pin_0,GPIO_Mode_Out_PP);
	GPIO_ALL_Init('F',GPIO_Pin_7|GPIO_Pin_8,GPIO_Mode_Out_PP);
}

/* sys Function & define------------------------------------------------------*/
 /**
  * @brief  IO初始化
  * @note   输入对应引脚与模式，速度
			GPIO_Mode_AIN = 0x0,
			GPIO_Mode_IN_FLOATING = 0x04,
			GPIO_Mode_IPD = 0x28,
			GPIO_Mode_IPU = 0x48,
			GPIO_Mode_Out_OD = 0x14,
			GPIO_Mode_Out_PP = 0x10,
			GPIO_Mode_AF_OD = 0x1C,
			GPIO_Mode_AF_PP = 0x18

			GPIO_Speed_10MHz = 1,
			GPIO_Speed_2MHz, 
			GPIO_Speed_50MHz
  * @param  None
  * @retval None
  */
void GPIOA_Init(uint16_t GPIO_Pin,GPIOMode_TypeDef GPIO_Mode,GPIOSpeed_TypeDef GPIO_Speed)
{

	GPIO_InitTypeDef  GPIO_InitStructure;

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);	 //使能端口时钟

	GPIO_InitStructure.GPIO_Pin = GPIO_Pin;			         //端口配置
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode; 		         //推挽输出
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed;		 //IO口速度为50MHz
	GPIO_Init(GPIOA, &GPIO_InitStructure);
}

void GPIOB_Init(uint16_t GPIO_Pin,GPIOMode_TypeDef GPIO_Mode,GPIOSpeed_TypeDef GPIO_Speed)
{
	GPIO_InitTypeDef  GPIO_InitStructure;

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);	 //使能端口时钟

	GPIO_InitStructure.GPIO_Pin = GPIO_Pin;			         //端口配置
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode; 		         //推挽输出
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed;		 //IO口速度为50MHz
	GPIO_Init(GPIOB, &GPIO_InitStructure);
}
void GPIOC_Init(uint16_t GPIO_Pin,GPIOMode_TypeDef GPIO_Mode,GPIOSpeed_TypeDef GPIO_Speed)
{

	GPIO_InitTypeDef  GPIO_InitStructure;

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);	 //使能端口时钟

	GPIO_InitStructure.GPIO_Pin = GPIO_Pin;			         //端口配置
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode; 		         //推挽输出
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed;		 //IO口速度为50MHz
	GPIO_Init(GPIOC, &GPIO_InitStructure);
}
void GPIOD_Init(uint16_t GPIO_Pin,GPIOMode_TypeDef GPIO_Mode,GPIOSpeed_TypeDef GPIO_Speed)
{

	GPIO_InitTypeDef  GPIO_InitStructure;

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD, ENABLE);	 //使能端口时钟

	GPIO_InitStructure.GPIO_Pin = GPIO_Pin;			         //端口配置
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode; 		         //推挽输出
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed;		 //IO口速度为50MHz
	GPIO_Init(GPIOD, &GPIO_InitStructure);
}
void GPIOE_Init(uint16_t GPIO_Pin,GPIOMode_TypeDef GPIO_Mode,GPIOSpeed_TypeDef GPIO_Speed)
{

	GPIO_InitTypeDef  GPIO_InitStructure;

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOE, ENABLE);	 //使能端口时钟

	GPIO_InitStructure.GPIO_Pin = GPIO_Pin;			         //端口配置
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode; 		         //推挽输出
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed;		 //IO口速度为50MHz
	GPIO_Init(GPIOE, &GPIO_InitStructure);
}
void GPIOF_Init(uint16_t GPIO_Pin,GPIOMode_TypeDef GPIO_Mode,GPIOSpeed_TypeDef GPIO_Speed)
{
	GPIO_InitTypeDef  GPIO_InitStructure;

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOF, ENABLE);	 //使能端口时钟

	GPIO_InitStructure.GPIO_Pin = GPIO_Pin;			         //端口配置
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode; 		         //推挽输出
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed;		 //IO口速度为50MHz
	GPIO_Init(GPIOF, &GPIO_InitStructure);
}
void GPIOG_Init(uint16_t GPIO_Pin,GPIOMode_TypeDef GPIO_Mode,GPIOSpeed_TypeDef GPIO_Speed)
{
	GPIO_InitTypeDef  GPIO_InitStructure;

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOG, ENABLE);	 //使能端口时钟

	GPIO_InitStructure.GPIO_Pin = GPIO_Pin;			         //端口配置
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode; 		         //推挽输出
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed;		 //IO口速度为50MHz
	GPIO_Init(GPIOG, &GPIO_InitStructure);
}

 /**
  * @brief  所有IO初始化
  * @note   输入对应引脚与模式，速度，同意配置io口可同时配置
			GPIO_Mode_AIN = 0x0,
			GPIO_Mode_IN_FLOATING = 0x04,
			GPIO_Mode_IPD = 0x28,
			GPIO_Mode_IPU = 0x48,
			GPIO_Mode_Out_OD = 0x14,
			GPIO_Mode_Out_PP = 0x10,
			GPIO_Mode_AF_OD = 0x1C,
			GPIO_Mode_AF_PP = 0x18

			GPIO_Speed_10MHz = 1,
			GPIO_Speed_2MHz, 
			GPIO_Speed_50MHz 
  * @param  None
  * @retval None
  */
void _GPIO_ALL_Init(char GPIO,uint16_t GPIO_Pin,GPIOMode_TypeDef GPIO_Mode,GPIOSpeed_TypeDef GPIO_Speed)
{
	switch(GPIO)
	{
		case 'A':GPIOA_Init(GPIO_Pin,GPIO_Mode,GPIO_Speed);break;
		case 'B':GPIOB_Init(GPIO_Pin,GPIO_Mode,GPIO_Speed);break;
		case 'C':GPIOC_Init(GPIO_Pin,GPIO_Mode,GPIO_Speed);break;
		case 'D':GPIOD_Init(GPIO_Pin,GPIO_Mode,GPIO_Speed);break;
		case 'E':GPIOE_Init(GPIO_Pin,GPIO_Mode,GPIO_Speed);break;
		case 'F':GPIOF_Init(GPIO_Pin,GPIO_Mode,GPIO_Speed);break;
		case 'G':GPIOG_Init(GPIO_Pin,GPIO_Mode,GPIO_Speed);break;
	}
}
/*********************************************END OF FILE**********************/
