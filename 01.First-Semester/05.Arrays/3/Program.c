#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float grades[] = { 3.5, 4, 5, 3, 4.5 };

	int numberOfGrades = sizeof(grades) / sizeof(grades[0]);
	float average = 0;

	for (int i = 0; i < numberOfGrades; i++)
	{
		average += grades[i];
	}

	average /= numberOfGrades;

	printf("Average = %.2f", average);
}