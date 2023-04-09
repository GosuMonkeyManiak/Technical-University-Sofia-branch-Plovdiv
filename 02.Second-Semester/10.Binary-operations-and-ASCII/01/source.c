#include <stdio.h>
#include <stdlib.h>

int* getBinary(int number);

int length;

int main()
{
    int number;
    
    scanf("%d", &number);
    
    int* binary = getBinary(number);
    
    for (int i = length - 1; i >= 0; i--)
    {
        printf("%d ", binary[i]);
    }

    free(binary);
}

int* getBinary(int number)
{
    length = 1;
    int index = 0;
    int* binary = calloc(length, sizeof(int));
    
    while (number > 0)
    {
        binary[index] = number % 2;
        
        number = number / 2;
        
        index++;
        length++;
        
        binary = realloc(binary, length);
    }
    
    return binary;
}