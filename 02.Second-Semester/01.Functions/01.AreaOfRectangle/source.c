#include<stdio.h>

float rectangleArea(float a, float b);

int main()
{
    float a, b;

    printf("a = ");
    scanf("%f", &a);

    printf("b = ");
    scanf("%f", &b);

    printf("Area of rectangle is %.2f.", rectangleArea(a, b));
}

float rectangleArea(float a, float b)
{
    return a * b;
}