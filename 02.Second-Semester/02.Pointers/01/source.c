#include<stdio.h>

int main()
{
    int number = 10;
    int* pointer = &number;

    printf("Address of variable is %p and value is %d", pointer, *pointer);
}