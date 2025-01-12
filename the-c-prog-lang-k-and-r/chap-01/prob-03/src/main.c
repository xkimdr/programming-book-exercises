#include <stdio.h>

int main(void)
{
    int lower = 0;
    int upper = 300;
    int step = 20;

    float fahr = (float)lower;

    printf("fahr celcius\n");

    while (fahr <= upper)
    {
        float celcius = (5 / 9.0f) * (fahr - 32);
        printf("%4.0f %7.1f\n", fahr, celcius);

        fahr += (float)step;
    }

    return 0;
}