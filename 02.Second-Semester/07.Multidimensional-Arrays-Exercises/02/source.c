#include <stdio.h>

int main()
{
    int a[3][4] = 
    {
        {10, 11, 12, 13},
        {1, 23, 3, 4},
        {1, 3, 3, 4}
    };

    int (*p)[4];

    int i = 1;
    int help;

    for (p = &a[0]; p < &a[3]; p++)
    {
        help = (*p)[i];

        if (help % 10 == 3)
        {
            printf("Found element %d.\n", help);
        }
        
    }

}