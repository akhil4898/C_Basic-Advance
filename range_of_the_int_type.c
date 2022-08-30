#include <limits.h>       // The range of the int type on a particular C implementation can be obtained via the INT_MAX and INT_MIN variables defined in the header <limits.h>:
#include <stdio.h>

int main()
{
	printf("minimum int value = %d\n"
		"maximum int value = %d\n"
		"size of int in bytes = %zu\n"           // Format specifier In “%zu” format, z is a length modifier and u stand for unsigned type.
		"size of int in bits = %zu\n", INT_MIN, INT_MAX, sizeof(int), sizeof(int) * CHAR_BIT);  //We should use “%zu” to print the variables of size_t length
		printf("Unix_max + 1 is: %u\n", UINT_MAX + 1);
		printf("Unix_max + 2 is: %u\n", UINT_MAX + 2);  //In the case of an unsigned int value, the maximum value is specified by the UINT_MAX macro, defined in <limits.h>, 
}
