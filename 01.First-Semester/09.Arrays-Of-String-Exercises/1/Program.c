#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* consoleReadline();
void printTitles(char* bookTitles[]);
void sortAscending(char* bookTitles[]);

int bookCount = 15;

int main()
{
	char* bookTitles[15];

	for (int i = 0; i < bookCount; i++)
	{
		char* currentTitle = consoleReadline();

		bookTitles[i] = currentTitle;
	}

	printTitles(bookTitles);

	sortAscending(bookTitles);
	printTitles(bookTitles);
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

void printTitles(char* bookTitles[])
{
	for (int i = 0; i < bookCount; i++)
	{
		printf("%s, ", bookTitles[i]);
	}

	printf("\n");
}

void sortAscending(char* bookTitles[])
{
	for (int i = 0; i < bookCount - 1; i++)
	{
		if (strcmp(bookTitles[i], bookTitles[i + 1]) > 0)
		{
			char* temp = bookTitles[i];
			bookTitles[i] = bookTitles[i + 1];
			bookTitles[i + 1] = temp;
		}
	}
}