#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    string texto = get_string ("Insira o Texto: ");
    letras = 0;


    for( int letras = 0 ; letras < strlen(texto) ; letras++)
    {

            if(isalpha(texto[letras]))
        {
             letras++;
        }
    }
  printf("Letras:%i\n", letras);
}
