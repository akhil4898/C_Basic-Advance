#include <stdio.h>

void f1();
int x;

int main()
{   
    extern int x;
    printf("%d\n", x);
    f1();
    printf("%d\n", x);
}

// int x;

void f1()
{
    x++;
    printf("%d\n", x);
}