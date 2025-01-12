#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main(void)
{
    int len = 0;
    int max = 0;
    char line[MAXLINE];
    char longest[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0)
    {
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0)
    {
        printf("%d\n", max);
        printf("%s", longest);
    }

    return 0;
}

int getline(char line[], int maxline)
{
    int i = 0;
    int c = 0;

    while (i < maxline - 1 && (c = getchar()) != EOF && c != '\n')
    {
        line[i] = (char)c;
        ++i;
    }

    if (c == '\n')
    {
        line[i] = (char)c;
        ++i;
    }

    line[i] = '\0';

    if (c != '\n' && c != EOF)
    {
        int k;
        while ((k = getchar()) != EOF && k != '\n')
        {
            ++i;
        }
    }

    return i;
}

void copy(char to[], char from[])
{
    int i = 0;
    while ((to[i] = from[i]) != '\0')
    {
        ++i;
    }
}