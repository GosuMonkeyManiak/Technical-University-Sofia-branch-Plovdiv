#include<stdio.h>
#include<limits.h>

void print_array(int n, int array[]);
void print_pointers(int* start, int* end);

int maxElement_array(int n, int array[]);
int maxElement_pointers(int n, int* array);

int main()
{
    int array[] = { 1, 2, 3, 4, 5 };

    int n = sizeof array / sizeof *array;

    printf("Max with array - %d\n", maxElement_array(n, array));
    printf("Max with pointers - %d\n", maxElement_pointers(n, array));
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

int maxElement_array(int n, int array[])
{
    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }

    return max;
}

int maxElement_pointers(int n, int* array)
{
    int max = INT_MIN;

    for (int* i = array; i < array + n; i++)
    {
        if (*i > max)
        {
            max = *i;
        }
    }
    
    return max;
}