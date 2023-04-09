#include <stdio.h>

int main()
{
    char t = 0;
    
    printf("%c = %d\n", t, t);
    
    t++;
    
    while (t > 0)
    {
        printf("%c = %d\n", t, t);
        t++;
    }
}