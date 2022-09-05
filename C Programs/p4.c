//  How to print %d using printf in C language.

#include <stdio.h>

int main()
{
    printf("%%d\n");      // using extra (%) before format specifier.
    printf("%c\n", '%');   // print % as character.
    printf("%s\n", "%d");   // print %d as string. 
    return 0;
}