// Write a program to to find greater between two numbers

#include <stdio.h>

int findGreatestNo(int, int);
int findGreatestNo1(int, int);

// 1st Method... (Using If Else)...

int findGreatestNo(int x, int y)
{
    if(x > y)
        return x;
    else    
        return y;
}

// 2nd Method...(Using Ternary Operator)...

int findGreatestNo1(int x, int y)
{   
    return (x > y) ? x : y;
}


int main()
{
    int num1, num2, res;
    printf("Enter your inputs: ");
    scanf("%d %d", &num1, &num2);
    // res = findGreatestNo(num1, num2);
    res = findGreatestNo1(num1, num2);
    printf("Greatest Number is: %d\n", res);
    return 0;
}