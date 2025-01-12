#include <stdio.h>
#define MAX 100

int main(void)
{
    int chars[MAX];

    for (int i = 0; i < MAX; ++i)
    {
        chars[i] = 0;
    }

    int c;
    while ((c = getchar()) != EOF)
    {
        if (c >= ' ' && c <= '~')
        {
            ++chars[c - ' '];
        }
    }

    for (int i = 0; i < MAX; ++i)
    {
        int counts = chars[i];

        if (counts != 0)
        {
            printf("%c: ", i + ' ');

            for (int j = 0; j < counts; ++j)
            {
                putchar('*');
            }

            putchar('\n');
        }
    }

    return 0;
}