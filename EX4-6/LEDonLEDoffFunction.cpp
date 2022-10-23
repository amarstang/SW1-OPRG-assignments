#include "LEDControler.h"

#include <conio.h>

void LightControl();
void LEDTurnOn(int);




void LEDTurnOn(int value) {
	switch (value) {

	case 0:
		exit(0);
		break;

	case 1:
		ledOn(value);
		break;

	case 2:
		ledOn(value);
		break;

	case 3:
		ledOn(value);
		break;
			  
	case 4:	  
		ledOn(value);
		break;
			  
	case 5:	  
		ledOn(value);
		break;
			  
	case 6:	  
		ledOn(value);
		break;


	default:
		break;
	}
}

void LightControl() {

	LEDTurnOn(_getch());



	char trafficState;
	trafficState = _getch();



	do{
		






	} while (!_kbhit());

	

	switch (trafficState) {
		 



	default:
		break;
	}



}


char Iteration2WeekendMode() {
	do {

		if (keyPressed(2) == true || getIntensity() <= 50) {
			RedLightTransition(1000);
			Wait(2000);
			GreenLightTransition(1000);
		}

		if (_kbhit())
			break;


	} while (!_kbhit());

	return _getch();
}

