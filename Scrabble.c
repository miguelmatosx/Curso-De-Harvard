#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>

int POINTS[]= {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string world);

int main(void)
{
   string word1;
   string word2;
   bool valido;

  do
  {
   valido= true;
   word1= get_string("Player 1: ");

  for(int i = 0 ; i < strlen(word1) ; i++)

    if(!isalpha(word1[i]))
    {
        valido= false;
        break;
    }

  }
  while(!valido);

  do
  {
    valido= true;
    word2= get_string("Player 2: ");

    for (int j = 0 ; j < strlen(word2) ; j++)

    if(!isalpha(word2[j]))
    {
        valido= false;
        break;

    }

  }
  while(!valido);


  int compute_score(string word1)
  {
    int score= 0
  }
}

