#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int isDevideBy5(int a);

int main()
{
	int a;

	printf("a = ");
	scanf("%d", &a);

	int expression = a + ((a * 2) + 3);

	int result = isDevideBy5(expression);

	if (result == 1)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
}

int isDevideBy5(int a)
{
	if (a % 5 == 0)
	{
		return 1;
	}

	return 0;
}