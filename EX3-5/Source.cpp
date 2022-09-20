#pragma comment(lib, "RaspberryPI.lib")
#include <stdio.h>
#include <stdlib.h>
#include <RaspberryDLL.h>
#include <conio.h>


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

int main(void)
{
	if (!Open())
	{
		printf("Error with connection\n");
		exit(1);
	}

	printf("Connected to Raspberry Pi\n");

	char trafficState;
	bool firstRunCase2 = true;

	printf("\n\nWhat mode do you want: Daytime 1, Evening/Weekend 2, Shutdown 3\nPress the Corosponding number and enter: ");

	_kbhit();
	trafficState = _getch();

	while (trafficState == '3') {
		firstRunCase2 = true;

		switch (trafficState) {

		case '1':
			while (!_kbhit()) {
				RedLightTransition(2000);
				Wait(5000);
				GreenLightTransition(2000);
				Wait(5000);
			}
			trafficState = _getch();
			break;

		case '2':
			while (!_kbhit()) {

				if (firstRunCase2 == true) {
					RedLightTransition(0);
					GreenLightTransition(0);
					firstRunCase2 = false;
				}


				if (keyPressed(2) == true || getIntensity() <= 50) {
					RedLightTransition(2000);
					Wait(5000);
					GreenLightTransition(2000);
				}
			}
			trafficState = _getch();
			break;

		case '3': //should only need to turn LED 4 off, but if the case changes mid way It could be wiered
			ledOff(4);
			ledOff(5);
			ledOff(6);
			return 0;

		default:
			printf_s("You made a mistake, trying to press: 1, 2 or 3\nTry again: ");
			_kbhit();
			trafficState = _getch();
			break;
		}
	}



	return 0;
}