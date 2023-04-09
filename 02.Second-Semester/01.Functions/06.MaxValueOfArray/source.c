#include<stdio.h>

int findMaxValue(int numbers[5]);

int main()
{
    int numbers[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }
    
    printf("Max value of array is %d.", findMaxValue(numbers));
}

int findMaxValue(int numbers[5])
{
    int maxValue = numbers[0];

    for (int i = 1; i < 5; i++)
    {
        if (numbers[i] > maxValue)
        {
            maxValue = numbers[i];
        }
        
    }

    return maxValue;
}