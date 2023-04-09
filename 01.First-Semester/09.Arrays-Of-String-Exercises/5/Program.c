#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* readLine();
void sortAscendingByLength(char* strings[]);
void sortAscendingByAlfabet(char* strings[]);
void print(char* strings[]);

int main()
{
	char* strings[5];

	for (int i = 0; i < 5; i++)
	{
		strings[i] = readLine();
	}
	
	printf("Sorted by length:\n");
	sortAscendingByLength(strings);
	print(strings);

	printf("Sorted by alfabet:\n");
	sortAscendingByAlfabet(strings);
	print(strings);
}

char* readLine()
{
	int length = 50;
	char* str = calloc(length, sizeof(char));

	fgets(str, length, stdin);

	int lastStrCharacter = strlen(str) - 1;

	if (*(str + lastStrCharacter) == '\n')
	{
		*(str + lastStrCharacter) = '\0';
	}

	return str;
}

void sortAscendingByLength(char* strings[])
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5 - 1 - i; j++)
		{
			if (strlen(strings[j]) > strlen(strings[j + 1]))
			{
				char* temp = strings[j];
				strings[j] = strings[j + 1];
				strings[j + 1] = temp;
			}
		}
	}
}

void sortAscendingByAlfabet(char* strings[])
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5 - 1 - i; j++)
		{
			if (strcmp(strings[j], strings[j + 1]) > 0)
			{
				char* temp = strings[j];
				strings[j] = strings[j + 1];
				strings[j + 1] = temp;
			}
		}
	}
}

void print(char* strings[])
{
	for (int i = 0; i < 5; i++)
	{
		printf("%s\n", strings[i]);
	}
}