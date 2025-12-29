#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int quani;
    int quanf;
    int Years = 0;
    int populacao = quani;
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
   {
    populacao = populacao + (populacao/3) - (populacao/4);
   Years++;
   }
   printf("Anos:%i\n",Years);


  return 0;
}
