#pragma comment(lib, "RaspberryPI.lib")
#include <stdio.h>
#include <stdlib.h>
#include <RaspberryDLL.h>

void printValues(double temp[],int light[]);

#define WaitTimeMS 5000
#define ArrSize 60000/WaitTimeMS

int main(void)
{
	if (!Open()) { printf("Error with connection\n"); exit(1); }

	int lightArr[ArrSize];
	double tempArr[ArrSize];
	int minuteCounter = 1;

	while (true) {

		for (int i = 0; i <= ArrSize; i++){
			lightArr[i] = getIntensity();
			tempArr[i] = getTemperature();
			Wait(WaitTimeMS);
		}
		printf_s("%d\n", minuteCounter);
		printValues(tempArr, lightArr);
		minuteCounter++;
	}
	return 0;
}


void printValues(double temp[], int light[]) {
	for (int i = 0; i <= ArrSize; i++){
		printf_s("light: %d | temp: %f\n", light[i], temp[i]);
	}
	printf_s("\n");

}
