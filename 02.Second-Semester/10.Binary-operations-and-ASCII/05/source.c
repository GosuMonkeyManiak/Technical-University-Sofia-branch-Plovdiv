#include <stdio.h>

int main()
{
    int number;
    int zeroes = 0;
    
    scanf("%d", &number);
    
    number = ~number;
    
    for (int i = 0; i < sizeof(int) * 8; i++)
    {
        if (number & (1 << i))
        {
            zeroes++;
        }
    }
    
    printf("Zeroes: %d", zeroes);
}