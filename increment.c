#include<stdio.h>
int main()
{
	int i = 1;
	printf("%d %d %d\n", i, ++i, i++); 
    i = 1;           //  3   3    1  
	printf("%d %d %d\n", i++, ++i, i);        //Unary operator working form right to left...
    //                    2    3   3
    i = 1;
	printf("%d %d %d\n", ++i, i++, i);   
    //                    3    1   3
    i = 1;
    printf("%d %d %d\n", ++i, i, i++);
    //                  3    3   1
    i = 10;
    printf("%d %d %d\n", i, i++, ++i);
    //                   12  11   12
    i = 100;
    printf("%d %d %d\n", i++, i, ++i);
    //                   101  102 102  
   
    // int a = 5, b = 10, c;        
    // c = (a+++ ++b);                             // lexical Analyser(Tokens)  |a| |++| |+| |++| |b|   = 16;
    // printf("%d\n", c);
    // printf("%d\n", (a+++b));
    // printf("%d\n", (++a+b++));
    // printf("a is: %d and b is: %d\n", a, b);
	return 0; 
}


// |a| |++| |+| |++| |b| = 5 + 11 = 16.
// |a| |++| |+| |b| = 6 + 11 = 17.
// |++| |a| |+| |b| |++| = 8 + 11 = 19.
// a = 8, b = 12.....

