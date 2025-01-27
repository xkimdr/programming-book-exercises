#include <stdio.h>
#define MAXLINE 1000

int getline(char s[], int lim);

int main(void)
{
    int len;
    char line[MAXLINE];

    len = getline(line, MAXLINE);

    printf("%d\n", len);
    printf("%s", line);

    return 0;
}

int getline(char s[], int lim)
{
    int c = 0;
    int i = 0;
    int f = 1;

    while (f)
    {
        if (i >= lim - 1)
        {
            f = 0;
        }
        else if ((c = getchar()) == EOF)
        {
            f = 0;
        }
        else if (c == '\n')
        {
            f = 0;
        }
        else
        {
            s[i] = (char)c;
            ++i;
        }
    }

    if (c == '\n')
    {
        s[i] = (char)c;
        ++i;
    }

    s[i] = '\0';
    return i;
}