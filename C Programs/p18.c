// Write a program to calculate product of first N natural numbers

#include <stdio.h>

int main()
{
    int size, product = 1;
    printf("Enter Size: ");
    scanf("%d", &size);
    for (int i = 1; i <= size; i++)
    {
        printf("%d ", i);
        product = product * i;
    }
    printf("\nProduct of first %d natural numbers is: %d\n",size, product);
    return 0;
}