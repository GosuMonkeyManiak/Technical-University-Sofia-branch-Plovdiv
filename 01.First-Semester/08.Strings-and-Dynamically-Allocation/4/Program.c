#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * findBigger(char* first, char* second);
char* combine(char* first, char* second);

int main()
{
	char str1[] = "Dimitar";
	char str2[] = "Ivanov";

	char* bigger = findBigger(str1, str2);
	char* combineString = combine(str1, str2);

	printf("%s\n", bigger);

	printf("%s", combineString);
	free(combineString);

	return 0;
}

char * findBigger(char* first, char* second)
{
	int firstLength = 0;
	int secondLength = 0;

	int isFirstFinish = 0;
	int isSecondFinish = 0;

	int i = 0;

	while (1)
	{
		if (isFirstFinish == 1 && isSecondFinish == 1)
		{
			break;
		}

		if (isFirstFinish == 0)
		{
			char character = *(first + i);

			if (character == '\0')
			{
				isFirstFinish = 1;
			}
			else 
			{
				firstLength++;
			}
		}

		if (isSecondFinish == 0)
		{
			char character = *(second + i);

			if (character == '\0')
			{
				isSecondFinish = 1;
			}
			else
			{
				secondLength++;
			}
		}

		i++;
	}

	if (firstLength > secondLength)
	{
		return first;
	}

	return second;
}

char * combine(char* first, char* second)
{
	int newStringLength = strlen(first) + strlen(second);

	char* newString = calloc(newStringLength + 1, sizeof(char));

	int newStringIndex = 0;

	for (int i = 0; i < strlen(first); i++)
	{
		*(newString + newStringIndex) = *(first + i);

		newStringIndex++;
	}

	for (int i = 0; i < strlen(second); i++)
	{
		*(newString + newStringIndex) = *(second + i);

		newStringIndex++;
	}

	*(newString + newStringIndex) = '\0';

	return newString;
}