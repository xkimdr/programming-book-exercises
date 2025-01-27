#include <stdio.h>
#define MAX 1000

int any(char s1[], char s2[]);

int main(void)
{
    int c;
    char s1[MAX];
    char s2[MAX];
    int i = 0;

    while ((c = getchar()) != '\n')
    {
        s1[i++] = (char)c;
    }

    s1[i] = '\0';
    i = 0;

    while ((c = getchar()) != '\n' && c != EOF)
    {
        s2[i++] = (char)c;
    }

    s2[i] = '\0';

    printf("%d\n", any(s1, s2));

    return 0;
}

int any(char s1[], char s2[])
{
    for (int i = 0; s1[i] != '\0'; ++i)
    {
        for (int j = 0; s2[j] != '\0'; ++j)
        {
            if (s1[i] == s2[j])
            {
                return i;
            }
        }
    }
    return -1;
}
