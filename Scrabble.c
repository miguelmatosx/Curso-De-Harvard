#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>

int POINTS[]= {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};


int compute_score(string word);

int main(void)
{
  string word1;
  string word2;
  bool valido;

  int score1 = compute_score(word1);
  int score2 = compute_score(word2);

  if ( score1 > score2)
{
   printf("Player 1 venceu\n");
}

else if(score2 > score1)
  {
     printf("Player 2 venceu\n");
  }

  else
  {
    printf("Tie\n");
  }

}


  int compute_score(string word)
  {

    int score = 0;

  for (int i = 0 ; i < strlen(word) ; i++)
  {

     char c = toupper( word[i]);
     score +=POINTS[ c - 'A'];
  }



 return score;


 }


