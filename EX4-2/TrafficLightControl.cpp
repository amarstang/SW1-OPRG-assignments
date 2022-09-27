#pragma comment(lib, "RaspberryPI.lib")
#include <RaspberryDLL.h>
#include <conio.h>


#include "TrafficLightControl.h"


//Red -> Red & Yellow -> Green -> Yellow -> Red
//Led 4 Green, 5 Yellow, 6 Red.

//Green->Yellow->Red
void RedLightTransition(int waitTime) {
	//Turns off green then turns on yellow and waits
	ledOff(4);	//Green	 Off
	ledOn(5);	//Yellow On
	Wait(waitTime);	//Waits int value ms time

	ledOff(5);	//Yellow	Off
	ledOn(6);	//Red		On
	Wait(waitTime);
}

//Red -> Red & Yellow -> Green
void GreenLightTransition(int waitTime) {
	ledOn(5);	//Yellow	On
	Wait(waitTime);

	ledOff(6);	//Red		Off
	ledOff(5);	//Yellow	Off
	ledOn(4);	//Green		On
	Wait(waitTime);
}

char Iteration1DayMode() {
	do { //Do while loop: Extra for testing

		RedLightTransition(1000);
		Wait(3000);
		GreenLightTransition(1000);
		Wait(3000);

	} while (!_kbhit());

	return _getch();
}

char Iteration2WeekendMode() {
	do {
		GreenLightTransition(1000);

		if (keyPressed(2) == true || getIntensity() <= 50) {//Want getIntensity() to be low, as it means a object is between the sensor and light source
			RedLightTransition(1000);
			Wait(2000);
			GreenLightTransition(1000);
		}

		if (_kbhit())
			break;


	} while (!_kbhit());

	return _getch();
}