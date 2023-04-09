#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int getBiggerThan(int a);

int main()
{
	int a;
	
	printf("a = ");
	scanf("%d", &a);
	
	int biggerNumber = getBiggerThan(a);
	
	printf("Result = %d", biggerNumber);
}

int getBiggerThan(int a)
{
	int isFound = 0;
	int foundNumber = 0;
	
	int first = 0;
	int second = 1;
	
	while(1)
	{
		int sum = first + second;
		
		if (sum > a)
		{
			isFound = 1;
			foundNumber = sum;
			break;
		}
		
		first = second;
		second = sum;
	}
	
	if (isFound == 1)
	{
		return foundNumber;
	}
}