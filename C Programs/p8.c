//  Write a program to check whether a number is even or odd

#include <stdio.h>

void checkEvenOdd(int);
void checkEvenOdd2(int);
void checkEvenOdd3(int);

// 1st Method...
// Time Complexity: O(1) And Auxiliary Space: O(1)

void checkEvenOdd(int x)
{
    int rem = x % 2;
    if (rem == 0)
        printf("Num is Even...\n");
    else
        printf("Num is Odd...\n");
}

// 2nd Method... (use Bitwise Operators)
// Time Complexity: O(1) And Auxiliary Space: O(1)

// The idea is to check whether the last bit of the given number N is 1 or not. To check whether the last bit is 1 find the value of (N & 1). If the result is 1, then print “Odd”. Otherwise, print “Even”.

// If N = 5.
// Binary representation of 5 is 00000101
// Binary representation of 1 is 00000001
// ——————————————————————-
// The value of Bitwise AND is 00000001
// Since the result is 1. Therefore, the number N = 5 is odd.

void checkEvenOdd2(int x)
{
    if (x & 1)
        printf("Num is Odd...\n");
    else
        printf("Num is Even...\n");
}


// 3rd Method... 
// Time Complexity: O(1) And Auxiliary Space: O(1)

// The idea is to initialize an integer variable var as 1 and change it from 1 to 0 and vice-versa alternately, N times. If var is equal to 1 after N operations, print “Even”. Otherwise, print “Odd”.

void checkEvenOdd3(int x)
{
    int var = 0;          // If var is intialized with zero.. 
    for (int i = 0; i < x; i++)
    {
        var = 1 - var;
    }

// If var is intialized with zero... Then check condition with zero...
// If var is intialized with one... Then check condition with one... 
    if(var == 0)           
        printf("Num is Even...\n");
    else
        printf("Num is Odd...\n");
}


int main()
{
    int num;
    printf("Enter your inputs: ");
    scanf("%d", &num);
    checkEvenOdd(num);
    checkEvenOdd2(num);
    checkEvenOdd3(num);
    return 0;
}
