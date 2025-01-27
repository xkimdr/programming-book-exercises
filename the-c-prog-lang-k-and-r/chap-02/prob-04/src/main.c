#include <stdio.h>
#define MAX 1000

void squeeze(char s1[], char s2[]);

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

    squeeze(s1, s2);

    printf("%s\n", s1);

    return 0;
}

void squeeze(char s1[], char s2[])
{
    for (int i = 0; s2[i] != '\0'; i++)
    {
        int k = 0;
        for (int j = 0; s1[j] != '\0'; j++)
        {
            if (s1[j] != s2[i])
            {
                s1[k] = s1[j];
                ++k;
            }
        }
        s1[k] = '\0';
    }
}