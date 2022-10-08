#include <stdio.h>

int main(){
    int x;
    int *adx;
    x = 10;
    adx = &x;
    printf("Value of X is: %d\n", x);
    printf("Address of X is: %p\n", adx);
    *adx = 20;
    printf("Value of X is: %d\n", x);
    printf("Address of X is: %p\n", adx);
    return 0;
}