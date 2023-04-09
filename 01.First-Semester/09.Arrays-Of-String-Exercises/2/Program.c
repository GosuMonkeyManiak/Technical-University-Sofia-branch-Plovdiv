#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

char* readString();
char* concatStrings(char* studenInfo[]);
int countSpecialSymbolInString(char* str, char symbol);
char* getFullNameIdentifier(char* fullname);

int main()
{
	char* studentInfo[4];

	for (int i = 0; i < 4; i++)
	{
		char* string = readString();

		studentInfo[i] = string;
	}

	char* concatString = concatStrings(studentInfo);

	printf("String: %s Length: %d\n", concatString, strlen(concatString));

	char* fullNameIdentifier = getFullNameIdentifier(concatString);

	printf("%s\n", fullNameIdentifier);
	printf("a is present %d times in full name.", countSpecialSymbolInString(concatString, 'a'));

	free(concatString);
	free(fullNameIdentifier);
}

char* readString()
{
	int index = 0;
	char* currentInfo = calloc(20, sizeof(char));
	char currentChar;

	while ((currentChar = getchar()) != '\n' && index < 20)
	{
		*(currentInfo + index) = currentChar;
		index++;
	}

	*(currentInfo + index) = '\0';

	return currentInfo;
}

char* concatStrings(char* studenInfo[])
{
	int concatStringLength = 2 + 1; //3 for spaces and 1 for the end of string character

	for (int i = 0; i < 3; i++)
	{
		concatStringLength += strlen(studenInfo[i]);
	}

	char* concatString = calloc(concatStringLength, sizeof(char));

	char space[] = {' ', '\0'};

	for (int i = 0; i < 3; i++)
	{
		strcat(concatString, studenInfo[i]);

		if (i < 2)
		{
			strcat(concatString, &space);
		}
		
	}

	return concatString;
}

int countSpecialSymbolInString(char* str, char symbol)
{
	int index = 0;
	char currentChar;
	int count = 0;

	while (1)
	{
		currentChar = *(str + index);

		if (currentChar == '\0')
		{
			break;
		}

		if (currentChar == symbol)
		{
			count++;
		}

		index++;
	}

	return count;
}

char* getFullNameIdentifier(char* fullname)
{
	int length = 1;
	int fullNameIndex = 0;
	char* fullNameIdentifier = calloc(length, sizeof(char));


	int index = 0;
	char currentChar;

	while (1)
	{
		currentChar = *(fullname + index);

		if (currentChar == '\0')
		{
			break;
		}

		if (isupper(currentChar))
		{
			*(fullNameIdentifier + fullNameIndex) = currentChar;
			fullNameIndex++;
			length++;

			fullNameIdentifier = realloc(fullNameIdentifier, length * sizeof(char));
		}

		index++; 
	}

	*(fullNameIdentifier + fullNameIndex) = '\0';

	return fullNameIdentifier;
}