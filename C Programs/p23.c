// Write a program to count digits in a given number.

#include <stdio.h>

long long countDigit(long long);

long long countDigit(long long x)
{

    if(x == 0)
        return 1;
    long long digit = 0;
    while (x != 0)      
    {
        x = x / 10;     
        ++digit;
    }
    return digit;
}

int main()
{
    long long num;
    printf("Enter num: ");
    scanf("%lld", &num);
    printf("Digits count is: %lld\n", countDigit(num));
    return 0;
}

