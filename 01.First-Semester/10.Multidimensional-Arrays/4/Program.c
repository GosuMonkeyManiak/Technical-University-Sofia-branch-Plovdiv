#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void readArray(int* arr, int rows, int cols);

int main()
{
	int a[3][4];
	int b[3][4];

	int c[3][4];

	readArray(a, 3, 4);
	readArray(b, 3, 4);

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			c[i][j] = a[i][j] * b[i][j];
		}
	}
}

void readArray(int* arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			scanf("%d", arr + (i * cols) + j);
		}
	}
}