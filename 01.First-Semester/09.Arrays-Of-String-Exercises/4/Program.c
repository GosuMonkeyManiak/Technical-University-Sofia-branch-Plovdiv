#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* readLine();
void printStrings(char* strings[]);
char* findLongestString(char* strings[]);

int main()
{
	char* strings[4];

	for (int i = 0; i < 4; i++)
	{
		char* currentString = readLine();
		strings[i] = currentString;
	}

	printf("Print strings:\n");
	printStrings(strings);

	char* biggestString = findLongestString(strings);

	printf("Longest string: %s", biggestString);
}

char* readLine()
{
	int maxLength = 50;

	int length = 2;
	int index = 0;
	char* str = calloc(length, sizeof(char));

	char currentChar;

	while ((currentChar = getchar()) != '\n' && index < maxLength)
	{
		*(str + index) = currentChar;
		length++;
		index++;

		str = realloc(str, length * sizeof(char));
	}

	*(str + index) = '\0';

	return str;
}

void printStrings(char* strings[])
{
	for (int i = 0; i < 4; i++)
	{
		printf("%s\n", strings[i]);
	}
}

char* findLongestString(char* strings[])
{
	int maxLength = 0;
	int indexOfLongestString = 0;

	for (int i = 0; i < 4; i++)
	{
		if (i == 0)
		{
			maxLength = strlen(strings[i]);
			indexOfLongestString = i;
			continue;
		}

		if (strlen(strings[i]) > maxLength)
		{
			maxLength = strlen(strings[i]);
			indexOfLongestString = i;
		}

	}

	return strings[indexOfLongestString];
}