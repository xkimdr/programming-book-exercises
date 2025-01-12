#include <stdio.h>
#define M 1000

void reverse(char buff[], char rbuff[], int i);

int main(void)
{
    int i = 0;
    char buff[M];
    char rbuff[M];

    int c;
    while ((c = getchar()))
    {
        if (c == '\n' || c == EOF)
        {
            buff[i] = '\0';
            reverse(buff, rbuff, i);
            printf("%s", rbuff);
            i = 0;

            if (c == '\n')
            {
                putchar('\n');
            }
            else
            {
                break;
            }
        }
        else
        {
            buff[i] = (char)c;
            ++i;
        }
    }

    return 0;
}

void reverse(char buff[], char rbuff[], int i)
{
    int j = 0;
    while (j < i)
    {
        rbuff[i - 1 - j] = buff[j];
        ++j;
    }
    rbuff[i] = '\0';
}