#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    string texto = get_string ("Insira o Texto: ");

    int letras = 0;
    do
    {
        letras = get_int("Letras: ");
    }
    while(isalpha(letras));
}

