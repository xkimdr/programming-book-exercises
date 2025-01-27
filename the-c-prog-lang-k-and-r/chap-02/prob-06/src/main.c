#include <stdio.h>

void bin(unsigned x);
unsigned setbits(unsigned x, unsigned p, unsigned n, unsigned y);

int main(void)
{
    unsigned x = 9713;
    unsigned p = 11;
    unsigned n = 4;
    unsigned y = 3500;

    bin(x);
    bin(y);
    bin(setbits(x, p, n, y));

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

unsigned setbits(unsigned x, unsigned p, unsigned n, unsigned y)
{
    return (x & ~(~(~0u << n) << (p - n + 1))) | (y & ~(~0u << n)) << (p - n + 1);
}