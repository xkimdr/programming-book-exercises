#include <stdio.h>
#define N 4

int main(void)
{
    int i = 0;
    char buff[N];

    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            i = 0;
            putchar(c);
        }
        else if (c == ' ' && i <= N - 2)
        {
            buff[i] = (char)c;
            ++i;
        }
        else if (c == ' ' && i == N - 1)
        {
            putchar('\t');
            i = 0;
        }
        else
        {
            if (i == N - 1)
            {
                buff[i] = (char)'\0';
                printf("%s", buff);
                i = 0;
            }
            putchar(c);
        }
    }

    return 0;
}