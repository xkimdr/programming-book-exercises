#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    printf("Signed char minimum: %d\n", SCHAR_MIN);
    printf("Signed char maximum: %d\n", SCHAR_MAX);
    printf("Unsigned char maximum: %u\n\n", UCHAR_MAX);

    printf("Signed short minimum: %d\n", SHRT_MIN);
    printf("Signed short maximum: %d\n", SHRT_MAX);
    printf("Unsigned short maximum: %u\n\n", USHRT_MAX);

    printf("Signed int minimum: %d\n", INT_MIN);
    printf("Signed int maximum: %d\n", INT_MAX);
    printf("Unsigned int maximum: %u\n\n", UINT_MAX);

    printf("Signed long minimum: %ld\n", LONG_MIN);
    printf("Signed long maximum: %ld\n", LONG_MAX);
    printf("Unsigned long maximum: %lu\n\n", ULONG_MAX);

    printf("Signed long long minimum: %lld\n", LLONG_MIN);
    printf("Signed long long maximum: %lld\n", LLONG_MAX);
    printf("Unsigned long long maximum: %llu\n\n", ULLONG_MAX);

    printf("Float minimum positive value: %e\n", FLT_MIN);
    printf("Float maximum value: %e\n", FLT_MAX);
    printf("Float epsilon: %e\n\n", FLT_EPSILON);

    printf("Double minimum positive value: %e\n", DBL_MIN);
    printf("Double maximum value: %e\n", DBL_MAX);
    printf("Double epsilon: %e\n\n", DBL_EPSILON);

    printf("Long double minimum positive value: %Le\n", LDBL_MIN);
    printf("Long double maximum value: %Le\n", LDBL_MAX);
    printf("Long double epsilon: %Le\n", LDBL_EPSILON);

    return 0;
}
