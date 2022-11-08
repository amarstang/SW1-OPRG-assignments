#pragma comment(lib, "RaspberryPI.lib")
#include <stdio.h>
#include <stdlib.h>
#include <RaspberryDLL.h>

//Determens if the car door is locked
int checkKey1();

//Checkes if the door is open (on = open, off = closed)
//int checkSwitch();

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

	int lockedDoor = 0;


	while (true) {
		while (keyPressed == 0) {
			if (lockedDoor == 0) {
				alarmOffLed();
			}
			else if (switchOn() == 1 && lockedDoor == 1 || checkFotoSensor() >= 30 && lockedDoor == 1) {
				alarmTriggeredled();
			}
			else if (switchOn() == 0 && checkFotoSensor() < 30 && lockedDoor == 1) {
				alarmOnLed();
			}
		}
		lockedDoor = checkKey1(lockedDoor);
	}
	return 0;
}

void alarmOffLed() {
	ledOff(5);
	Wait(500);
	ledOn(5);
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

int checkFotoSensor() {
	return getIntensity();
}


int checkKey1(int key) {
	if (1){
		return 0;
	}
	else {
		return 1;
	}
}

//int checkSwitch() {
//	return switchOn();
//}