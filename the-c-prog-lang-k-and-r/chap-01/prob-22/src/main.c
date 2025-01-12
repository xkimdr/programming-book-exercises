#include <stdio.h>
#define L 80

int main(void)
{
    int i = 0;

    int c;
    while ((c = getchar()) != EOF)
    {
        ++i;
        putchar(c);

        if (i == L || c == '\n')
        {
            if (i == L)
            {
                putchar('\n');
            }
            i = 0;
        }
    }

    return 0;
}