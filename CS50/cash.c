#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    
    int centavos;

    do
    {

        centavos = get_int("Change Owned:\n");
    }
    while (centavos < 0);

    int moedas = 0;

    moedas += centavos / 25;
    centavos %= 25;

    moedas += centavos / 10;
    centavos %= 10;

    moedas += centavos / 5;
    centavos %= 5;

    moedas += centavos;

    printf("%i\n", moedas);

    return 0;
}
