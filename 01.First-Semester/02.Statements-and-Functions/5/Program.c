#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	double x, y;

	scanf("%lf %lf", &x, &y);

	if (x > 0 && y > 0)
	{
		printf("First");
	}
	else if (x > 0 && y < 0)
	{
		printf("Fourth");
	}
	else if (x < 0 && y > 0)
	{
		printf("Second");
	}
	else
	{
		printf("Third");
	}
}