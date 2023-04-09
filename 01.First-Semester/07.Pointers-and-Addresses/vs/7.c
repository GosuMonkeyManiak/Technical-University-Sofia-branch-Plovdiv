#include <stdio.h>

int main()
{
    int a[] = { 1, 12, 5};

    int *p = a;

    for (int i = 0; i < 3; i++)
    {
        printf("%d ", *p);

        p++;
    }
    
}