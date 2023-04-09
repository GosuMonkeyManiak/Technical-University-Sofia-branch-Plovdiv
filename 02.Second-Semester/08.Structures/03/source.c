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

struct warehouse createWarehouse(int number, char* name, int on_hand)
{
    struct warehouse newWarehouse;
    
    newWarehouse.number = number;
    newWarehouse.name = name;
    newWarehouse.on_hand = on_hand;
    
    return newWarehouse;
}

int main()
{
    struct warehouse first = { 1, "first", 100 };
    struct warehouse second = { 2, "second", 200 };

    struct warehouse third = createWarehouse(400, "Microphone", 15);

    printfInfo(third);
}