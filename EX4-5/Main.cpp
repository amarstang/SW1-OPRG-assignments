#include <stdio.h>
#include <stdlib.h>

#include "LightControler.h"

int main(void)
{
	if (!Open())
	{
		printf("Error with connection\n");
		exit(1);
	}

	printf("Connected to Raspberry Pi\n");
	// To do your code


	ThermometerLightControl();
	



	return 0;
}