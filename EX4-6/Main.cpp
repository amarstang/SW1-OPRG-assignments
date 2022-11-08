#pragma comment(lib, "RaspberryPI.lib")
#include <RaspberryDLL.h>
#include <stdio.h>
#include <stdlib.h>

#include <conio.h>

int main(void)
{

	int number;
	int ledOnNumber = 0;

	if (!Open())
	{
		printf_s("Error with connection\n");
		exit(1);
	}

	printf_s("Connected to Raspberry Pi\n");

	while (1){
		//gets ASCII value of user input
		number = _getch();

		//turns off led
		ledOff(ledOnNumber);

		if (number == 48) {
			ledOff(ledOnNumber);
			exit(1);
		}

		//Takes the given ASCII value 0 = 48, 1 = 49... 6 = 55. - 48 to get the number
		ledOnNumber = number - 48;
		
		//Attemps to turn on led number ledOnNumber
		ledOn(ledOnNumber);
	}

	return 0;
}