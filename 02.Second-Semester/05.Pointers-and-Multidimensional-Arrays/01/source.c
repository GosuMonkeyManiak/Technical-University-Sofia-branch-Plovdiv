#include <stdio.h>

int main()
{
    int arr[2][2] = {
        {5, 5},
        {5, 5}
    };

    int* p = arr[0];

    for (int i = 0; i < 2; i++)
    {
        *(p + i) = 1;
    }

    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            printf("%d ", arr[row][col]);
        }
        
        printf("\n");
    }
}