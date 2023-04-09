#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

char* consoleReadline();
char* removeSpace(char* str, int index, int length);

int stringLength = 0;

int main()
{	
	char *str = consoleReadline();

	for (int i = 0; i < stringLength - 1; i++)
	{
		if (*(str + i) == ' ' && *(str + i + 1) == ' ')
		{
			str = removeSpace(str, i, stringLength);
			i--;
		}
		else if (
			*(str + i) == ' ' && 
			(*(str + i + 1) == '.' || *(str + i + 1) == '!' || *(str + i + 1) == '?') || *(str + i + 1) == ':' || *(str + i + 1) == ';')
		{
			str = removeSpace(str, i, stringLength);
			i--;
		}
	}

	printf("%s", str);

	free(str);
}

char * removeSpace(char *str, int index, int length)
{
	for (int i = index; i <= length; i++)
	{
		*(str + i) = *(str + i + 1);
	}

	str = (char *) realloc(str, sizeof(char) * (length - 1));

	return str;
}

char * consoleReadline()
{
	int length = 1;
	int positionIndex = 0;
	char character;

	char *pWord = (char *) calloc(length, sizeof(char));

	while ((character = (char) getchar()) != '\n')
	{
		*(pWord + positionIndex) = character;

		length++;
		positionIndex++;

		pWord = (char *) realloc(pWord, sizeof(char) * length);
	}

	*(pWord + positionIndex) = '\0';

	stringLength = length;

	return pWord;
}
