#include <stdio.h>

int main()
{
    int number;
    int ones = 0;
    
    scanf("%d", &number);
    
    for (int i = 0; i < sizeof(int) * 8; i++)
    {
        if (number & (1 << i))
        {
            ones++;
        }
    }
    
    printf("Bits: %d", ones);
}