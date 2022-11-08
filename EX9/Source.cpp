#pragma comment(lib, "RaspberryPI.lib")
#include <stdio.h>
#include <stdlib.h>
#include <RaspberryDLL.h>

//Determens if the car door is locked
int checkKey1();

//Checks the fotosensor gives int 0-100
int checkFotoSensor();

//Controels the LEDs. LED 6 red and LED 5 green
void alarmOnLed();
void alarmOffLed();
void alarmTriggeredled();


int main(void) {
	if (!Open()){
		printf("Error with connection\n");
		exit(1);
	}

	bool carLockState = false;

	while (true){
		while (keyPressed(1) == 0) { //While the key is not pressed. 0 = pressed, 1 = not pressed
			printf_s("%d \n", carLockState);
			if (carLockState == false) {
				alarmOffLed();
			}
			else if (carLockState == true && switchOn() == 0 && getIntensity() >= 60) { //SwitchO: 0 = On, 1 = Off... fotosensor gives int 0-100 as %
				alarmOnLed();
			}
			else {
				alarmTriggeredled();
			}
		}
		carLockState = !carLockState;
		Wait(1000);
	}
	return 0;
}

void alarmOffLed() {
	for (int i = 5; i >= 3; i--) {
		ledOn(i);
	}

	Wait(1000);

	for (int i = 5; i >= 3; i--) {
		ledOff(i);
	}
}

void alarmOnLed() {
	ledOn(6);
	ledOn(5);
	Wait(300);
	ledOff(6);
	ledOff(5);
}

void alarmTriggeredled() {
	for (int i = 1; i <= 5; i++){
		ledOn(i);
	}
	for (int i = 1; i <= 5; i++) {
		ledOff(i);
	}
}