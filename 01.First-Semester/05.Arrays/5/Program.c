#define _CRT_SECURE_NO_WARNINGS
#include <limits.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int n;

	printf("n = ");
	scanf("%d", &n);

	int* a = (int*)calloc(n, sizeof(int));

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	int minNumber = INT_MAX;

	for (int i = 0; i < n; i++)
	{
		if (a[i] < minNumber)
		{
			minNumber = a[i];
		}
	}

	printf("Smallest number is %d.", minNumber);

	free(a);
}