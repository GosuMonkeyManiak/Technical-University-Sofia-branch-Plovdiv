#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int calculateY(int x);

int main()
{
	int x, y;
	
	printf("X = ");
	scanf("%d", &x);
	
	y = calculateY(x);
	
	printf("Y = %d", y);
}

int calculateY(int x)
{
	int y;
	
	if (x <= 1)
	{
		y = x * 2 + 4 * x;
	}
	else if (x <= 4) 
	{
		y = 3 * x * 2;
	}
	else
	{
		y = 2 * x + 3;
	}
	
	return y;
}