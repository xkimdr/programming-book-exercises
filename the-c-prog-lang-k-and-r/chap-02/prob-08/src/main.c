#include <stdio.h>

void bin(unsigned x);
unsigned rightrot(unsigned x, unsigned n);

int main(void)
{
    unsigned x = 245;
    unsigned n = 5;

    bin(x);
    bin(rightrot(x, n));

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

unsigned rightrot(unsigned x, unsigned n)
{
    return (x >> n) | ((x & ~(~0u << n)) << (sizeof(x) * 8 - n));
}