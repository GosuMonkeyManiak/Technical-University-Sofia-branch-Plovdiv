#include<stdio.h>

float parallelogramArea(float b, float h);

int main()
{
    float b, h;

    printf("b = ");
    scanf("%f", &b);

    printf("h = ");
    scanf("%f", &h);

    printf("Area of parallelogram is %.2f.", parallelogramArea(b, h));
}

float parallelogramArea(float b, float h)
{
    return b * h;
}