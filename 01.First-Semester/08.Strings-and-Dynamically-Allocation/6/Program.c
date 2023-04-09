#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

char* consoleReadline();

int main()
{
	char* str = consoleReadline();

	int aCount = 0;
	int oCount = 0;
	int eCount = 0;

	int index = 0;
	char currentChar;

	while (1)
	{
		currentChar = *(str + index);

		if (currentChar == '\0')
		{
			break;
		}

		if (currentChar == 'a')
		{
			aCount++;
		}
		else if (currentChar == 'o')
		{
			oCount++;
		}
		else if (currentChar == 'e')
		{
			eCount++;
		}

		index++;
	}

	printf("The string \"%s\" has \"a\" = %d, \"o\" = %d, \"e\" = %d", str, aCount, oCount, eCount);

	free(str);

	return 0;
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