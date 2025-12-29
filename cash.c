#include <stdio.h>
#include <math.h>
#include <cs50.h>


int main (void)
{
   double Valor;
   int centavos;

   do
   {
    Valor = get_double("Qual o valor inserido?\n");
    printf( "o troco e:%d\n");

   }
   while( Valor > 0);

   centavos = round(Valor * 100);

   int moedas = 0;

   moedas += centavos/25;
   centavos%= 25;

   moedas += centavos/10;
   centavos%= 10;

   moedas += centavos/5;
   centavos%= 5;

   moedas += centavos;

   printf("%d\n", moedas);

   return 0;
}
