#include<stdio.h>

float trapezoidArea(float a, float b, float h);

int main()
{
    float a, b, h;

    printf("a = ");
    scanf("%f", &a);

    printf("b = ");
    scanf("%f", &b);

    printf("h = ");
    scanf("%f", &h);

    printf("Area of trapezoid is %.2f", trapezoidArea(a, b, h));
}

float trapezoidArea(float a, float b, float h)
{
    return ((a + b) / 2) * h;
}