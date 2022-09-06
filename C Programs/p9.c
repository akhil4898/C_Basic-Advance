// Write a program to check whether a given number is divisible by 5 or not.

#include <stdio.h>

void divisibleByFive(int);


void divisibleByFive(int x)
{
    int rem = x % 5;
    if (rem == 0)
        printf("Divisible by Five...\n");
    else
        printf("Not Divisible by Five...\n");
}

int main()
{
    int num;
    printf("Enter your input: ");
    scanf("%d", &num);
    divisibleByFive(num);
    return 0;
}