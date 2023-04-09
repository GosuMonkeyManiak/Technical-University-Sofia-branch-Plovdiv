#include <stdio.h>
#include <string.h>

#define N 40

void readText(char* str, int n);
int countAllWords(char* str, int n);

int main()
{
    char str[N];

    readText(str, N);

    int numberOfWords = countAllWords(str, N);

    printf("Number of words is equal to %d.\n", numberOfWords);

    char* token = strtok(str, " ");

    while (token != NULL)
    {
        printf("%s\n", token);

        token = strtok(NULL, " ");
    }
    
}

void readText(char* str, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%c", str + i);   
    }
}

int countAllWords(char* str, int n)
{
    int totalWords = 0;
    int isHaveWord = 0;

    for (int i = 0; i < n; i++)
    {
        int isSymbolIsLetter = (*(str + i) >= 97 && *(str + i) <= 122) || (*(str + i) >= 65 && *(str + i) <= 90);

        if (isSymbolIsLetter && isHaveWord == 0)
        {
            isHaveWord = 1;
        }

        if (isHaveWord && isSymbolIsLetter == 0)
        {
            totalWords++;
            isHaveWord = 0;
        }
        
    }
    
    return totalWords;
}