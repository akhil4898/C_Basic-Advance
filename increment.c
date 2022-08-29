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

   
   
    // int a = 5, b = 10, c;        
    // c = (a+++ ++b);                       // lexical Analyser   |a| |++| |+| |++| |b|   = 16;
    // printf("%d", c);
    // printf("%d\n", (a+++b));
    // printf("%d %d\n", a, b);
	return 0; 
}


//  i++ = 1;  (2)
//  ++i = 3;
//  i   = 3;