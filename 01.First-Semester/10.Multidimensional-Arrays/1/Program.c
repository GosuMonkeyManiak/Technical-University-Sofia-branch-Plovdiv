#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

int findRowWithBiggestSum(int* arr, int rows, int cols);
int* findIndexOfSmallestElement(int* arr, int rows, int cols);

int main()
{
	int a[5][3];

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	int rowIndexWithMaxSum = findRowWithBiggestSum(a, 5, 3);
	int* smallestElementIndex = findIndexOfSmallestElement(a, 5, 3);

	printf("Row with max sum is %d.\n", rowIndexWithMaxSum);
	printf("Smallest element is at index [%d][%d].", *smallestElementIndex, *(smallestElementIndex + 1));
}

int findRowWithBiggestSum(int* arr, int rows, int cols)
{
	int maxSum = 0;
	int maxSumRowIndex = -1;

	for (int i = 0; i < rows; i++)
	{
		int currentSum = 0;

		for (int j = 0; j < cols; j++)
		{
			currentSum += *((arr + (i * cols)) + j);
		}

		if (currentSum > maxSum)
		{
			maxSum = currentSum;
			maxSumRowIndex = i;
		}
	}

	return maxSumRowIndex;
}

int* findIndexOfSmallestElement(int* arr, int rows, int cols)
{
	int min = INT_MAX;
	int* index = calloc(2, sizeof(int));

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			int currentElement = *(arr + (i * cols) + j);

			if (currentElement < min)
			{
				min = currentElement;
				*index = i;
				*(index + 1) = j;
			}
		}
	}

	return index;
}