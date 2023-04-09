#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	double a;
	double b;

	scanf("%lf %lf", &a, &b);

	printf("P = %lf\nS = %lf", 2 * a + 2 * b, a * b);

	return 0;
}