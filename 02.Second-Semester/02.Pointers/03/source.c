#include<stdio.h>

#define N 4

int main()
{
    int a[N];

    int* pointer;

    for (pointer = a; pointer < a + N; pointer++)
    {
        scanf("%d", pointer);
    }

    printf("Reverse: ");

    for (pointer = a + N - 1; pointer >= a; pointer--)
    {
        printf("%d ", *pointer);
    }
}