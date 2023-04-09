#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void shortest_word(char text[40]);

int main()
{
    char text[40];
    
    gets(text);
    
    shortest_word(text);

    return 0;
}

void shortest_word(char text[40])
{
    int currentWordLength = 0;
    int minWordLength = 40;
    int startIndex = -1;
    
    for (int i = 0; i < 40; i++)
    {
        if (text[i] != ' ')
        {
            currentWordLength++;
        }
        else
        {
            if (currentWordLength < minWordLength)
            {
                minWordLength = currentWordLength;
                startIndex = i - minWordLength;
            }
            
            currentWordLength = 0;
        }
    }
    
    char* wordWithMinLength = calloc(minWordLength + 1, sizeof(char));
    
    int j = 0;
    
    for (int i = startIndex; i < startIndex + minWordLength; i++)
    {
        wordWithMinLength[j] = text[i];
        j++;
    }
    
    wordWithMinLength[j] = '\0';
    
    printf("%s", wordWithMinLength);
    
    free(wordWithMinLength);
}