#include<stdio.h>

void add_array(int n, int array[], int x);
void add_pointers(int* begin, int* end, int x);
void print_array(int n, int array[]);
void print_pointers(int* start, int* end);

int main()
{
    int array[] = { 1, 2, 3, 4, 5 };

    int n = sizeof array / sizeof *array;

    add_array(n, array, 2);
    print_array(n, array);

    printf("\n");

    add_pointers(array, array + n, -2);
    print_pointers(array, array + n);
}

void add_array(int n, int array[], int x)
{
    for (int i = 0; i < n; i++)
    { 
        array[i] += x; 
    }
}

void add_pointers(int* begin, int* end, int x)
{
    for (int* ip = begin; ip < end; ip++)
    { 
        *ip += x;
    }
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