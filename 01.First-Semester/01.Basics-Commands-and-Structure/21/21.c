#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	
	int number;

	scanf("%d", &number);

	printf("Square root of %d = %lf", number, sqrt(number));

	return 0;
}