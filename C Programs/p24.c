// Bitwise Not Operator in C.


#include <stdio.h>

int main()
{
    int x; 
    x = ~10;
    printf("%d\n", x);
    printf("%d\n", ~x);
    return 0;
}


/*
Steps to find the value of X:-
-----------------------------
1. We need to find binary number of 10.
2. Now take 2's complement of binary number and then we will get the result with minus sign... 

ex- 10 = 0000 0000 0000 1010
   ~10 = 1111 1111 1111 0101

   Here, (MSB) is 1, then sign will be negative... If 0, then sign will be positive...
 
   Now, 10 is the 1's complement of ~10.
   now find 2's complement.
   -------------------------
   0000 0000 0000 1010
                    +1
   -------------------------
   0000 0000 0000 1011       =  11
   -------------------------

And Result will be -11. Because of (MSB)... 

*/