#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	float x, y;
	
	printf("X = ");
	scanf("%f", &x);
	
	printf("Y = ");
	scanf("%f", &y);
	
	
	// I - x+ y+
	//II - x- y+
	//III - x- y-
	//IV - y- x+
	
	if (x > 0 && y > 0 )
	{
		goto first;
	}
	else if (x < 0 && y > 0)
	{
		goto second;
	}
	else if (x < 0 && y < 0)
	{
		goto third;
	}
	else if (x > 0 && y < 0) 
	{
		goto forth;
	}
	
	
	first: 
		printf("first");
		return 0;
		
	second: 
		printf("second");
		return 0;
		
	third: 
		printf("third");
		return 0;
	
	forth: 
		printf("forth");
}
