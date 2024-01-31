#include <reg51.h>
	
sbit LED1 = P1^0;
sbit LED2 = P1^1;
sbit LED3 = P1^2;
sbit LED4 = P1^3;
sbit LED5 = P1^4;
sbit LED6 = P1^5;
sbit LED7 = P1^6;
sbit LED8 = P1^7;

void delay(unsigned int time) {
    unsigned int i, j;
    for(i = 0; i < time; i++)
        for(j = 0; j < 1275; j++);  
}

void main() {
    while(1) {
       
        LED1 = 1;
        delay(100);
        LED1 = 0;

        LED2 = 1;
        delay(100);
        LED2 = 0;

        LED3 = 1;
        delay(100);
        LED3 = 0;

        LED4 = 1;
        delay(100);
        LED4 = 0;

        LED5 = 1;
        delay(100);
        LED5 = 0;

        LED6 = 1;
        delay(100);
        LED6 = 0;

        LED7 = 1;
        delay(100);
        LED7 = 0;

        LED8 = 1;
        delay(100);
        LED8 = 0;
    }
}