#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int sum(int a, int b);

int main() 
{
	int a, b;
	
	printf("a = ");
	scanf("%d", &a);
	
	printf("b = ");
	scanf("%d", &b);
	
	int sumValue = sum(a, b);
	
	printf("Sum = %d", sumValue);		
}

int sum(int a, int b)
{
	int sum = a + b;
	return sum;
}