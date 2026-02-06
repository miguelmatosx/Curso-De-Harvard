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

