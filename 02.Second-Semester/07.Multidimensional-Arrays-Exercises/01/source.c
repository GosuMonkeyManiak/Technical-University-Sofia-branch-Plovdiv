#include <stdio.h>

int main()
{
    int a[2][8] = {
        {10, 11, 12, 13, 98, -8, -12, 0},
        {14, 15, 16, 17, 12, 0, -12, 7}
    };
    
    int* p = a[1];
    
    for (int i = 0; i < 8; i++)
    {
        if (*(p + i) == 12)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
