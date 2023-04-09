#define _CRT_SECURE_NO_WARNINGS
#include <limits.h>
#include <stdio.h>

int main()
{
	int a[] = { -3, 5, 41, 22, 6 };

	int maxNumber = INT_MIN;
	int maxNumberIndex = 0;

	for (int i = 0; i < 5; i++)
	{
		if (a[i] > maxNumber)
		{
			maxNumber = a[i];
			maxNumberIndex = i;
		}
	}

	printf("Biggest number is %d and index is %d.", maxNumber, maxNumberIndex);
}