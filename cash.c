#include <stdio.h>
#include <cs50.h>
#include < math.h>


int main (void)
{
   double Valor
   int centavos

   do
   {
    printf( "Qual valor inserido");
    scanf (%lf, &valor) ;
   }
   while( valor < 0);

   centavos = round(Valor * 100);

   int moedas = 0;

   moedas += centavos/25;
   centavos%= 25;

   moedas += centavos/16
   centavos%= 16
}
