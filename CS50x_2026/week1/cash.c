#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    int coins = 0;
    // for quarters
    while (cents >= 25)
    {
        cents -= 25;
        coins++;
    }

    // for dimes
    while (cents >= 10)
    {
        cents -= 10;
        coins++;
    }

    // for nickels
    while (cents >= 5)
    {
        cents -= 5;
        coins++;
    }

    // for pennies
    while (cents >= 1)
    {
        cents -= 1;
        coins++;
    }

    printf("%d\n", coins);
}
