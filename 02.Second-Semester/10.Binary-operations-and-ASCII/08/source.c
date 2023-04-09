#include <stdio.h>

int main()
{
    char letter;
    
    scanf("%c", &letter);
    
    if ((letter >= 65 && letter <= 90) || (letter >= 97 && letter <= 122))
    {
        letter = letter ^ (1 << 5);

        printf("%c", letter);
    }
    else
    {
        printf("Invalud input!");
    }
}