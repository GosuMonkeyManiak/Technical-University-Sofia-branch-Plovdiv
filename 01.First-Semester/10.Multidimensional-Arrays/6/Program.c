#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void readArray(int* arr, int rows, int cols);
void printByRows(int* arr, int rows, int cols);
void printByCols(int* arr, int rows, int cols);
int* changeRowsWithCols(int* arr, int rows, int cols);

int main()
{
	int row, col;

	scanf("%d", &row);
	scanf("%d", &col);

	int* arr = calloc(row * col, sizeof(int));

	readArray(arr, row, col);

	printf("By rows:\n");
	printByRows(arr, row, col);

	printf("By cols:\n");
	printByCols(arr, row, col);

	int* newArr = changeRowsWithCols(arr, row, col);

	printf("Changed rows with cols:\n");
	printByRows(newArr, col, row);

	free(arr);
	free(newArr);
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

void printByRows(int* arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf("%d ", *(arr + (i * cols) + j));
		}

		printf("\n");
	}
}

void printByCols(int* arr, int rows, int cols)
{
	for (int i = 0; i < cols; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			printf("%d ", *(arr + i + (j * cols)));
		}

		printf("\n");
	}
}

int* changeRowsWithCols(int* arr, int rows, int cols)
{
	if (rows == cols)
	{
		for (int i = 0; i < rows - 1; i++)
		{
			for (int j = 1 + i; j < cols; j++)
			{
				int temp = *(arr + (i * cols) + j);
				*(arr + (i * cols) + j) = *(arr + i + (j * cols));
				*(arr + i + (j * cols)) = temp;
			}
		}

		return arr;
	}

	int* newArr = calloc(rows * cols, sizeof(int));

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			*(newArr + i + (j * rows)) = *(arr + (i * cols) + j);
		}
	}

	return newArr;
}