#include <stdio.h>
#define MAX 1000
#define TRUE 1
#define FALSE 0

int main(void)
{
    int i = 0;
    int f = FALSE;
    char buff[MAX];

    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t')
        {
            buff[i] = (char)c;
            ++i;
            f = TRUE;
        }
        else if (c == '\n')
        {
            i = 0;
            f = FALSE;
            putchar('\n');
        }
        else
        {
            if (f == TRUE)
            {
                buff[i] = '\0';
                printf("%s", buff);
                i = 0;
                f = FALSE;
            }
            putchar(c);
        }
    }

    return 0;
}