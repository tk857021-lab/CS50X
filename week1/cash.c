#include <cs50.h>
#include <math.h>
#include <stdio.h>
int main(void)
{
    float cents;
    int cents_owed;
    do
    {
        cents = get_float("cents in change ");
        cents_owed = round(cents * 1);
    }
    while (cents <= 0);

    int quarters = cents_owed / 25;
    int dimes = (cents_owed % 25) / 10;
    int nickels = ((cents_owed % 25) % 10) / 5;
    int pennies = ((cents_owed % 25) % 10) % 5;

    printf("%d\n", quarters + dimes + nickels + pennies);
}
