#include "bsp_motor.h"
#include "bsp_GeneralTim.h"
#include "stm32f10x_tim.h"


#define throttle_max 20
#define throttle_min 10

void Left_Motor(u16 speed) //speedȡֵ0-1000
{
	
	speed = (throttle_max - throttle_min) * speed / 100 + throttle_min;
	LC_CHG(speed);   //FΪ��Ƶ�� CΪռ�ձ� ��F=2000��Cȡֵ0-1000
}

void Right_Motor(u16 speed) //speedȡֵ0-1000
{
	
	speed = (throttle_max - throttle_min) * speed / 100 + throttle_min;
	RC_CHG(speed);
}

//**********************************************************************************************
//							ռ�ձȵ���
//**********************************************************************************************

/*����������ռ�ձȵ�������������TIM3��*/
void LC_CHG(u16 ChannelPulse)   //FΪ��Ƶ�� CΪռ�ձ� ��F=2000��Cȡֵ0-1000
{
	TIM_OCInitTypeDef TIM_OCInitStructure;
	TIM_OCInitStructure.TIM_Pulse = ChannelPulse;
	TIM_OC1Init(GENERAL_TIM, &TIM_OCInitStructure);
	TIM_OC1PreloadConfig(GENERAL_TIM, TIM_OCPreload_Enable);
}
void RC_CHG(u16 ChannelPulse)   //FΪ��Ƶ�� CΪռ�ձ� ��F=2000��C=0.5
{
	TIM_OCInitTypeDef TIM_OCInitStructure;
	TIM_OCInitStructure.TIM_Pulse = ChannelPulse;
	TIM_OC2Init(GENERAL_TIM, &TIM_OCInitStructure);
	TIM_OC2PreloadConfig(GENERAL_TIM, TIM_OCPreload_Enable);
}