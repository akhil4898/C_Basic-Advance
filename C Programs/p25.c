// Number is prime or not... 

#include <stdio.h>

int main()
{
    int num;
    printf("Enter num: ");
    scanf("%d", &num);
    printf("Num is: %d\n\n", num);
    int i = 2;
    while(i < num)
    {
        if(num % i == 0)
            printf("Not prime for %d\n", i);
        else
            printf("Prime for %d\n", i);
        i = i + 1;
    }

    return 0;
}