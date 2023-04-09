#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double firstNumber;
	double secondNumber;
	
	scanf("%lf %lf", &firstNumber, &secondNumber);

	secondNumber = firstNumber * secondNumber;
	firstNumber = secondNumber / firstNumber;
	secondNumber = secondNumber / firstNumber;

	printf("first = %.0lf\nsecond = %.0lf", firstNumber, secondNumber);

	return 0;
}