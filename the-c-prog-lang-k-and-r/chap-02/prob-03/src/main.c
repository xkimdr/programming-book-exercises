#include <stdio.h>
#define MAX 1000

int htoi(char s[]);

int main(void)
{
    int c;
    int i = 0;
    char s[MAX];

    while ((c = getchar()) != EOF && c != '\n')
    {
        s[i++] = (char)c;
    }

    s[i] = '\0';

    printf("%d\n", htoi(s));

    return 0;
}

int htoi(char s[])
{
    int i = 0;
    int x;

    if (s[i] == '0')
    {
        if ((x = s[++i]) == 'x' || x == 'X')
        {
            ++i;
        }
        else
        {
            --i;
        }
    }

    int n = 0;
    int m = 0;

    while (s[i] != '\0')
    {
        x = s[i];

        if (x >= '0' && x <= '9')
        {
            m = x - '0';
        }
        else if (x >= 'a' && x <= 'f')
        {
            m = x - 'a' + 10;
        }
        else
        {
            m = x - 'A' + 10;
        }

        n = 16 * n + m;
        ++i;
    }

    return n;
}