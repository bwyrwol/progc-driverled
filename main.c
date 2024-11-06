#include "inc\main.h"

void main(void)
{
	//led_init();
	//led_set(0x55);

	//led_on(LED0);	

	while(1)
	{
		//uint8_t tmp = led_get();
		//tmp ^= 0xFF;
		//led_set(tmp);

		_delay_ms(200);

		led_rotate_left();
	}
}
