#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[10];
	int b[10];

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		b[i] = a[i];
	}

	printf("B = ");

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", b[i]);
	}
}