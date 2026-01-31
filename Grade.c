#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    string texto = get_string ("Insira o Texto: ");
    int letras = 0;


    for( int i = 0 ; i < strlen(texto) ; i++)
    {

            if(isalpha(texto[letras]))
        {
             letras++;
        }
    }
  printf("Letras:%i\n", letras);

  int espaço = 0;
  int palavras = 0;

  for( int i = 0 ; i < strlen(texto) ; i++)
  {

    if(isblank(texto[espaço]))
    {
      espaço++;
    }

    do
    {
      palavras = espaço
    }






}
