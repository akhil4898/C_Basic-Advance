#include <stdio.h>


int main(int argc, char *argv[])
{
    int i;
    for ( i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);       // It will print the string as it is all the arguments give...
    }
    int j;
    for (j = 0; j < argc; j++)
    {
        printf("%s\n", argv[j]);    // It will print ascii code of first character of string of all arguments...
                                    // like:- ./a.out = 46, amit = 97, 5 = 53 etc..
    }
    return 0;
}

