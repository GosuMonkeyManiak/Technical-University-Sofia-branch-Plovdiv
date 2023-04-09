#include <stdio.h>
#include <stdlib.h>

int* sumOfCols(int arr[10][10]);
void printSums(int* arr);

int main()
{
    int arr[10][10];

    for (int row = 0; row < 10; row++)
    {
        for (int col = 0; col < 10; col++)
        {
            if (row == col)
            {
                arr[row][col] = 1;
            }
            else
            {
                arr[row][col] = 2;
            }
        }
    }


    arr[0][9] = 5;
    arr[9][0] = 7;

    for (int row = 0; row < 10; row++)
    {
        for (int col = 0; col < 10; col++)
        {
            printf("%d ", arr[row][col]);
        }
        
        printf("\n");
    }

    int* sums = sumOfCols(arr);

    printSums(sums);

    free(sums);
}

int* sumOfCols(int arr[10][10])
{
    int* sums = calloc(10, sizeof(int));
    int sumIndex = 0;

    for (int col = 0; col < 10; col++)
    {
        int currentSum = 0;

        for (int row = 0; row < 10; row++)
        {
            currentSum += arr[row][col];
        }
        
        sums[sumIndex] = currentSum;
        sumIndex++;
    }

    return sums;
}

void printSums(int* arr)
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(arr + i));
    }
}