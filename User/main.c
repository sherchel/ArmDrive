/**
  ******************************************************************************
  * @file    main.c
  * @author
  * @version 
  * @date    
  * @brief  
  ******************************************************************************
  */ 
 
#include "stm32f10x.h"
#include "AP_INIT.h"


/**
  * @brief  ������
  * @param  ��
  * @retval ��
  */
int main ( void )
{
	/* ��ʼ�� */
		USARTx_Config ();                                                              //��ʼ������1
		LED_Init ();
		GENERAL_TIM_Init();

	  printf("READY\r\n");
	
	
		while ( 1 );
	
	
}


/*********************************************END OF FILE**********************/
