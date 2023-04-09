#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() 
{
	int a, b;

	scanf("%d", &a);

	if (a <= 0)
	{
		b = a * a + 2 * a + a * a * a;
	}
	else if (a <= 6)
	{
		b = 1 + 5 * a * a;
	}
	else
	{
		b = 4 * a;
	}

	printf("B = %d", b);
}