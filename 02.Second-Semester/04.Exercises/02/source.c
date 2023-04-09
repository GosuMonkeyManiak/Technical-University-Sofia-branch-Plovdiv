#include<stdio.h>

void readNumber(int* numberAddress);
int findEven_Numbers_array(int array[], int n);
int findEven_Numbers_pointers(int* array, int n);

int main()
{
    int a[10];
    
    for (int i = 0; i < 10; i++)
    {
        readNumber(&a[i]);
    }

    int evenNumbers = findEven_Numbers_array(a, 10);
    
    printf("Even number with array - %d.\n", evenNumbers);
    
    evenNumbers = findEven_Numbers_pointers(a, 10);
    
    printf("Even number with pointers - %d.\n", evenNumbers);
}

void readNumber(int* numberAddress)
{
    scanf("%d", numberAddress);
}

int findEven_Numbers_array(int array[], int n)
{
    int evenNumbers = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            evenNumbers++;
        }
    }
    
    return evenNumbers;
}

int findEven_Numbers_pointers(int* array, int n)
{
    int evenNumbers = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (*(array + i) % 2 == 0)
        {
            evenNumbers++;
        }
    }
    
    return evenNumbers;
}