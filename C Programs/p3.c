// Write a program which takes input as integers only that is restrict other characters from input.

// #include <stdio.h>

// int getIntegerOnly();

// int main()
// {   
//     int num = 10;
//     printf("value of num is: %d\n", num);
//     num = getIntegerOnly();
//     printf("Now, Enter the value of num: ");
//     scanf("%d", &num);
//     printf("value of num is: %d\n", num);
//     return 0;
// }

// int getIntegerOnly()
// {
    
// }


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
	int num = 0, ch;
	printf("Enter the input: ");
	
    // do {
	// 	ch = getchar();
		
	// 	// Checks the ASCII code of '
	// 	// digits 0 to 9
	// 	if (ch >= 48 && ch <= 57) {
	// 		printf("%c", ch);

	// 		// To make a digit
	// 		num = num * 10 + (ch - 48);
	// 	}

	// 	// 13 is carriage return it breaks
	// 	// and return the input
	// 	if (ch == '\n')
	// 		break;
	// } while (1);

    while (1)
    {
        ch = getchar();
        if(ch >= 48 && ch <= 57)
        {
            printf("%c", ch);
            num = num * 10 + (ch - 48);
        }

        if (ch == '\n')
        {
            break;
        }
        
    }
    
	return num;
}
