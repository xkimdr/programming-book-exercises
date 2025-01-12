#include <stdio.h>
#define MAX 80

int main(void)
{
    int i = 0;
    char line[MAX + 1];

    int c;
    while ((c = getchar()) != EOF)
    {
        ++i;

        if (i <= 80 && c == '\n')
        {
            i = 0;
        }
        else if (i > 80)
        {
            if (i == 81)
            {
                printf("%s", line);
            }

            putchar(c);

            if (c == '\n')
            {
                i = 0;
            }
        }
        else
        {
            line[i - 1] = (char)c;
            if (i == 80)
            {
                line[i] = '\0';
            }
        }
    }

    return 0;
}