#include <stdio.h>
#include <string.h>

void main()
{
    int x = ~12;
    int y = -x;
    printf("Size is: %ld\n",sizeof(char));
    printf("Size is: %ld\n",sizeof(x));
    printf("Size is: %ld\n",sizeof('a'));
    printf("Value of x is: %d %d\n", x, y);

}