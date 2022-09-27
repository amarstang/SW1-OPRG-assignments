#pragma comment(lib, "RaspberryPI.lib")
#include <stdio.h>
#include <stdlib.h>
#include <RaspberryDLL.h>

//Red -> Red & Yellow -> Green -> Yellow -> Red
//Led 4 Green, 5 Yellow, 6 Red.

//Green->Yellow->Red
void RedLightTransition() { 
	//Turns off green then turns on yellow and waits
	ledOff(4);	//Green	 Off
	ledOn(5);	//Yellow On
	Wait(2000);	//Waits int value ms time

	ledOff(5);	//Yellow	Off
	ledOn(6);	//Red		On
	Wait(2000);	
}

//Red -> Red & Yellow -> Green
void GreenLightTransition() {
	ledOn(5);	//Yellow	On
	Wait(2000);

	ledOff(6);	//Red		Off
	ledOff(5);	//Yellow	Off
	ledOn(4);	//Green		On
	Wait(2000);
}

int main(void)
{
	if (!Open())
	{
		printf("Error with connection\n");
		exit(1);
	}

	printf("Connected to Raspberry Pi\n");
	
	do { //Do while loop: Extra for testing
		RedLightTransition();
		Wait(3000);
		GreenLightTransition();
		Wait(3000);
	} while (1);


	return 0;
}