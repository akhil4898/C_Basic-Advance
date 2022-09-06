// Write a program to print table of user’s choice

#include <stdio.h>

int main()
{
    int num;
    printf("Enter Integer: ");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", num, i, num*i);
    }
    return 0;
}