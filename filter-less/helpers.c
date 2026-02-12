#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for( int i = 0 ; i < height ; i++)
    {
       for( int j = 0 ; j < width ; j++)
       {
         float avg = (image[i][j].rgbtRed + image[i][j].rgbtBlue + image[i][j].rgbtGreen) / 3.0;

         image[i][j].rgbtRed = round(avg);
         image[i][j].rgbtBlue = round(avg);
         image[i][j].rgbtGreen = round(avg);

       }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
   for (int i = 0 ; i < height ; i++)
   {
    for (int j = 0 ; j < width ; j++)
    {
       int r = image[i][j].rgbtRed;
       int g = image[i][j].rgbtBlue;
       int b = image[i][j].rgbtGreen;

       int sepiaRed = round(0.393 * r + 0.769 * g + 0.189 * b);
       int sepiaGreen = round(0.349 * r + 0.686 * g + 0.065 * b);
       int sepiaBlue = round(0.272 * r + 0.534 * g + 0.131 * b);

       image[i][j].rgbtRed = sepiaRed > 255 ? 255 :sepiaRed;
       image[i][j].rgbtGreen = sepiaGreen > 255 ? 255 :sepiaGreen;
       image[i][j].rgbtBlue = sepiaBlue > 255 ? 255 :sepiaBlue;




    }
   }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE temp [height][width];

    for (int i = 0 ; i < height ; i++)
    {
        for (int j = 0 ; j < widht ; j++)
        {
            int sumR = 0 , in sumG = 0 , sumB = 0 , count = 0;
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
