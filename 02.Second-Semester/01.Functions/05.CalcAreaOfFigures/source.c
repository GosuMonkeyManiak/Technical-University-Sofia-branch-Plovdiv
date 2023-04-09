#include<stdio.h>

float rectangleArea();
float trapezoidArea();
float triangleArea();
float parallelogramArea();

float calcFigure(unsigned short figureNumber);

int main()
{
    unsigned short figureNumber;

    printf("Enter one number from these:\n");
    printf("1 - rectangle area\n");
    printf("2 - trapezoid area\n");
    printf("3 - triangle area\n");
    printf("4 - parellelogram area\n");

    scanf("%u", &figureNumber);
    
    float areaOfFigure = calcFigure(figureNumber);
    
    if (areaOfFigure == -1)
    {
        printf("Invalid figure number!");
        return 1;   
    }
    
    printf("Area of figure is %.2f", areaOfFigure);
}

float calcFigure(unsigned short figureNumber)
{
    float result = -1;

    switch (figureNumber)
    {
        case 1:
            result = rectangleArea();
            break;

        case 2:
            result = trapezoidArea();
            break;

        case 3:
            result = triangleArea();
            break;

        case 4:
            result = parallelogramArea();
            break;
    }

    return result;
}

float rectangleArea()
{
    float a, b;

    printf("a = ");
    scanf("%f", &a);

    printf("b = ");
    scanf("%f", &b);
    
    return a * b;
}

float trapezoidArea()
{
    float a, b, h;

    printf("a = ");
    scanf("%f", &a);

    printf("b = ");
    scanf("%f", &b);

    printf("h = ");
    scanf("%f", &h);

    return ((a + b) / 2) * h;
}

float triangleArea()
{
    float a, ha;

    printf("a = ");
    scanf("%f", &a);

    printf("ha = ");
    scanf("%f", &ha);

    return (a * ha) / 2;
}

float parallelogramArea()
{
    float b, h;

    printf("b = ");
    scanf("%f", &b);

    printf("h = ");
    scanf("%f", &h);

    return b * h;
}