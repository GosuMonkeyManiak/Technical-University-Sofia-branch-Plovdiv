#include<stdio.h>

int main()
{
    int number = 6;

    printf("Old value is %d.\n", number);

    int* pointer = &number;
    *pointer = 10;

    printf("New value is %d.", number);
}