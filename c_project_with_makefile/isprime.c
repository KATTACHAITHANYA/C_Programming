#include<stdio.h>
#include <math.h>

int is_prime(int n)
{
    if (n <= 1)
        return 0;
    if (n <= 3)
        return 1;
    if (n % 2 == 0)
        return 0;

    int limit = (int)sqrt((double)n);
    for (int i = 3; i <= limit; i += 2) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

void print_primes(int max)
{
    printf("Prime numbers up to %d:\n", max);
    for (int i = 2; i <= max; ++i) {
        if (is_prime(i))
            printf("%d ", i);
    }
    printf("\n");
}
 