// Write a program to print first 10 natural numbers...

#include <stdio.h>

void naturalNo(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
}

void reverseNaturalNo(int n)
{
    for (int i = n; i >= 1; i--)
    {
        printf("%d ", i);
    }
    printf("\n");
}

int main()
{
    int size;
    printf("Enter the Size: ");
    scanf("%d", &size);
    printf("First %d natural numbers are: \n", size);
    naturalNo(size);
    reverseNaturalNo(size);
    return 0;
}