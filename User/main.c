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
  * @brief  主函数
  * @param  无
  * @retval 无
  */
int main ( void )
{
	/* 初始化 */
		USARTx_Config ();                                                              //初始化串口1
		LED_Init ();
		GENERAL_TIM_Init();

	  printf("READY\r\n");
	
	
		while ( 1 );
	
	
}


/*********************************************END OF FILE**********************/
