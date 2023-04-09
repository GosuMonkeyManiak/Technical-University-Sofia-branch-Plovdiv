#include<stdio.h>

int main()
{
    int a[] = {4, 5, 8, 9, 8, 1, 0, 1, 9, 3};

    int numbersBeforeZero = 0;

    for (int i = 0; i < 10; i++)
    {
        if (a[i] == 0)
        {
            break;
        }
        
        numbersBeforeZero++;
    }
    
    printf("Numbers before zero is %d.", numbersBeforeZero);
}