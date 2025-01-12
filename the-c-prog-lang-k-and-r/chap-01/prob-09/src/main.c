#include <stdio.h>

int main(void)
{
    int pc = -1;

    int c;
    while ((c = getchar()) != EOF)
    {
        if (c != ' ' || pc != ' ')
        {
            putchar(c);
        }
        pc = c;
    }

    return 0;
}