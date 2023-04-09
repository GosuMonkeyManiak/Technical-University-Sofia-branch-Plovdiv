#include <stdio.h>
#include <string.h>

struct Node {
    int a;
    float b;
    char symbol;
    char string[20];
};

int main()
{
    struct Node firstNode;

    struct Node* p = &firstNode;

    p -> a = 10;
    p -> b = 3.14;
    p -> symbol = 'D';
    strcpy(p -> string, "Dimitar");

    printf("int: %d\n", p -> a);
    printf("float: %f\n", p -> b);
    printf("char: %c\n", p -> symbol);
    printf("string: %s\n", p -> string);
}