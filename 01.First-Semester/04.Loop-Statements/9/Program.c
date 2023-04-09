#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n;

	printf("n = ");
	scanf("%d", &n);

	unsigned long long factorial = 1;

	for (int i = 1; i <= n; i++)
	{
		factorial *= i;
	}

	printf("Factorial of %d is equal to %llu", n, factorial);
}