#include <stdio.h>
#define MAX 1000
char lower(char c);

int main(void)
{
    int c;
    int i = 0;
    char s[MAX];

    while ((c = getchar()) != '\n' && c != EOF)
    {
        s[i++] = (char)c;
    }

    s[i] = '\0';
    i = 0;

    while (s[i] != '0')
    {
        s[i] = lower(s[i]);
        ++i;
    }

    printf("%s\n", s);

    return 0;
}

char lower(char c)
{
    return (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c;
}