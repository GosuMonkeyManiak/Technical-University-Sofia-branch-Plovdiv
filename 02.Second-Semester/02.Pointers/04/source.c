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

    int sum = 0;

    for (pointer = a; pointer < a + N; pointer++)
    {
        sum += *pointer;
    }

    printf("Sum of all elements is %d.", sum);
}