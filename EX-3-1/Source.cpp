//Written by Niels Jakob
//Software Teknologi 1 semester
//Date 2022/9/14 (yyyy/mm/dd)


//Danish
//Opret et nyt Visual Studio projekt (Solution Name: �Exercise3� � Project Name:
//�For - loop�).Skriv heri et lille program der udskriver alle lige tal fra 50 til 2 i faldende
//r�kkef�lge � alts� 50 48 46 ......6 4 2. Du skal(selvf�lgelig) bruge en for - l�kke.


#include <stdio.h>

int main(void) {
	
	for (int i = 50; i >= 2; i--)
	{
		if (i % 2 == 0) {
			printf_s("%d\n", i);
		}
	}


	return 0;
}