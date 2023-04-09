#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	int n;

	printf("n = ");
	scanf("%d", &n);

	float result = 0;

	for (int i = 1; i <= n; i++)
	{
		result += sqrt(i);
	}

	printf("Result = %f", result);
}