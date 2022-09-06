// Write a program to calculate sum of first N natural numbers

#include <stdio.h>

int sumOfNaturalNo(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
        sum = sum + i;
    }
    printf("\n");
    return sum;
}


int main()
{
    int size, res = 0;
    printf("Enter size: ");
    scanf("%d", &size);
    printf("First %d natural numbers: \n", size);
    res = sumOfNaturalNo(size);
    printf("Sum of %d natural numbers is: %d\n", size, res);
    return 0;
}