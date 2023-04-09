#include <stdio.h>

int main()
{
    int arr[3][3] = 
    {
        {1, 2, 3},
        {4, 5, 6}
    };

    int (*p)[3];

    for (p = &arr[0]; p <= &arr[2]; p++)
    {
        (*p)[0] = 8;
    }

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            printf("%d ", arr[row][col]);
        }

        printf("\n");
    }
}