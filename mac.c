#include <stdio.h>

#define COUNTRY "India"                                         // COUNTRY macro...

void main()
{
    #ifdef COUNTRY                                              // if macro is defined then execute...
        printf("%s is the great country...\n", COUNTRY);
    #endif
    #ifndef COUNTRY                                             // if macro is not defined then execute...
        printf("I love  my country...\n");
    #endif
}


// #include <stdio.h>

// #define ACTION(a,b) (a ## b + a * b)                        // ## Command for concatenation.

// int main(){
//     printf("Value of Action is: %d\n", ACTION(3,4));
//     return 0;

// }