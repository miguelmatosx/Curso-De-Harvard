#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <ctype.h>

int main( int argc , string argv[])
{
   if(argc != 2)
   {
    printf("Usage : ./Caesar key\n");
      return 1;
   }
   for(int i = 0 ; argv[1][i] !='\0' ; i++)
   {
      if(!isdigit(argv[1][i]))
      {
        printf("Usage: ./Caesar key\n");
        return 1 ;

      }

   }

   string plaintext = get_string("Qual o texto: ");

   for( int i = 0 ; i < strlen(plaintext) ; i++)
   {

      char c = plaintext[i];

   if(isupper(c))
      {
         int posicao = c - 'A';
      }
      int nova_posicao = (posicao + key) % 26;
   }

}
