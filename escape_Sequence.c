// The ASCII characters set and the extended ASCII characters set. But apart from that, some other characters are also there which are not the part of any characters set, known as ESCAPE characters.

//1. 		\a			Alert (bell, alarm)
//2. 		\b			Backspace
//3. 		\f			Form feed (new page)
//4. 		\n			New-line
//5. 		\r			Carriage return
//6. 		\t			Horizontal tab
//7. 		\v			Vertical tab
//8. 		\'			Single quotation mark
//9. 		\"			Double quotation mark
//10. 		\?			Question mark
//11. 		\\			Backslash

#include <stdio.h>
int main(void)
{
	printf("My mobile number "
		   "is 7\a8\a7\a3\a9\a2\a3\a4\a0\a8\a\n");




	printf("this is\b of escape seq\b...\n");
	printf("bvhjbjk\fform\n");
	printf("this is akhil \r   upadhyay\n");
	return (0);
}


