#include<stdio.h>

void readNumber(int* numberAddress);
void resetNumbers_Which_End_With_Five_Array(int array[], int n);
void resetNumbers_Which_End_With_Five_Pointers(int* array, int n);

int main()
{
    int a[10];
    
    for (int i = 0; i < 10; i++)
    {
        readNumber(&a[i]);
    }

    resetNumbers_Which_End_With_Five_Pointers(a, 10);

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
}

void readNumber(int* numberAddress)
{
    scanf("%d", numberAddress);
}

void resetNumbers_Which_End_With_Five_Array(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 10 == 5)
        {
            array[i] = 0;
        }
    }
}

void resetNumbers_Which_End_With_Five_Pointers(int* array, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (*(array + i) % 10 == 5)
        {
            *(array + i) = 0;
        }
    }
}