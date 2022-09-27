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

char Iteration1DayMode(){
	do { //Do while loop: Extra for testing

		RedLightTransition(1000);
		Wait(3000);
		GreenLightTransition(1000);
		Wait(3000);

	} while (!_kbhit());

	return _getch();
}

char Iteration2WeekendMode(){
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




int main(void)
{
	//Makes the raspberry pie work
	if (!Open())
		exit(1);
	//the magic

	printf_s("What mode do you want: Daytime 1, Evening/Weekend 2, Shutdown 3\nPress the Corosponding number and enter: ");

InvalidInput://For invalid inputs *(not needed)

	char trafficState;
	trafficState = _getch();

	do
	{
		system("cls");
		printf("What mode do you want: Daytime 1, Evening/Weekend 2, Shutdown 3\n");

		switch (trafficState) {
		case '1':
			printf_s("\nCurrently: Day mode\nPress the 1, 2 or 3 to change: ");
			trafficState = Iteration1DayMode();
			break;

		case '2':
			printf_s("\nCurrently: Weekend mode\nPress the 1, 2 or 3 to change: ");
			trafficState = Iteration2WeekendMode();
			break;

		case '3':
			ledOff(5);
			ledOff(6);
			ledOff(4);
			return 0;

		default://For invalid inputs *(not needed)
			printf_s("You made a mistake, trying to press: 1, 2 or 3\nTry again: ");
			goto InvalidInput; //to get out of the while loop and reset the variables
		}
			
	} while (true);
	return 0;
}