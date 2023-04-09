#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n;
	
	printf("N = ");
	scanf("%d", &n);
	
	float sum = 0;
	
	for (int i = 1; i <= n; i++)
	{
		sum += 1.0 / i;
	}
	
	printf("Sum = %.2lf", sum);
}