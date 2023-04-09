#include <stdio.h>

void readText(char* str, int n);

int main()
{
    char str[30];

    readText(str, 30);

    printf("%s", str);
}

void readText(char* str, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%c", str + i);   
    }
}