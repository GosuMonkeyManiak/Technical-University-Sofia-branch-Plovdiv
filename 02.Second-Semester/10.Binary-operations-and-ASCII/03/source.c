#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);
    
    number = ~number;
    
    printf("Result: %d", number + 1);
}