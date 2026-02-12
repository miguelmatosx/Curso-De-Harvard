#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main(void)
{
    string texto = get_string("Text: ");

    int letras = 0;
    int frase = 0;

    int palavras = 0;
    bool em_palavra = false;

    for (int i = 0, n = strlen(texto); i < n; i++)
    {
        if (isalpha(texto[i])) letras++;
        if (texto[i] == '.' || texto[i] == '!' || texto[i] == '?') frase++;

        if (isspace(texto[i]))
        {
            em_palavra = false;
        }
        else if (!em_palavra)
        {
            palavras++;
            em_palavra = true;
        }
    }

    float L = (float) letras / palavras * 100;
    float S = (float) frase / palavras * 100;

    int Grade = round(0.0588 * L - 0.296 * S - 15.8);

    if (Grade < 1) printf("Before Grade 1\n");
    else if (Grade >= 16) printf("Grade 16+\n");
    else printf("Grade %i\n", Grade);
}
