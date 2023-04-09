#include <stdio.h>
#include <stdlib.h>

struct Node {
    int id;
    int value;
    struct Node* next;
};

struct Node* addLast(struct Node* tail, int value)
{
    struct Node* newNode = calloc(1, sizeof(struct Node));
    newNode -> value = value;

    if (tail != NULL)
    {
        tail -> next = newNode;
    }

    return newNode;
}

void multiplyNumberWhichIsLessThenThree(struct Node* head)
{
    while (head != NULL)
    {
        if (head -> value < 3)
        {
            head -> value *= 2;
        }

        head = head -> next;
    }
    
}

void printList(struct Node* head)
{
    while (head != NULL)
    {
        printf("%d ", head -> value);
        head = head -> next;
    }
}

void freeList(struct Node* head)
{
    struct Node* temp;

    while (head != NULL)
    {
        temp = head;
        head = head -> next;

        free(temp);
    }
}

int main()
{
    struct Node* head = NULL;
    struct Node* tail = NULL;

    for (int i = 0; i < 10; i++)
    {
        if (i == 0)
        {
            tail = addLast(tail, i);
            head = tail;
        }
        else
        {
            tail = addLast(tail, i);
        }
    }

    printList(head);

    multiplyNumberWhichIsLessThenThree(head);

    printf("\n");

    printList(head);

    freeList(head);
}