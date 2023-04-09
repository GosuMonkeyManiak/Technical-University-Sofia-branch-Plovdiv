#include<stdio.h>

void counter(int* numberPointer)
{
    *numberPointer += 1;
}

int main()
{
    int currentNumber = 1;

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", currentNumber);
        counter(&currentNumber);
    }
    
}