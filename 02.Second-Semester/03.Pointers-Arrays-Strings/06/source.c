#include<stdio.h>

#define N 2

int main()
{
    int a[N][N];

    for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < N; col++)
        {
            a[row][col] = 5;
        }
        
    }
    
    int* firstRow = &a[0][0];

    for (int i = 0; i < N; i++)
    {
        *(firstRow + i) = 0;
    }

    for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < N; col++)
        {
            printf("%d ", a[row][col]);
        }
        
        printf("\n");
    }
}