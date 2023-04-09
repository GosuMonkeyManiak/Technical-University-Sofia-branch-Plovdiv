#include<stdio.h>

void readNumber(int* numberAddress);
int findOddNumberInInterval_Array(int array[], int n);
int findOddNumberInInterval_Pointers(int* array, int n);
void printArray(int array[], int n);

int main()
{
    int a[10];
    
    for (int i = 0; i < 10; i++)
    {
        readNumber(&a[i]);
    }

    int min = findOddNumberInInterval_Pointers(a, 10);
    
    printf("min = %d\n", min);

    printArray(a, 10);
}

void readNumber(int* numberAddress)
{
    scanf("%d", numberAddress);
}

int findOddNumberInInterval_Array(int array[], int n)
{
    int min = array[0];
    
    for (int i = 1; i < n; i++)
    {
        if (array[i] % 2 != 0 && array[i] > 10 && array[i] < 30)
        {
            if (min > array[i])
            {
                min = array[i];
            }
        }
    }
    
    return min;
}

int findOddNumberInInterval_Pointers(int* array, int n)
{
    int min = *array;
    
    for (int i = 1; i < n; i++)
    {
        int currentElement = *(array + i);
        
        if (currentElement % 2 != 0 && currentElement > 10 && currentElement < 30)
        {
            if (min > currentElement)
            {
                min = currentElement;
            }
        }
    }
    
    return min;
}

void printArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}