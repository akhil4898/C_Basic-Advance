// Write a program to swap two numbers

#include <stdio.h>

int swapTwoNo(int*, int*);

int swapTwoNo(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
 
int main()
{
    int num1, num2;
    printf("Enter your inputs: ");
    scanf("%d %d", &num1, &num2);
    printf("Before swapping: num1 is: %d and num2 is: %d\n", num1, num2);
    swapTwoNo(&num1, &num2);
    printf("After swapping: num1 is: %d and num2 is: %d\n", num1, num2);
    return 0;
}