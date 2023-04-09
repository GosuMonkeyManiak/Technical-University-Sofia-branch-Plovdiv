#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int canBeTriangle(int a, int b, int c);

int main()
{
	int a, b, c;

	printf("a = ");
	scanf("%d", &a);

	printf("b = ");
	scanf("%d", &b);

	printf("c = ");
	scanf("%d", &c);

	int tries = 1;
	int doWeHaveTriangle = canBeTriangle(a, b, c);

	while (tries < 3 && doWeHaveTriangle == 0)
	{
		printf("a = ");
		scanf("%d", &a);

		printf("b = ");
		scanf("%d", &b);

		printf("c = ");
		scanf("%d", &c);

		tries++;
		doWeHaveTriangle = canBeTriangle(a, b, c);
	}

	if (doWeHaveTriangle == 0)
	{
		printf("Try again later.");
	}
	else
	{
		printf("You have a correct triangle sizes.");
	}
}

int canBeTriangle(int a, int b, int c)
{
	int aAndB = (a * a) + (b * b);

	if (aAndB == c * c)
	{
		return 1;
	}

	return 0;
}