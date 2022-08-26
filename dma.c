#include <stdio.h>
#include <stdlib.h>

void main()
{
    float *p;
    int *q;
    p = (float *)malloc(4);
    q = (int *)malloc(8);
    *q = 45;
    *p = 3.04;
    printf("value of malloc is: %f %d\n", *p, *q);
    printf("Address of malloc is: %p %p\n", p, q);
}