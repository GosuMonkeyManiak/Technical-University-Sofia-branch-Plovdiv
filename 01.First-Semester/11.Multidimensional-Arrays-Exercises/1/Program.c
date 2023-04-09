#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void readArray(int* arr, int rows, int cols);
void printArray(int* arr, int rows, int cols);
int getRowNumberWithBiggersOnes(int* arr, int rows, int cols);
int getRowNumberWithBiggersZeroes(int* arr, int rows, int cols);

int main()
{
    int arr[3][3];

    readArray(arr, 3, 3);
    printArray(arr, 3, 3);

    int maxOnesIndex = getRowNumberWithBiggersOnes(arr, 3, 3);
    int maxZeroesIndex = getRowNumberWithBiggersZeroes(arr, 3, 3);

    printf("Max ones is in row %d.\n", maxOnesIndex);
    printf("Max zeroes is in row %d.", maxZeroesIndex);
}

void readArray(int* arr, int rows, int cols)
{
    int currentNumber;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &currentNumber);

            if (currentNumber != 1 && currentNumber != 0)
            {
                while (1)
                {
                    scanf("%d", &currentNumber);

                    if (currentNumber == 1 || currentNumber == 0)
                    {
                        break;
                    }
                }
            }

            *(arr + (i * cols) + j) = currentNumber;
        }
    }
}

void printArray(int* arr, int rows, int cols)
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

int getRowNumberWithBiggersOnes(int* arr, int rows, int cols)
{
    int maxOnes = -1;
    int currentCount = -1;
    int rowIndex = -1;

    for (int i = 0; i < rows; i++)
    {
        currentCount = 0;

        for (int j = 0; j < cols; j++)
        {
            if (*(arr + (i * cols) + j) == 1)
            {
                currentCount++;
            }
        }

        if (currentCount > maxOnes)
        {
            maxOnes = currentCount;
            rowIndex = i;
        }
    }

    return rowIndex;
}

int getRowNumberWithBiggersZeroes(int* arr, int rows, int cols)
{
    int maxZeroes = -1;
    int currentCount = -1;
    int rowIndex = -1;

    for (int i = 0; i < rows; i++)
    {
        currentCount = 0;

        for (int j = 0; j < cols; j++)
        {
            if (*(arr + (i * cols) + j) == 0)
            {
                currentCount++;
            }
        }

        if (currentCount > maxZeroes)
        {
            maxZeroes = currentCount;
            rowIndex = i;
        }
    }

    return rowIndex;
}