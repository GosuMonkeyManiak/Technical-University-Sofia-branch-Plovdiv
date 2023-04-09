#include <stdio.h>

int main()
{
    char letter = 0;
    
    scanf("%c", &letter);
    
    if ((letter < 64 || letter <= 90) && (letter < 96 || letter  > 123))
    {
        printf("It isn't a letter.");
    }
    else 
    {
        printf("It is a letter.");
    }
}