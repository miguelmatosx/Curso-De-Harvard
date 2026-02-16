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
       float r = image[i][j].rgbtRed;
       float b = image[i][j].rgbtBlue;
       float g = image[i][j].rgbtGreen;

      int sepiaRed   = round(0.393 * r + 0.769 * g + 0.189 * b);
      int sepiaGreen = round(0.349 * r + 0.686 * g + 0.168 * b);  // 0.065!
      int sepiaBlue  = round(0.272 * r + 0.534 * g + 0.131 * b);


       image[i][j].rgbtRed = (sepiaRed > 255 ? 255 :sepiaRed);
       image[i][j].rgbtGreen = (sepiaGreen > 255 ? 255 :sepiaGreen);
       image[i][j].rgbtBlue = (sepiaBlue > 255 ? 255 :sepiaBlue);




    }
   }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)     // Cada linha
    {
        for (int j = 0; j < width / 2; j++)  // Metade direita
        {
            RGBTRIPLE temp = image[i][j];           // Esquerda
            image[i][j] = image[i][width - 1 - j];  // Direita → esquerda
            image[i][width - 1 - j] = temp;         // Esquerda → direita
        }
    }
}


// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE temp[height][width];  // Cópia pra não bagunçar

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int sumR = 0, sumG = 0, sumB = 0, count = 0;

            // Janela 3x3
            for (int di = -1; di <= 1; di++)
            {
                for (int dj = -1; dj <= 1; dj++)
                {
                    int ni = i + di, nj = j + dj;
                    if (ni >= 0 && ni < height && nj >= 0 && nj < width)
                    {
                        sumR += image[ni][nj].rgbtRed;
                        sumG += image[ni][nj].rgbtGreen;
                        sumB += image[ni][nj].rgbtBlue;
                        count++;
                    }
                }
            }
            temp[i][j].rgbtRed   = round(sumR / (float) count);
            temp[i][j].rgbtGreen = round(sumG / (float) count);
            temp[i][j].rgbtBlue  = round(sumB / (float) count);
        }
    }
    // Copia temp → image
    for (int i = 0; i < height; i++)
        for (int j = 0; j < width; j++)
            image[i][j] = temp[i][j];


    return;
}
