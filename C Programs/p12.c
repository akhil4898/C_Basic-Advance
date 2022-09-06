// // Write a program to find roots of a quadratic equation

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, D;                               // D is discriminant....
    double root1, root2, realPart, ImagePart;
    printf("Enter your inputs: ");
    scanf("%d %d %d", &a, &b, &c);
    D = b * b - 4 * a * c;

    // condition for real and different roots...
    if (D > 0)      
    {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
        printf("Root1 is: %.2lf and Root2 is: %.2lf\n", root1, root2);
    }

    // condition for real and equal roots...
    else if (D == 0)
    {
        root1 = root2 = -b / (2.0 * a);
        printf("Root1 is equal to Root2: %.2lf\n", root1);
    }
    // if roots are not real...
    else
    {
        realPart = -b / (2 * a);
        ImagePart = sqrt(D) / (2 * a);
        printf("Root1 is: %.2lf+%.2lfi And Root2 is: %.2lf+%.2lfi", realPart, ImagePart, realPart, ImagePart);
    }
    return 0;
}
