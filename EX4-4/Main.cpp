#pragma comment(lib, "RaspberryPI.lib")
#include <stdio.h>
#include <stdlib.h>
#include <RaspberryDLL.h>

#include "BlinkControler.h"

int main(void)
{
	if (!Open()) {
		printf("Error with connection\n");exit(1);
	}

	void BlinkSequence1();

	void BlinkSequence2();


	return 0;
}