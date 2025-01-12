#include <stdio.h>
#define MAX 100
#define TRUE 1
#define FALSE 0

int main(void)
{
    int words[MAX];

    for (int i = 0; i < MAX; ++i)
    {
        words[i] = 0;
    }

    int state = FALSE;
    int size = 0;

    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (state == TRUE)
            {
                ++words[size];
            }

            state = FALSE;
            size = 0;
        }
        else
        {
            ++size;
            state = TRUE;
        }
    }

    for (int i = 0; i < MAX; ++i)
    {
        int counts = words[i];

        if (counts != 0)
        {
            printf("%d: ", i);

            for (int j = 0; j < counts; ++j)
            {
                putchar('*');
            }

            putchar('\n');
        }
    }

    return 0;
}