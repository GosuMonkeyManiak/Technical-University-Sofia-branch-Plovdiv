#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[15];

	for (int i = 0; i < 15; i++)
	{
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < 15; i++)
	{
		if (a[i] % 2 == 0)
		{
			printf("Index %d number %d\n", i, a[i]);
		}
	}
}