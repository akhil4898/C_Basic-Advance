// Write a program to add two numbers.

#include <stdio.h>

int sum(int, int);

int sum(int x, int y){
    return x + y;
}

int main()
{
    int num1, num2;
    printf("Enter the value of num1 and num2: ");
    scanf("%d %d", &num1, &num2);
    printf("Sum of %d and %d is: %d\n", num1, num2, sum(num1, num2));
    return 0;
}