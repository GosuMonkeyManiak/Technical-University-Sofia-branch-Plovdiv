#include <stdio.h>

struct warehouse
{
    int number;
    char* name;
    int on_hand;
};

int main()
{
    struct warehouse first = { 1, "first", 100 };
    struct warehouse second = { 2, "second", 200 };
    struct warehouse third = { 3, "third", 300 };

    printf("Number: %d\n", second.number);
    printf("Name: %s\n", second.name);
    printf("On hand: %d\n", second.on_hand);
}