#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void readArray(int* arr, int rows, int cols);
void change5with7col(int* arr, int rows, int cols);
void printArray(int* arr, int rows, int cols);

int main()
{
    int arr[3][7];

    readArray(arr, 3, 7);

    change5with7col(arr, 3, 7);

    printArray(arr, 3, 7);
}

void readArray(int* arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", (arr + (i * cols) + j));
        }
    }
}

void change5with7col(int* arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        int temp = *(arr + (i * cols) + 4);
        *(arr + (i * cols) + 4) = *(arr + (i * cols) + 6);
        *(arr + (i * cols) + 6) = temp;
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
