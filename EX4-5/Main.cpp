#include <stdlib.h>

#include "LightControler.h"

int main(void)
{
	if (!Open())
	{
		printf("Error with connection\n");
		exit(1);
	}



	ThermometerLightControl();
	



	return 0;
}