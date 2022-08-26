#include <stdio.h>

typedef enum Boolean DEC;                  // typedef enum Boolean data type

enum Boolean // Data type of enum...                         
{
    false = 5, true, akhil, nikhil
};

int main()
{
    DEC x, y;                               // declare variable of enum...
    x = akhil;
    y = nikhil;
    printf("Value of x is: %d and y is: %d\n", x, y);
}