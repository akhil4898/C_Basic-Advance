#include <stdio.h>

int main(void)   // with void is considered technically better as it clearly specifies that main can only be called without any parameter. 
{
    int a = 10, b = 8, c;
    c = a + b;
    printf("%d\n", c);
    return 0;   
}





// So the difference is, in C, int main() can be called with any number of arguments, but int main(void) can only be called without any argument. Although it doesn’t make any difference most of the times, using “int main(void)” is a recommended practice in C.



// #include <stdio.h>
// int main(void)             // but int main(void) can only be called without any argument.
// {
// 	static int i = 5;
// 	if (--i){
// 		printf("%d ", i);
// 		main(10);
// 	}
// }




// #include <stdio.h>
// int main()                  // int main() can be called with any number of arguments, 
// {
// 	static int i = 5;
// 	if (--i){
// 		printf("%d ", i);
// 		main(10);
// 	}
// }

