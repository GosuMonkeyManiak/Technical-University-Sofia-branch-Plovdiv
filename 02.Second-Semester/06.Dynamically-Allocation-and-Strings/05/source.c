#include <stdio.h>
#include <stdlib.h>

void readText(char* str, int n);
char* findFirstSentence(char* str, int n);

int main()
{
    char str[30];

    readText(str, 30);

    char* elementsOfSetence = findFirstSentence(str, 30);

    if (elementsOfSetence == NULL)
    {
        printf("%s", str);
        return 0;
    }

    printf("%s", elementsOfSetence);
    
    free(elementsOfSetence);
}

void readText(char* str, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%c", str + i);   
    }
}

char* findFirstSentence(char* str, int n)
{
    int dotIndex = -1;

    for (int i = 0; i < n; i++)
    {
        if (*(str + i) == '.' || *(str + i) == '?' || *(str + i) == '!')
        {
            dotIndex = i;
            break;
        }
    }

    if (dotIndex == -1)
    {
        return NULL;
    }
    
    char* elementsOfSentence = (char*) malloc(dotIndex + 2);

    for (int i = 0; i <= dotIndex; i++)
    {
        *(elementsOfSentence + i) = *(str + i);
    }

    elementsOfSentence[dotIndex + 1] = '\0';

    return elementsOfSentence;
}