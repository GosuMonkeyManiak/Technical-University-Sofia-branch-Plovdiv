#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* readLine();

int main()
{
	char* strings[5];

	for (int i = 0; i < 5; i++)
	{
		strings[i] = readLine();
	}

	int allStringsLength = 0;

	for (int i = 0; i < 5; i++)
	{
		allStringsLength += strlen(strings[i]);
	}

	printf("Total strings length: %d", allStringsLength);
}

char* readLine()
{
	int length = 10;
	char* str = calloc(length, sizeof(char));

	fgets(str, length, stdin);

	int lastStrCharacter = strlen(str) - 1;

	if (*(str + lastStrCharacter) == '\n')
	{
		*(str + lastStrCharacter) = '\0';
	}

	return str;
}