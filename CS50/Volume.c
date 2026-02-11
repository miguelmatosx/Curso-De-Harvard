#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

const int HEADER_SIZE = 44;

int main(int argc, char *argv[])
{
   if (argc != 4)
   {
      printf("Usage: ./volume input.wav output.wav factor\n") ;
     return 1;
   }

  FILE *output = fopen (argv[1] , "r");
  if (output == NULL)
  {
    printf ("Could not open the file.\n");
    return 1;
  }

  FILE *input = fopen (argv[2] , "w");
  if (output== NULL)
  {
    printf("Could not open the file.\n");
    return 1;

  }

  float factor = atof(argv[3]);
  if (factor < 1)
  {
    printf("Make Some Change.\n");
    return 1
  }

  uint8_t header[HEADER_SIZE];
  fread(header , HEARDER_SIZE , 1 , input);
  fwrite(header , HEADER_SIZE , 1 , output);

  uint16_t sample
  while fread(&sample , sizeof(uint16_t) , 1 , input)
  {
     sample *= factor
     fwrite(&sample , sizeof(uint16_t) , 1 , output);
  }

  fclose(input);
  fclose(output);






}

