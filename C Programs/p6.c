// Write a program to swap two numbers without using third variable

#include <stdio.h>

void swapTwoNo(int, int);
void swapTwoNo2(int, int);
void swapTwoNo3(int, int);
void swapTwoNo4(int, int);

// 1st Method...(Using Arithmetic Operators)
// Time Complexity: O(1) And Auxiliary Space: O(1).

void swapTwoNo(int x, int y)
{
    x = x + y;
    y = x - y;
    x = x - y;
    printf("After swapping: num1 is: %d And num2 is: %d\n", x, y);
}


// 2nd Method...(Multiplication and division can also be used for swapping.)
// Time Complexity: O(1) And Auxiliary Space: O(1).

void swapTwoNo2(int x, int y)
{
    x = x * y;
    y = x / y;
    x = x / y;
    printf("After swapping: num1 is: %d And num2 is: %d\n", x, y);
}

// 3rd method... (Using Bitwise XOR) 
// Time Complexity: O(1) And Auxiliary Space: O(1).

void swapTwoNo3(int x, int y)
{
     // Code to swap 'x' = 10 (1010) and 'y' = 5 (0101)
    x = x ^ y;   // x now becomes 15 (1111)
    y = x ^ y;   // y becomes 10 (1010)
    x = x ^ y;   // x becomes 5 (0101)
    printf("After swapping: num1 is: %d And num2 is: %d\n", x, y);
}

// 4th method... (One Line Expression) 
// Time Complexity: O(1) And Auxiliary Space: O(1).

// We can write only one line to swap two numbers.
//           x = x ^ y ^ (y = x);
//           x = x + y – (y = x);
//           x = (x * y) / (y = x);
//           x , y = y, x (In Python)

void swapTwoNo4(int x, int y)
{
    // x = (x * y) / (y = x);     // Multipilcation and Division...
    // x = (x + y) - (y = x);     // Addition and subtraction...
    x = x ^ y ^ (y = x);          // Bitwisw XOR...
    printf("After swapping: num1 is: %d And num2 is: %d\n", x, y);
}

int main()
{
    int num1, num2;
    printf("Enter your inputs: ");
    scanf("%d %d", &num1, &num2);
    printf("Before swapping: num1 is: %d And num2 is: %d\n", num1, num2);
    swapTwoNo(num1, num2);
    swapTwoNo2(num1, num2);
    swapTwoNo3(num1, num2);
    swapTwoNo4(num1, num2);
    return 0;
}