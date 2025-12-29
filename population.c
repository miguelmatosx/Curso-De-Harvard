#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int quani;
    int quanf;
    int Years;
    do
    {
         quani= get_int("Quantidade Inicial:\n");
         quanf= get_int(" Quantidade Final:\n");
         Years= get_int("Quantidade de anos:\n");


    }
    while( quani <= 9 ; quanf < 9 ; Years < 1);

}
