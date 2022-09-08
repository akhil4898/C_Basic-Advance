// Write a program to calculate sum of first N even and odd natural numbers.

#include <stdio.h>

int sumAllNaturalNo(int);
int sumOfEvenNo(int);
int sumOfOddNo(int);

int sumAllNaturalNo(int x)
{
    int sum = 0;
    for (int i = 1; i <= x; i++)
    {
        sum = sum + i;
    }
    return sum;
}

int sumOfEvenNo(int x)
{
    int sum = 0;
    for (int i = 1; i <= x; i++)
    {
        if (i % 2 == 0)
            sum = sum + i;
    }
    return sum;            
}

int sumOfOddNo(int x)
{
    int sum = 0;
    for (int i = 1; i <= x; i++)
    {
        if (i % 2 != 0)
            sum = sum + i;
    }
    return sum;
}

int main()
{
    int num;
    printf("Enter num: ");
    scanf("%d", &num);
    printf("Sum of %d natural numbers is: %d\n", num, sumAllNaturalNo(num));
    printf("Sum of %d even natural numbers is: %d\n", num, sumOfEvenNo(num));
    printf("Sum of %d odd natural numbers is: %d\n", num, sumOfOddNo(num));
    return(0);
}