#include <stdio.h>
#define TRUE 1
#define FALSE 0

int main(void)
{
    int cf = FALSE;
    int cff = FALSE;
    int qf = FALSE;

    int c;
    while ((c = getchar()) != EOF)
    {
        if (!cf && !cff && !qf)
        {
            if (c == '/')
            {
                c = getchar();
                if (c == '*')
                {
                    cf = TRUE;
                }
                else if (c == '/')
                {
                    cff = TRUE;
                }
                else
                {
                    putchar('/');
                    putchar(c);
                }
            }
            else if (c == '\"')
            {
                qf = TRUE;
                putchar(c);
            }
            else
            {
                putchar(c);
            }
        }
        else if (cf)
        {
            if (c == '*')
            {
                c = getchar();
                if (c == '/')
                {
                    cf = FALSE;
                }
            }
        }
        else if (cff)
        {
            if (c == '\n')
            {
                cff = FALSE;
                putchar(c);
            }
        }
        else if (qf)
        {
            if (c == '\"')
            {
                qf = FALSE;
            }
            putchar(c);
        }

        else
        {
            putchar(c);
        }
    }

    return 0;
}