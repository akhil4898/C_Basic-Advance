
#include <stdio.h>

int num;                // C allows a global variable to be declared again when first declaration doesn’t initialize the variable.
int num = 5;


// int x = 5;           //  ERROR:- redefinition of ‘x’
// int x = 10;

int main(){
    // int num;                     // ERROR:- redeclaration of ‘x’ with no linkage
    // int num = 5;


    // int x = 5;                   //  ERROR:- redefinition of ‘x’
    // int x = 10;
    printf("num is: %d\n", num);
    return 0;
}