#include <stdio.h>
#include <stdlib.h>

void readNumbers(int* arr, int n);
void printfArray(int* arr, int n);

int main()
{
    int n;

    printf("n = ");
    scanf("%d", &n);

    int* numbers = (int*) malloc(n * sizeof(int));

    printf("Enter numbers: ");
    readNumbers(numbers, n);

    printf("Numbers: ");
    printfArray(numbers, n);
    
    printf("\nnew n = ");
    scanf("%d", &n);

    numbers = (int*) realloc(numbers, n * sizeof(int));

    printf("Enter new numbers: ");
    readNumbers(numbers, n);

    printf("New numbers: ");
    printfArray(numbers, n);

    free(numbers);
}

void readNumbers(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }
}

void printfArray(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
    
}