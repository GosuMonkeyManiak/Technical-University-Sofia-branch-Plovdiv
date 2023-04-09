#include<stdio.h>

float triangleArea(float a, float ha);

int main()
{
    float a, ha;

    printf("a = ");
    scanf("%f", &a);

    printf("ha = ");
    scanf("%f", &ha);

    printf("Area of triangle is %.2f.", triangleArea(a, ha));
}

float triangleArea(float a, float ha)
{
    return (a * ha) / 2;
}