#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char firstName[] = "Dimitar Kupanov";

	int stringLength = getStringLength(firstName);

	printf("Length of %s is %d.", firstName, stringLength);
}

int getStringLength(char* str)
{
	int length = 0;
	int index = 0;
	char currentCharacter;

	while (1)
	{
		currentCharacter = *(str + index);

		if (currentCharacter == '\0')
		{
			break;
		}

		index++;
		length++;
	}

	return length;
}