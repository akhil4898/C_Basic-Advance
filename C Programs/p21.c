// Write a program to calculate x power y.(when user input x is 2 and y is 3 then the result will be 8.


#include <stdio.h>

int power1(int, int);
int power2(int, int);
int power3(int, int);

// Using For loop...

int power1(int x, int y)
{
    int result = x;
    for (int i = 1; i < y; i++)
    {
        result = result * x;
    }
    return result;
}

// Using while loop...

int power2(int x, int y)
{
    int result = x, i = 1;
    while (i != y)
    {
        result = result * x;
        i++;
    }
    return result;
}

// Using recursion...

int power3(int x, int y)
{
// hgcgj
}

int main()
{
    int num1, num2;
    printf("Enter inputs: ");
    scanf("%d %d", &num1, &num2);
    printf("%d power %d is: %d\n", num1, num2, power1(num1, num2));
    printf("%d power %d is: %d\n", num1, num2, power2(num1, num2));
    printf("%d power %d is: %d\n", num1, num2, power3(num1, num2));
    return 0;
}