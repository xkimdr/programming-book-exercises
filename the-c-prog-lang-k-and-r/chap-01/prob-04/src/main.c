#include <stdio.h>

int main(void)
{
    int lower = 0;
    int upper = 300;
    int step = 20;

    float celcius = (float)lower;

    printf("celcius fahr\n");

    while (celcius <= upper)
    {
        float fahr = (9 / 5 * celcius) + 32;
        printf("%7.0f %4.0f\n", celcius, fahr);

        celcius += (float)step;
    }

    return 0;
}