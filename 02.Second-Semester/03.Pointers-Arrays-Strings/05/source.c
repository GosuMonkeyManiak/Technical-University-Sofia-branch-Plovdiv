#include<stdio.h>

int main()
{
    char* planets[] ={ "Mercury", "Venus", "Earth", "Mars", "Upiter", "Saturn", "Uranus", "Neptun", "Pluto" };

    for (int i = 0; i < 9; i++)
    {
        if (planets[i][0] == 'M')
        {
            printf("%s begins with M.\n", planets[i]);
        }
        
    }
    
}