#ifndef __OLED_H
#define __OLED_H

#include "stm32f10x.h"
//OLED程序在主函数的使用
//int main()
//{
// 
//	OLED_Init();
//	OLED_Clear();
//  OLED_ShowString(0,0,"u = 0.00");
//	while(1)
//	{  // OLED_ShowString(0,0,"u = 0.00");
//		OLED_ShowNum(32,0,1,1,16);            //??   ??   ??   ??
//        OLED_ShowNum(48,0,2,1,16);
//        OLED_ShowNum(56,0,3,1,16);
//        delay(10);
//    
//	}
//  
//return 0;
//}
#define uint unsigned int 
#define uchar unsigned char

#define 	Max_Column							128
#define 	SIZE 								16


//PB7
#define 	SCL_HIGH							GPIO_SetBits(GPIOB,GPIO_Pin_7)					//SCL???
#define 	SCL_LOW							GPIO_ResetBits(GPIOB,GPIO_Pin_7)					//SCL???
#define	SCL_OUT						     GPIO_InitStruct.GPIO_Mode=GPIO_Mode_Out_PP			//SCL?????
//PB6
#define 	SI_HIGH							GPIO_SetBits(GPIOB,GPIO_Pin_6)					//SI???
#define 	SI_LOW							GPIO_ResetBits(GPIOB,GPIO_Pin_6)			//SL???
#define	SI_OUT						     GPIO_InitStruct.GPIO_Mode=GPIO_Mode_Out_PP			//SI?????
//PB5
#define 	RES_HIGH							GPIO_SetBits(GPIOB,GPIO_Pin_5)					//RES???
#define 	RES_LOW							GPIO_ResetBits(GPIOB,GPIO_Pin_5)       			//RES???
#define	RES_OUT						     GPIO_InitStruct.GPIO_Mode=GPIO_Mode_Out_PP			//RES?????
//PD2
#define   DC_HIGH							GPIO_SetBits(GPIOD,GPIO_Pin_2)					//DC???
#define   DC_LOW							GPIO_ResetBits(GPIOD,GPIO_Pin_2)					//DC???
#define 	DC_OUT							GPIO_InitStruct.GPIO_Mode=GPIO_Mode_Out_PP		//DC?????
//PC12
#define	CS_HIGH						     GPIO_SetBits(GPIOC,GPIO_Pin_12)					//CS???
#define	CS_LOW						     GPIO_ResetBits(GPIOC,GPIO_Pin_12)			//CS???
#define 	CS_OUT							GPIO_InitStruct.GPIO_Mode=GPIO_Mode_Out_PP				//CS?????

#define 	OLED_DATA							1  						//写数据
#define 	OLED_CMD							0						//写命令
				
void GPIO_OLED(void);
void delay(uint ms);
void OLED_Write_Byte(uint byte, uint dc);
void OLED_Clear(void);
void OLED_Set_Pos(uint column,uint page);
void OLED_Display_On(void);
void OLED_Display_Off(void);
void OLED_ShowChar(uint x,uint y,uint chr);
unsigned long oled_pow(uint m,uint n);
void OLED_ShowNum(uchar x,uchar y,unsigned long num,uchar len,uchar size);
void OLED_ShowString(uchar x,uchar y,uchar *chr);
void OLED_Init(void);

#endif



