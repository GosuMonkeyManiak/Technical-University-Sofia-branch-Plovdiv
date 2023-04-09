#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void readArray(int* arr, int rows, int cols);
int geMostRepeatedElement(int* arr, int rows, int cols);

int main()
{
	int a[7][2];

	readArray(a, 7, 2);
	int mostRepeatedElement = geMostRepeatedElement(a, 7, 2);

	printf("Most repeated number is %d.", mostRepeatedElement);
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

int geMostRepeatedElement(int* arr, int rows, int cols)
{
	int ones = 0;
	int twoes = 0;
	int threes = 0;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			int currentElement = *(arr + (i * cols) + j);

			if (currentElement == 1)
			{
				ones++;
			}
			else if (currentElement == 2)
			{
				twoes++;
			}
			else if (currentElement == 3)
			{
				threes++;
			}
		}
	}

	
	if (ones > twoes && ones > threes)
	{
		return 1;
	}
	else if (twoes > ones && twoes > threes)
	{
		return 2;
	}
	else
	{
		return 3;
	}
}