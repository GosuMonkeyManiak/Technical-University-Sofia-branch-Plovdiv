#include <stdio.h>
#include <stdlib.h>

struct Node {
    int id;
    int value;
    struct Node* next;
};

int length = 0;

//insert before, after and delete

struct Node* insertBefore(struct Node* head, int key, int value)
{
    struct Node* current = head;
    struct Node* prev = NULL;
    
    while(1)
    {
        if (current == NULL)
        {
            break;
        }
        
        if (current -> id == key && prev == NULL) //can be first
        {
            struct Node* newNode = calloc(1, sizeof(struct Node));
            newNode -> id = length;
            newNode -> value = value;
            
            newNode -> next = current;
            
            length++;
            
            return newNode;
        }
        
        if (current -> id == key)
        {
            struct Node* newNode = calloc(1, sizeof(struct Node));
            newNode -> id = length;
            newNode -> value = value;
            
            prev -> next = newNode;
            newNode -> next = current;
            
            length++;
            
            return newNode;
        }
        
        prev = current;
        current = current -> next;
    }
    
}

void insertAfter(struct Node* head, int key, int value)
{
    struct Node* current = head;
    
    while(1)
    {
        if (current == NULL)
        {
            break;
        }
        
        if (current -> id == key)
        {
            struct Node* newNode = calloc(1, sizeof(struct Node));
            newNode -> id = length;
            newNode -> value = value;
            
            newNode -> next = current -> next;
            current -> next = newNode;
            
            length++;
            
            break;
        }
        
        current = current -> next;
    }
}

struct Node* insertBegin(struct Node* head, int value)
{
    struct Node* newNode = calloc(1, sizeof(struct Node));
    newNode -> id = length;
    newNode -> value = value;
    newNode -> next = head;
    
    length++;
    
    return newNode;
}

void deleteNode(struct Node* head, int key)
{
    struct Node* current = head;
    struct Node* prev = NULL;
    
    while(1)
    {
        if (current == NULL)
        {
            break;
        }
        
        if (current -> id == key)
        {
            prev -> next = current -> next;
            free(current);
            
            break;
        }
        
        prev = current;
        current = current -> next;
    }
}

void printList(struct Node* head)
{
    struct Node* p = head;
    
    while(p != NULL)
    {
        printf("%d ", p -> value);
        
        p = p -> next;
    }
}

void freeList(struct Node* head)
{
    struct Node* current = head;
    struct Node* prev = NULL;
    
    while(current != NULL)
    {
        prev = current;
        
        current = current -> next;
        
        free(prev);
    }
}

int main()
{
    struct Node* head = insertBegin(NULL, 10);
    
    insertAfter(head, 0, 20);
    head = insertBefore(head, 0, 5);
    
    printList(head);
    
    deleteNode(head, 1);
    
    printf("\n");
    
    printList(head);
    
    freeList(head);

    return 0;
}