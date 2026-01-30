#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    string texto = get_string ("Insira o Texto: ");


    for( int letras = 0 ; letras < strlen(texto) ; letras++)
    {

            if(isalpha(texto[letras]))
        {
            printf("Letras:%i\n , letras");
        }
    }

}
