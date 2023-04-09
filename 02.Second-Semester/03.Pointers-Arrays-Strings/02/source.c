#include<stdio.h>

void print_array(int n, int array[]);
void print_pointers(int* start, int* end);

void swap_array(int array[], int firstIndex, int secondIndex);
void swap_pointers(int* first, int* second);

void reverse_array(int n, int array[]);
void reverse_pointers(int* start, int* end);

int main()
{
    int array[] = { 1, 2, 3, 4, 5 };

    int n = sizeof array / sizeof *array;

    reverse_array(n, array);
    print_array(n, array);

    printf("\n");

    reverse_pointers(array, array + n);
    print_pointers(array, array + n);
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

void swap_array(int array[], int firstIndex, int secondIndex)
{
    int temp = array[firstIndex];
    array[firstIndex] = array[secondIndex];
    array[secondIndex] = temp;
}

void swap_pointers(int* first, int* second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}

void reverse_array(int n, int array[])
{
    for (int i = 0; i < n / 2; i++)
    {
        swap_array(array, i, n - 1 - i);
    }
}

void reverse_pointers(int* start, int* end)
{
    if (end < start)
    {
        return;
    }
    
    end--;

    while (start < end)
    {
        swap_pointers(start++, end--);
    }
    
}