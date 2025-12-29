#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int quani;
    int quanf;
    int Years = 0;
    int populacao
    do
    {
         quani= get_int("Quantidade Inicial:");


    }
    while( quani <= 9);

    do
    {
        quanf= get_int("Quantidade final:");
    }
     while( quanf <=  quani);

     while( populacao < quanf)
   populacao = quani + (quani/3) - (quani/4);
   Years++;


  return 0;
}
