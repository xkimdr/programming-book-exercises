#include <stdio.h>

void bin(unsigned x);
unsigned invert(unsigned x, unsigned p, unsigned n);

int main(void)
{
    unsigned x = 9713;
    unsigned p = 11;
    unsigned n = 4;

    bin(x);
    bin(invert(x, p, n));

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

unsigned invert(unsigned x, unsigned p, unsigned n)
{
    return x ^ ((~(~0u << n)) << (p + 1 - n));
}