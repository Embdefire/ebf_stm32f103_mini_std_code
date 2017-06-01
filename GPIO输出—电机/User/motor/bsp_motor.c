/**
  ******************************************************************************
  * @file    bsp_motor.c
  * @author  fire
  * @version V3.0
  * @date    2015-xx-xx
  * @brief   �綯��Ӧ�ú����ӿ�
  ******************************************************************************
  * @attention
  *
  * ʵ��ƽ̨:���� IOT STM32 ������ 
  * ��̳    :http://www.firebbs.cn
  * �Ա�    :http://fire-stm32.taobao.com
  *
  ******************************************************************************
  */
  
#include "./motor/bsp_motor.h"   

 /**
  * @brief  ��ʼ�����Ƶ綯����IO
  * @param  ��
  * @retval ��
  */
void Motor_GPIO_Config(void)
{		
		/*����һ��GPIO_InitTypeDef���͵Ľṹ��*/
		GPIO_InitTypeDef GPIO_InitStructure;

		/*�������Ƶ綯����GPIO�Ķ˿�ʱ��*/
		RCC_APB2PeriphClockCmd( MOTOR_GPIO_CLK, ENABLE); 

		/*ѡ��Ҫ���Ƶ綯����GPIO*/															   
		GPIO_InitStructure.GPIO_Pin = MOTOR_GPIO_PIN;	

		/*����GPIOģʽΪͨ���������*/
		GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;   

		/*����GPIO����Ϊ50MHz */   
		GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz; 

		/*���ÿ⺯������ʼ�����Ʒ�������GPIO*/
		GPIO_Init(MOTOR_GPIO_PORT, &GPIO_InitStructure);			 
    
    /* �رյ綯��*/
		GPIO_ResetBits(MOTOR_GPIO_PORT, MOTOR_GPIO_PIN);	 
}
/*********************************************END OF FILE**********************/
