#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(void)
{
    string texto = get_string ("Insira o Texto: ");
    int letras = 0;


    for( int i = 0 ; i < strlen(texto) ; i++)
    {

            if(isalpha(texto[i]))
        {
             letras++;
        }
    }


  int espaço = 0;
  int palavras = 0;

  for( int i = 0 ; i < strlen(texto) ; i++)
  {

    if(isblank(texto[i]))
    {
      espaço++;
      palavras = espaço + 1;
    }

  }



 int frase = 0;

 for( int i = 0 ; i < strlen(texto) ; i++)
{
      if (texto[i] == '.' || texto[i] == '!' || texto[i] == '?')
 {
      frase++;
 }

}

float L = 0;
float S = 0;

L = (float) letras/palavras * 100;
S = (float) frase/palavras  * 100;

float indice = 0;

 indice = 0.0588 * L - 0.296 * S - 15.8






}
