#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   if (argc != 2 )
   {
    printf("Usage:./recover image\n");
    return 1 ;
   }

   FILE *file = fopen(argv[1] , r);
  if (file == NULL)
  {
    printf("Could not open\n");
    return 1;
  }

  unsigned char buffer[512]
  FILE *img = NULL;
  int jpg_count = 0;

  while( fread (buffer , 1 , 512 , file) == 512)
  {
    if (buffer[0] == 0xff &&
    buffer[1] == 0xd8 &&
    buffer[2] == 0xff &&
    (buffer[3] & 0xf0) == 0xe0)
    {
     if (img !== NULL)
     {
       fclose (img);
     }

     char filename[8];
     sprint(filename , "%03i.jpg" , jpg_count);

     img = fopen(filename , w);

     jpg_count++;


     }
    if ( img == NULL)
    {
        fwrite (buffer , 1 , 512 , img);
    }


}



}
