#include<stdio.h>

void print_array(int n, int array[]);
void print_pointers(int* start, int* end);

int sum_array(int n, int array[]);
int sum_pointers(int n, int* array);

int main()
{
    int array[] = { 1, 2, 3, 4, 5 };

    int n = sizeof array / sizeof *array;

    printf("Sum with array - %d\n", sum_array(n, array));
    printf("Sum with pointers - %d\n", sum_pointers(n, array));
}

void print_array(int n, int array[])
{
    printf("Printing with array in function - ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}

void print_pointers(int* start, int* end)
{
    printf("Printing with pointers in function - ");

    for (int* i = start; i < end; i++)
    {
        printf("%d ", *i);    
    }
}

int sum_array(int n, int array[])
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    
    return sum;
}

int sum_pointers(int n, int* array)
{
    int sum = 0;

    for (int* i = array; i < array + n; i++)
    {
        sum += *i;
    }
    
    return sum;
}