#include <stdio.h>

void f1();
int num;

int main()
{   
    extern int num;
    printf("%d\n", num);
    f1();
    printf("%d\n", num);
}

// int num;

void f1()
{
    num++;
    printf("%d\n", num);
}


// #include <stdio.h>

// void A()
// {
//     printf("You are in A file and we have to update it...\n");
// }


// void A1()
// {
//     printf("You are in A1\n");
// }

// void b(void (*p)())
// {
//     (*p)();
// }

// int main()
// {
//     b(&A);
//     b(&A1);
//     b(&A);
//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>

// int sum (int a, int b)
// {
//     return a + b;
// }

// int threeSum(int a, int b, int c)
// {
//     return a + b + c;
// }

// void greetHelloAndExecute(int (*fptr)(int, int)){
//     printf("Hello user...How are you??\n");
//     printf("The sum of 5 and 7 is %d\n", fptr(5, 7));
    
// }

// void greetGmAndExecute(int (*fptr)(int, int)){
//     printf("Good Morning User\n");
//     printf("The sum of 5 and 7 is %d\n", fptr(5, 7));
// }

// void greetGnAndExecute(int (*p)(int, int, int))
// {
//     printf("Good Night Akhil...\n");
//     printf("Sum of three digits are: %d\n", (*p)(20, 15, 5));
// }

// void b(void (*ptr)())
// {
//         // (*ptr)();
//         ptr();
// }

// void print()
// {
//     printf("Hi\n");
// }
// int main()
// {
//     int (*ptr)(int, int);
//     ptr = &sum;
//     int (*p)(int, int, int);
//     p = &threeSum;
//     greetGnAndExecute(p);
//     void (*fptr)();
//     fptr = print;
//     b(fptr);
//     // greetGnAndExecute(&threeSum);
//     greetHelloAndExecute(ptr);
//     greetGmAndExecute(ptr);
//     return 0;
// }
