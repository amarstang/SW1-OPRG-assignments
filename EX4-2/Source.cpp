#pragma comment(lib, "RaspberryPI.lib")
#include <stdio.h>
#include <stdlib.h>
#include <RaspberryDLL.h>
#include <conio.h>

#include "TrafficLightControl.h"


int main(void)
{
	//Makes the raspberry pie work
	if (!Open())
	{
		printf("Error with connection\n");
		exit(1);
	}

	printf("Connected to Raspberry Pi\n");
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