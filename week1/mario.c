#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;

    do
    {
        n = get_int("what is n ?");
    }
    while (n < 1 || n > 8);
    // make a row
    for (int i = 0; i < n; i++)
    {
        // make a coloum
        for (int k = 0; k < n - i - 1; k++)
        {
            printf(" ");
        }

        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }

        // saprate row and coluom

        printf("\n");
    }
}
