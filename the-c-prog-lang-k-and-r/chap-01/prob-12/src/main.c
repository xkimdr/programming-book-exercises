#include <stdio.h>
#define TRUE 1
#define FALSE 0

int main(void)
{
    int state = FALSE;

    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t')
        {
            state = TRUE;
        }
        else
        {
            if (state == TRUE)
            {
                state = FALSE;
                putchar('\n');
            }
            putchar(c);
        }
    }

    return 0;
}