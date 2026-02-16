#include <cs50.h>
#include <stdio.h>

void draw (int h );

int main (void)
{
    int height = get_int ("Altura : ");
    draw(height);
}

void draw ( int height)
{
    for (int i = 0 ; i < height ; i++)
    {
        for (int j = 0 ; j < i ; i++)
        {
           printf ("#");
        }
        printf ("\n");
    }
}



