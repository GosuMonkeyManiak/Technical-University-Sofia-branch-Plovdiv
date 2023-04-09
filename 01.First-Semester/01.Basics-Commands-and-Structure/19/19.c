#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int firstNumber;
	int secondNumber;

	scanf("%d %d", &firstNumber, &secondNumber);

	printf("Sum = %d\nQuotient = %d\nRemainder = %d",
		firstNumber + secondNumber,
		firstNumber / secondNumber,
		firstNumber % secondNumber);

	return 0;
}