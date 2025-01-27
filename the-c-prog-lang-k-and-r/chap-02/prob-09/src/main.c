#include <stdio.h>

void bin(unsigned x);
int bitcount(unsigned x);

int main(void)
{
    unsigned x = 102;

    bin(x);
    printf("%d\n", bitcount(x));

    return 0;
}

void bin(unsigned x)
{
    for (int i = sizeof(x) * 8 - 1; i >= 0; --i)
    {
        printf("%u", (x >> i) & 1u);

        if (i % 4 == 0)
        {
            putchar(' ');
        }
    }
    putchar('\n');
}

int bitcount(unsigned x)
{
    int i;

    for (i = 0; x != 0; x &= (x - 1))
    {
        ++i;
    }

    return i;
}