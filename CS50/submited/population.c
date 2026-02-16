#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int start;
    int end;

    do
    {
        start = get_int("Start size: ");
    }
    while (start < 9);

    do
    {
        end = get_int("End size: ");
    }
    while (end < start);

    int population = start;
    int years = 0;

    while (population < end)
    {
        population += (population / 3) - (population / 4);
        years++;
    }

    printf("Years: %i\n", years);
}
