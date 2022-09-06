// Write a program to to find greater among three numbers


#include <stdio.h>

int findGreatestNo(int, int, int);
int findGreatestNo1(int, int, int);

// 1st Method... (Using If Else)...
// Optimized only check Two condition...
int findGreatestNo(int x, int y, int z)
{
    if (x > y)
        if (x > z)
            return x;
        else        
            return z;
    else 
        if (y > z)
            return y;
        else
            return z;   
}

// 2nd Method...(Using Ternary Operator)...

int findGreatestNo1(int x, int y, int z)
{   
    return (x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z);
}


int main()
{
    int num1, num2, num3, res;
    printf("Enter your inputs: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    res = findGreatestNo(num1, num2, num3);
    printf("Greatest Number is: %d\n", res);
    res = findGreatestNo(num1, num2, num3);
    printf("Greatest Number is: %d\n", res);
    return 0;
}