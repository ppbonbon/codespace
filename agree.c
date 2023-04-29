#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = ger_cgar("DO you agreee? ");

    if (c == 'y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'n');
    {
        printf("Not agreed.");
    }
}