//Header file
#include "LightControler.h"


//bool temp22 = false;
//bool temp23 = false;
//bool temp27 = false;
int temp = 0;

//Leds: Red 6, Yellow 5, Green 1-4
void TurnOffLeds() {
	//if (temp22) {
	//	ledOff(3);
	//}
	//
	//if (temp23) {
	//	ledOff(3);
	//	ledOff(4);
	//}
	//
	//if (temp27) {
	//	for (int i = 1; i <= 6; i++){
	//		ledOff(i);
	//	}
	//}

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
	while (!_kbhit) {

		//From temp 22 (with) below 23 Celcius. Light green diode 
		if (getTemperature() >= 22 && getTemperature() < 23 && temp != 1) {
			TurnOffLeds();
			temp = 1;
			//temp22 = true;
			ledOn(3);
		}

		//From temp 23 (with) below 27 Celcius. Light green diode 
		if (getTemperature() >= 23 && getTemperature() < 27 && temp != 2) {
			TurnOffLeds();
			temp = 2;
			//temp23 = true;
			ledOn(3);
			ledOn(4);
		}

		//Temp above 27 Celcius. Light all 6 diodes 
		if (getTemperature() >= 27 && temp != 3) {
			TurnOffLeds();
			temp = 3;
			//temp27 = true;
			
			for (int i = 1; i <= 6; i++) {
				ledOn(i);
			}
		}


		Wait(1000);
	}
	return;
}

