#include <stdio.h>

float fahr_to_celcius(int fahr);

int main(void)
{
    for (int fahr = 0; fahr <= 300; fahr += 20)
    {
        printf("%4d %6.1f\n", fahr, fahr_to_celcius(fahr));
    }

    return 0;
}

float fahr_to_celcius(int fahr)
{
    return (5 / 9.0f) * ((float)fahr - 32);
}