#include <stdio.h>

int main(void)
{
    for (int fahr = 300; fahr >= 0; fahr -= 20)
    {
        printf("%3d %6.1f\n", fahr, (5 / 9.0f) * ((float)fahr - 32));
    }

    return 0;
}