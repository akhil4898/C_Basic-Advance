//  Write a program to calculate factorial of a number

#include <stdio.h>

int Factorial(unsigned int);
int Factorial2(int);
unsigned int Factorial3(unsigned int);
int Factorial4(int);

// Using For Loop...
// Time Complexity: O(n)
// Auxiliary Space: O(1)

int Factorial(unsigned int x)
{
    int fact = 1;
    for (int i = 2; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}


// Using recursion...
// Time Complexity: O(n)
// Auxiliary Space: O(n)

int Factorial2(int x)
{
    if(x == 0)
        return 1;
    return (x * Factorial2(x - 1));
}

// Using while loop...
// Time Complexity: O(n)
// Auxiliary Space: O(1)

unsigned int Factorial3(unsigned int x)
{
    if(x == 0)
        return 1;
    int i = x, fact = 1;        // Here, i = 5
    while (x / i != x)          // (5/5 != 5) or (1 != 5)
    {
        fact = fact * i;        // (1 * 5) Now, fact = 5...
        i--;                    // Now, i = 4; And so on...
    }
    return fact;
}

// One line Solution (Using Ternary operator)....
// Time Complexity: O(n)  
// Auxiliary Space: O(n)

int Factorial4(int x)
{
    return (x == 0 || x == 1) ? 1 : (x * Factorial4(x -1));
}

int main()
{
    int num;
    printf("Enter num: ");
    scanf("%d", &num);
    printf("Factorial of %d is: %d\n", num, Factorial(num));
    printf("Factorial of %d is: %d\n", num, Factorial2(num));
    printf("Factorial of %d is: %d\n", num, Factorial3(num));
    printf("Factorial of %d is: %d\n", num, Factorial4(num));
    return 0;
}


