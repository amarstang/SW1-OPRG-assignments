//Libraries
#pragma comment(lib, "RaspberryPI.lib")
#include <RaspberryDLL.h>

//Header files
#include "BlinkControler.h"

void TurnOffLeds(int WaitMs) {
	for (int i = 1; i <= 6; i++) {
		ledOff(i);
		Wait(WaitMs);
	}
}

void BlinkSequence1() {
	for (int i = 1; i <= 6; i++) {
		ledOn(i);
		Wait(400);
	}
	TurnOffLeds(400);
}

void BlinkSequence2() {
	for (int i = 6; i > 3; i--) {
		ledOn(i);
		Wait(800);
	}
	for (int i = 1; i <= 3; i++) {
		ledOn(i);
		Wait(800);
	}
	TurnOffLeds(800);
}