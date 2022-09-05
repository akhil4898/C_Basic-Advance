// Write a program which takes input as integers only that is restrict other characters from input.


// C program for the above approach
#include <stdio.h>
int getIntegerOnly();

// Driver Code
int main()
{
	int x = 0;
	x = getIntegerOnly();
	printf("\nvalue entered is: %d\n", x);
}

// Function to check if the user
// entered value is integer or not

int getIntegerOnly()
{
	int num = 0; 
	char ch;
	printf("Enter the input: ");
	
    do {
		ch = getchar();
		
		// Checks the ASCII code of '
		// digits 0 to 9
		if (ch >= 48 && ch <= 57) {
			printf("%c", ch);

			// To make a digit
			num = num * 10 + (ch - 48);
		}

		// 13 is carriage return it breaks
		// and return the input
		if (ch == '\n')
			break;
	} while (1);

	return num;

// Uisng While loop...

    // while (1)
    // {
    //     ch = getchar();
    //     if(ch >= 48 && ch <= 57)
    //     {
    //         printf("%c", ch);
    //         num = num * 10 + (ch - 48);
    //     }

    //     if (ch == '\n')
    //     {
    //         break;
    //     }
        
    // }
    
}
