#include <wiringPi.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int main(void){
	if(wiringPiSetup() == -1) {
		printf("It fucked");
		exit(1);
	}
	pinMode(1, PWM_OUTPUT);
	pwmSetMode(PWM_MODE_MS);
	pwmSetClock(1920);
	pwmSetRange(900);
	pwmWrite(1,30);
		
}
