#define GPBCON (volatile unsigned long*)0x56000010
#define GPBDAT (volatile unsigned long*)0x56000014

void led_init()
{
     *(GPBCON) = 0x15400;
}

void led_on()
{
    *(GPBDAT) = 0x6BF;
}

void led_off()
{
    *(GPBDAT) = 0x7FF;
}

    