#include <stdio.h>
#include <cs50.h>
#include <string.h>

#define MAX 9

typedef struct
{
    string name;
    int votes;
}
candidate ;

candidate candidates[MAX];

int candidate_count ;

bool vote (string name);
void print_winner(void);

int main (int argc , string argv[])

if (argc < 2)
{
  printf("Usage plurality [candidate]\n");
  return 1;
}

candidate_count = argc - 1 ;

if ( candidate_count > MAX)
{
    printf ("Maximum number of candidaters is %i\n" , MAX);
    return 2;
}

for (int i = 0 ; i < candidate_count ; i++)
{
    candidates[i].names = argv[i + 1];
    candidates[i].votes = 0;
}




