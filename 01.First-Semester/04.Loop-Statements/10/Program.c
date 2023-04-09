#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n;

	printf("n = ");
	scanf("%d", &n);

	if (n <= 0)
	{
		printf("Incorrect input.");
		return 0;
	}

	if (n == 1 || n == 2)
	{
		printf("Fibonacci of %d is equal to %d.", n, 1);
		return 0;
	}

	int first = 1;
	int second = 1;
	int fibonaciiResult;

	for (int i = 3; i <= n; i++)
	{
		fibonaciiResult = first + second;

		first = second;
		second = fibonaciiResult;
	}

	printf("Fibonacci of %d is equal to %d.", n, fibonaciiResult);
}