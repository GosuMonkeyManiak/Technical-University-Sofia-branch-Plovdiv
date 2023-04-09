#include <stdio.h>

struct warehouse
{
    int number;
    char* name;
    int on_hand;
};

void printfInfo(struct warehouse warehouse)
{
    printf("Number: %d\n", warehouse.number);
    printf("Name: %s\n", warehouse.name);
    printf("On hand: %d\n", warehouse.on_hand);
}

int main()
{
    struct warehouse first = { 1, "first", 100 };
    struct warehouse second = { 2, "second", 200 };
    struct warehouse third = { 3, "third", 300 };

    printfInfo(second);
}