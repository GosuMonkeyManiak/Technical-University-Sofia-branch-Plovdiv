#include <stdio.h>

void readText(char* str, int n);

int main()
{
    char str[30];

    readText(str, 30);

    for (int i = 0; i < 30; i++)
    {
        if (str[i] == 'g' || str[i] == 'G')
        {
            printf("Found! Index: %d\n", i);
        }
    }
    
}

void readText(char* str, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%c", str + i);   
    }
}