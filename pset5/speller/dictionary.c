// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
} node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 26;

// Hash table
node *table[N];

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    node *cursor = table[hash( word )];

    while(cursor !=NULL)
    {
        cursor = cursor->next
    }

    if (strcasecmp(cursor->word , word) == 0)
    {
        return true;
    }
  node *new_node = malloc(sizeof(node));
  if (new_node == NULL)
  {
    return false;
  }

  new_node->next = table[hash(word)];
  table[hash(word)] = new_node;




    // TODO
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
    return toupper(word[0]) - 'A';
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
   FILE *fopen(dictionary, "r");
   fscanf(file , %s , word);

   node *cursor = malloc(sizeof(node));

   strcpy(node->word , word)

   node *new_node = malloc(sizeof(node));
   if (new_node == NULL)
   {
     return false;
   }

   new_node->next = table[hash(word)];
   table[]



    // TODO
    return false;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return 0;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO
    return false;
}
