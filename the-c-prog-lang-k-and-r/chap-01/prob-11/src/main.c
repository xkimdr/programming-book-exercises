#include <stdio.h>
#define TRUE 1
#define FALSE 0

int main(void)
{
    int chars = 0;
    int words = 0;
    int newlines = 0;

    int state = FALSE;

    int c;
    while ((c = getchar()) != EOF)
    {
        ++chars;

        if (c == '\n')
        {
            ++newlines;
        }

        if (c == ' ' || c == '\t' || c == '\n')
        {
            state = FALSE;
        }
        else if (state == FALSE)
        {
            state = TRUE;
            ++words;
        }
    }

    printf("%d %d %d\n", newlines, words, chars);

    return 0;
}