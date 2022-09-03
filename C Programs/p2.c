// Write a program to calculate area of a circle.

#include <stdio.h>
#define PI 3.14

float areaOfCircle(int);

float areaOfCircle(int r)
{
    return (PI * r * r);
}

int main()
{
    int radius;
    printf("Enter the value of radius: ");
    scanf("%d", &radius);
    printf("Area of circle is: %0.4f\n", areaOfCircle(radius));
    return 0;
}