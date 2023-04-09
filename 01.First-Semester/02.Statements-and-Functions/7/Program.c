#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() 
{
	double pricePerNight;
	int nights;
	int isStudent;

	scanf("%lf %d %d", &pricePerNight, &nights, &isStudent);

	double finalPrice = nights * pricePerNight;

	if (isStudent == 1)
	{
		if (nights == 2)
		{
			finalPrice -= 10;
		}
		else if (nights == 3)
		{
			finalPrice -= 30;
		}
	}

	printf("Final price = %.2lf", finalPrice);
}