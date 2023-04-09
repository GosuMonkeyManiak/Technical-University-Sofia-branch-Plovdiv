#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	double a, b, c;

	scanf("%lf %lf %lf", &a, &b, &c);

	double d = (b * b) - (4 * a * c);

	if (d < 0)
	{
		printf("nqma reshenie");
		return 0;
	}

	double x1 = ((b * -1) + sqrt(d)) / 2 * a;
	double x2 = ((b * -1) - sqrt(d)) / 2 * a;

	printf("x1 = %.0lf\n", x1);
	printf("x2 = %.0lf", x2);
}