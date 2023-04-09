#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int start, end;

	printf("start = ");
	scanf("%d", &start);

	printf("end = ");
	scanf("%d", &end);

	for (int i = start; i <= end; i++)
	{
		if (i % 10 != 0)
		{
			continue;
		}

		printf("%d\n", i);
	}
}