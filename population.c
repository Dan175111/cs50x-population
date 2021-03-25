#include <cs50.h>
#include <stdio.h>

int main()
{
    // TODO: Prompt for start size
    int start_size;
    do
    {
        start_size = get_int("Start size: ");
    }
    while (start_size < 9);
    // TODO: Prompt for end size
    int end_size;
    do
    {
        end_size = get_int("End size: ");
    }
    while (end_size < start_size);

    // Keep track of number of years
    int years = 0;

    // TODO: Calculate number of years until we reach threshold
    while (start_size < end_size)
    {
        start_size = start_size + (start_size / 3) - (start_size / 4);
        years++;
    }
    // Print number of years for population to reach end_size
    printf("Years: %i\n", years);
}
