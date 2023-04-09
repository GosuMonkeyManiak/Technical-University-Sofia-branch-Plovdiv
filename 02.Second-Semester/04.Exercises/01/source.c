#include<stdio.h>

void readNumber(int* numberAddress);

int main()
{
    int a[10];
    
    for (int i = 0; i < 10; i++)
    {
        readNumber(&a[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    
}

void readNumber(int* numberAddress)
{
    scanf("%d", numberAddress);
}