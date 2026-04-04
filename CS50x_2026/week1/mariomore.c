#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // for height
    int h;

    do
    {
        h = get_int("What's the desired height?");
    }
    while (h < 1 || h > 8);

    // for row
    for (int i = 0; i < h; i++)
    {
        // for spaces
        for (int j = 0; j < h - i - 1; j++)
        {
            printf(" ");
        }

        // for hashes
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }

        // for space between triangles
        {
            printf("  ");
        }

        // for hashes
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }

        printf("\n");
    }
}
