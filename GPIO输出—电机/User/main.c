/**
  ******************************************************************************
  * @file    main.c
  * @author  fire
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   ���Ե綯��
  ******************************************************************************
  * @attention
  *
  * ʵ��ƽ̨:���� IOT STM32 ������ 
  * ��̳    :http://www.firebbs.cn
  * �Ա�    :http://fire-stm32.taobao.com  *
  ******************************************************************************
  */ 
	
#include "stm32f10x.h"
#include "./motor/bsp_motor.h"   

void Delay(__IO u32 nCount); 

/**
  * @brief  ������
  * @param  ��  
  * @retval ��
  */
int main(void)
{	
	/* MOTOR GPIO ��ʼ�� */
	Motor_GPIO_Config();	
	
	while(1)
	{		
		MOTOR( ON ); 			  // ��
		Delay(0x0FFFFFF);	
		MOTOR( OFF );		  // ����
		Delay(0x0FFFFFF);
	}
}

void Delay(__IO uint32_t nCount)	 //�򵥵���ʱ����
{
	for(; nCount != 0; nCount--);
}
/*********************************************END OF FILE**********************/
