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
	
	int result = canBeTriangle(a, b, c);
	
	if (result == 1)
	{
		printf("Yes");
	}
	else 
	{
		printf("No");	
	}
}

int canBeTriangle(int a, int b, int c)
{
	int sumAandB = (a * a) + (b * b);
	
	if (sumAandB == (c * c))
	{
		return 1;
	}
	
	return 0;
}