//1. Preprocessors also support if-else directives which are typically used for conditional compilation. 

// #include <stdio.h>

// #define COUNTRY "India"                                         // COUNTRY macro...

// void main()
// {
//     #ifdef COUNTRY                                              // if macro is defined then execute...
//         printf("%s is the great country...\n", COUNTRY);
//     #endif
//     #ifndef COUNTRY                                             // if macro is not defined then execute...
//         printf("I love  my country...\n");
//     #endif
// }





//2. The tokens passed to macros can be concatenated using operator ## called Token-Pasting operator.

// #include <stdio.h>

// #define ACTION(a,b) (a ## b + a * b)                        // ## Command for concatenation.

// int main(){
//     printf("Value of Action is: %d\n", ACTION(3,4));
//     return 0;

// }





// 3. The macros can take function like arguments, the arguments are not checked for data type. For example, the following macro INCREMENT(x) can be used for x of any data type.

// #include <stdio.h>
// #define INCREMENT(x) ++x
// int main()
// {
// 	char* ptr = "GeeksQuiz";            // 
//     printf("ptr is: %s", ptr);          // Here, we used "%s" format specifier because ptr contains a string.
//     printf(" %d\n", *ptr);              // When we print the (*ptr) then It will give "71" (Ascii code of Alphabet (G))..
// 	int x = 10;
// 	printf("%s ", INCREMENT(ptr));      // o/p = eeksQuiz
//     printf("%d\n", INCREMENT(x));       // o/p = 11
// 	return 0;
// }




//4. The macro arguments are not evaluated before macro expansion. For example, consider the following program

// #include <stdio.h>
// #define MULTIPLY(a, b) a * b
// int main()
// {
// 	// The macro is expanded as 2 + 3 * 3 + 5, not as 5*8
// 	printf("%d", MULTIPLY(2 + 3, 3 + 5));
// 	return 0;
// }
// // Output: 16





//5. The previous problem can be solved using following program 

// #include <stdio.h>
// // here, instead of writing a*a we write (a)*(b)
// #define MULTIPLY(a, b) (a) * (b)
// int main()
// {
// 	// The macro is expanded as (2 + 3) * (3 + 5), as 5*8
// 	printf("%d", MULTIPLY(2 + 3, 3 + 5));
// 	return 0;
// }
// // Output: 40




// 6. A token passed to macro can be converted to a string literal by using # before it.

// #include <stdio.h>
// #define get(a) #a
// int main()
// {
// 	// GeeksQuiz is changed to "GeeksQuiz"
// 	printf("%s", get(GeeksQuiz));
// }





//7. The macros can be written in multiple lines using ‘\’. The last line doesn’t need to have ‘\’.

// #include <stdio.h>

// #define PRINT(i, limit)						     \
// 	while (i < limit) {								 \
// 		printf("GeeksQuiz ");					     \
// 		i++;										 \
// 	}                                                
// int main()
// {
// 	int i = 0;
// 	PRINT(i, 3);
// 	return 0;
// }




//Important...
//8. The macros with arguments should be avoided as they cause problems sometimes. And Inline functions should be preferred as there is type checking parameter evaluation in inline functions. From C99 onward, inline functions are supported by C language also. 


// #include <stdio.h>

// #define square(x) x* x
// int main()
// {
// 	// Expanded as 36/6*6
// 	int x = 36 / square(6);
// 	printf("%d", x);
// 	return 0;
// }
// //Output: 36


// But we can write this code as follows to get the expected result i.e. 1:

// #include <stdio.h>

// #define square(x) (x * x)
// int main()
// {
// 	// Expanded as 36/(6*6)
// 	int x = 36 / square(6);
// 	printf("%d", x);
// 	return 0;
// }
// // Output: 1


// If we use inline functions, we get the expected output. Also, the program given in point 4 above can be corrected using inline functions.

//Normally GCC’s file scope is “not extern linkage”. That means inline function is never ever provided to the linker which is causing linker error, mentioned above.
//How to remove this error?
//To resolve this problem use “static” before inline. Using static keyword forces the compiler to consider this inline function in the linker, and hence the program compiles and run successfully.

// #include <stdio.h>
// static inline int square(int x) { return x * x; }
// int main()
// {
// 	int x = 36 / square(6);
// 	printf("%d\n", x);
// 	return 0;
// }
// //Output: 1






//9. There are some standard macros which can be used to print program file (__FILE__), Date of compilation (__DATE__), Time of compilation (__TIME__) and Line Number in C code (__LINE__)

// #include <stdio.h>

// int main()
// {
// 	printf("Current File :%s\n", __FILE__);
// 	printf("Current Date :%s\n", __DATE__;
// 	printf("Current Time :%s\n", __TIME__);
// 	printf("Line Number :%d\n", __LINE__);
// 	return 0;
// }






// 10. We can remove already defined macros using : #undef MACRO_NAME 

// #include <stdio.h>
// #define LIMIT 100
// int main()
// {
// 	printf("%d", LIMIT);
//     // removing defined macro LIMIT
//     #undef LIMIT
// 	// Next line causes error as LIMIT is not defined
// 	printf("%d", LIMIT);
// 	return 0;
// }

//  Another interesting fact about macro using (#undef)  

// #include <stdio.h>
// // div function prototype
// float div(float, float);
// #define div(x, y) x / y

// int main()
// {
// 	// use of macro div
// 	// Note: %0.2f for taking two decimal value after point
// 	printf("%0.2f", div(10.0, 5.0));
//     // removing defined macro div
//     #undef div
// 	// function div is called as macro definition is removed
// 	printf("\n%0.2f", div(10.0, 5.0));
// 	return 0;
// }

// // div function definition
// float div(float x, float y) { return y / x; }


