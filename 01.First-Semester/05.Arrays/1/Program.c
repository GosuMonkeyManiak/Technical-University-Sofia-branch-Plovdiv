#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int numbers[10];

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &numbers[i]);
	}

	printf("Numbers = ");

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", numbers[i]);
	}
}
