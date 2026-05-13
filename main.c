#include<stdio.h>
#include "numberclassification.h"       
int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("%d is %s.\n", number, odd_or_even(number));
    print_primes(number);

    return 0;
}