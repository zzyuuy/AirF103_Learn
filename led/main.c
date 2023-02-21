#include <stdio.h>

void GPIO_init(void)
{
	GPIO_InitTypeDef GPIO_init;
	RCC_APB2PeriphClockCmd(RCC_APB2Peripg_GPIOB, ENABLE);

	GPIO_init.GPIO_Pin = GPIO_Pin_2;
	GPIO_init.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_init.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_Init(GPIOB, &GPIO_init);
}

int main(void)
{
	GPIO_init();
	while(1){
		GPIO_SetBits(GPIOB,GPIO_Pin_2);
	}
}
