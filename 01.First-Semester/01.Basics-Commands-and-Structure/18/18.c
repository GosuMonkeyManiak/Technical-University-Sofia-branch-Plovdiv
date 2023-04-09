#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int firstNumber;
	double secondNumber;
	char character;

	scanf("%d %lf %c", &firstNumber, &secondNumber, &character);

	printf("Number = %d\nSecond Number = %.2lf\nChracter = %c", firstNumber, secondNumber, character);

	return 0;
}