// Write a program to print first 10 even and Odd natural numbers And It's reverse.

#include <stdio.h>

void evenNaturalNo(int);
void oddNaturalNo(int);
void reverseEvenNaturalNo(int);
void reverseOddNaturalNo(int);

void evenNaturalNo(int n)
{
    printf("First %d even natural No: \n", n);
    for (int i = 1; i <= 2*n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}


void oddNaturalNo(int n)
{
    printf("\nFirst %d Odd natural No: \n", n);
    for (int i = 1; i <= 2*n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
        
    }
    printf("\n");
}


void reverseEvenNaturalNo(int n)
{
    printf("\nFirst %d even natural No in reverse order: \n", n);
    for (int i = 2 * n; i >= 1; i--)
    {
        if(i % 2 == 0)
            printf("%d ", i);
    }
    printf("\n");
}


void reverseOddNaturalNo(int n)
{
    printf("\nFirst %d odd natural No in reverse order: \n", n);
    for (int i = 2 * n; i >= 1; i--)
    {
        if(i % 2 != 0)
            printf("%d ", i);
    }
    printf("\n");
}


int main()
{
    int size;
    printf("Enter Size: ");
    scanf("%d", &size);
    evenNaturalNo(size);
    oddNaturalNo(size);
    reverseEvenNaturalNo(size);
    reverseOddNaturalNo(size);
    return 0;
}