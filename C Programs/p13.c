// C Program to check leap year 

#include <stdio.h>
#include <stdbool.h>
//  1st Method...(Check Leap Year using Macros...)
#define ISLP(y) ((y % 400 == 0) || (y % 100 != 0) && (y % 4 == 0))

void checkLeapYear(int);
void checkLeapYear2(int);
bool checkLeapYear3(int);
int checkLeapYear4(int);

// 2nd Method...(Check Leap Year using If Else ladder...)
void checkLeapYear(int x)
{
    if(x % 4)                               // It returns false(0) and True(1), If x is divisible by 4, then statement is false. And If x is not divisible by 4, then statement is true...And print("Not leap year")...
        printf("Not leap year...\n");
    else if (x % 100)                       // It returns false(0) and True(1), If x is divisible by 100, then statement is false. And If x is not divisible by 100, then statement is true...And print("leap year")...
        printf("leap year");
    else if(x % 400)                        // It returns false(0) and True(1), If x is divisible by 400, then statement is false. And If x is not divisible by 400, then statement is true...And print("Not leap year")...
        printf("Not leap year...\n");
    else    
        printf("leap year...\n");
}

// 3rd Method...(using If Else ladder...)
void checkLeapYear2(int x)
{
    if(x % 400 == 0)
        printf("Leap Year...\n");
    else if(x % 100 == 0)
        printf("Not Leap Year...\n");
    else if(x %4 == 0)
        printf("Leap Year...\n");
    else
        printf("Not Leap Year...\n");
}


// 4th Method...(Using Bool Function...)
bool checkLeapYear3(int x)
{
    if (x % 400 == 0)
        return true;
    else if (x % 100 == 0)
        return false;
    else if (x % 4 == 0)
        return true;
    else
        return false;
}

// 5th Method...(One line code using Bitwise (And/OR))
int checkLeapYear4(int x)
{
    return (((x % 4 == 0) && (x % 100 != 0)) || (x % 400 == 0));
}

int main()
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    checkLeapYear2(year);
    checkLeapYear3(year) ? printf("Leap Year...\n") : printf("Not Leap Year...\n");
    checkLeapYear4(year) ? printf("Leap Year...\n") : printf("Not Leap Year...\n");
    ISLP(year) ? printf("Leap Year...\n") : printf("Not Leap Year...\n");                  // using #define Macros...

    return 0;
}