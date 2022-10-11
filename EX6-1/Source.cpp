#pragma comment(lib, "RaspberryPI.lib")
#include <stdio.h>
#include <stdlib.h>
#include <RaspberryDLL.h>

void printValues(double temp[],int light[]);


int main(void)
{
	if (!Open()) { printf("Error with connection\n"); exit(1); }

	int lightArr[12];
	double tempArr[12];


	while (true) {

		for (int i = 0; i < 12; i++){
			lightArr[i] = getIntensity();
			tempArr[i] = getTemperature();
			Wait(5000);
		}
		printValues(tempArr, lightArr);
	}


	return 0;
}


void printValues(double temp[], int light[]) {
	size_t n = sizeof(light) / sizeof(light[0]);

	for (int i = 0; i < n; i++){
		printf_s("light: %d | temp: %f", light[i], temp[i]);
	}
}
