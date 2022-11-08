//Header file
#include "LightControler.h"


//Leds: Red 6, Yellow 5, Green 1-4
void TurnOffLeds(int temp) {

	switch (temp)
	{
	case 1:
		ledOff(3);
		break;

	case 2:
		ledOff(3);
		ledOff(4);
		break;

	case 3:
		for (int i = 1; i <= 6; i++) {
			ledOff(i);
		}
		break;

	default:
		//Should never get here
		break;
	}
}


void ThermometerLightControl() {
	while (_kbhit) {

		//From temp 22 (with) below 23 Celcius. Light green diode 
		if (getTemperature() >= 22 && getTemperature() < 23) {
			TurnOffLeds(1);


			ledOn(3);
		}

		//From temp 23 (with) below 27 Celcius. Light green diode 
		if (getTemperature() >= 23 && getTemperature() < 27) {
			TurnOffLeds(2);


			ledOn(3);
			ledOn(4);
		}

		//Temp above 27 Celcius. Light all 6 diodes 
		if (getTemperature() >= 27) {
			TurnOffLeds(3);


			
			for (int i = 1; i <= 6; i++) {
				ledOn(i);
			}
		}

		//prints out the temp in the terminal
		printf_s("%f\n", getTemperature());
		Wait(1000);
	}
	return;
}

