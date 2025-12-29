#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int quani;
    int quanf;

    do
    {
         quani= get_int("Quantidade Inicial:");


    }
    while( quani <= 9);

    do
    {
        quanf= get_int("Quantidade final:");
    }
     while( quanf < quani);

     int populacao = 0 ;
     int Years = 0;

     while( populacao < quanf)
   {
    populacao += (populacao / 3) - (populacao / 4);
    Years++;
   }
   printf("Anos:%i\n",Years);



}
