#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

char* consoleReadline();
int toUpper(int charCode);

int main()
{
	char* str = consoleReadline();

	int index = 0;
	char currentChar;

	while (1)
	{
		currentChar = *(str + index);

		if (currentChar == '\0')
		{
			break;
		}

		*(str + index) = (char) toUpper((int) currentChar);

		index++;
	}

	printf("%s", str);
}

char* consoleReadline()
{
	int length = 1;
	int positionIndex = 0;
	char character;

	char* pWord = calloc(length, sizeof(char));

	while ((character = (char)getchar()) != '\n')
	{
		*(pWord + positionIndex) = character;

		length++;
		positionIndex++;

		pWord = realloc(pWord, sizeof(char) * length);
	}

	*(pWord + positionIndex) = '\0';

	return pWord;
}

int toUpper(int charCode)
{
	int distanceFromEnd = 122 - charCode;
	int upperCharCode = 90 - distanceFromEnd;

	return upperCharCode;
}