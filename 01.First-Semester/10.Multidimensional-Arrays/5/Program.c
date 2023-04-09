#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void readArray(char* arr, int rows, int cols);

int main()
{
	char a[3][5];

	readArray(a, 3, 5);

	int vowelLettersCount = getCountOfVowelLetters(a, 3, 5);

	printf("Vowel letters is %d.", vowelLettersCount);
}

void readArray(char* arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			scanf("%c", arr + (i * cols) + j);
		}
	}
}

int getCountOfVowelLetters(char* arr, int rows, int cols)
{
	int vowelLettersCount = 0;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			char currentLetter = *(arr + (i * cols) + j);

			//a, e, i, o, u
			if (currentLetter == 'a' || 
				currentLetter == 'e' || 
				currentLetter == 'i' || 
				currentLetter == 'o' ||
				currentLetter == 'u')
			{
				vowelLettersCount++;
			}
		}
	}

	return vowelLettersCount;
}