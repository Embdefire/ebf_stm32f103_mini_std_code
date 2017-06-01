#ifndef __BEEP_H
#define	__BEEP_H


#include "stm32f10x.h"


/* ������������ӵ�GPIO�˿�, �û�ֻ��Ҫ�޸�����Ĵ��뼴�ɸı���Ƶķ��������� */
#define MOTOR_GPIO_PORT    	GPIOB			              /* GPIO�˿� */
#define MOTOR_GPIO_CLK 	    RCC_APB2Periph_GPIOB		/* GPIO�˿�ʱ�� */
#define MOTOR_GPIO_PIN		  GPIO_Pin_8			        /* ���ӵ���������GPIO */

/* �ߵ�ƽʱ���������� */
#define ON  1
#define OFF 0

/* ���κ꣬��������������һ��ʹ�� */
#define MOTOR(a)	if (a)	\
					GPIO_SetBits(MOTOR_GPIO_PORT,MOTOR_GPIO_PIN);\
					else		\
					GPIO_ResetBits(MOTOR_GPIO_PORT,MOTOR_GPIO_PIN)
					

/* ֱ�Ӳ����Ĵ����ķ�������IO */
#define digitalHi(p,i)			{p->BSRRL=i;}			  //����Ϊ�ߵ�ƽ		
#define digitalLo(p,i)			{p->BSRRH=i;}				//����͵�ƽ
#define digitalToggle(p,i)	{p->ODR ^=i;}			//�����ת״̬


/* �������IO�ĺ� */
#define MOTOR_TOGGLE		digitalToggle(MOTOR_GPIO_PORT,BEEP_GPIO_PIN)
#define MOTOR_OFF				digitalLo(MOTOR_GPIO_PORT,BEEP_GPIO_PIN)
#define MOTOR_ON				digitalHi(MOTOR_GPIO_PORT,BEEP_GPIO_PIN)

void Motor_GPIO_Config(void);
					
#endif /* __BEEP_H */
