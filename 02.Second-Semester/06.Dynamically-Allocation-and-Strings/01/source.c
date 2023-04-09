#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* numbers = malloc(sizeof(int));

    *numbers = 10;

    numbers = (int*) realloc(numbers, 3 * sizeof(int));

    *(numbers + 1) = 20;
    *(numbers + 2) = 30;

    for (int i = 0; i < 3; i++)
    {
        printf("%d ", *(numbers + i));
    }
    
    free(numbers);
}