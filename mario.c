#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;

    // Pede o número até ser válido
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1 || n > 8);

    // Constrói a pirâmide
    for (int i = 0; i < n; i++)
    {
        // Espaços
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }

        // #
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }

        printf("\n");
    }
}
