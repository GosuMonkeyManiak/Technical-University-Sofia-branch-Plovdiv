#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void readArray(int* arr, int rows, int cols);
int findSumOnPrimaryDiagonal(int* arr, int rows, int cols);

int main()
{
	int a[5][5];

	readArray(a, 5, 5);

	int primaryDiagonalSum = findSumOnPrimaryDiagonal(a, 5, 5);

	printf("Sum on primary diagonal is %d.", primaryDiagonalSum);
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

int findSumOnPrimaryDiagonal(int* arr, int rows, int cols)
{
	int sum = 0;

	for (int i = 0; i < rows; i++)
	{
		sum += *(arr + (i * cols) + i);
	}

	return sum;
}