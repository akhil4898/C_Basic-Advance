// #include <stdio.h>

// int main(){
//     int marks;
//     printf("Enter marks: ");
//     scanf("%d", &marks);
//     if (marks > 90)
//         printf("Garde A");
//     else if (marks > 80)
//         printf("Grade B");
//     else if (marks > 70)     
//         printf("Grade C");
//     else
//         printf("Grade D");
//     printf("\n");                
//     return 0;
// }   


#include <stdio.h>
void display(int *);


int main()
{
    // int x = 5, *p, **q, ***r;
    // p = &x;
    // q = &p;
    // r = &q;
    // double a = 3.50, *f;
    // f = &a;
    // printf("value of x is: %d And size of pointer is: %ld\n", ***r, sizeof(p));
    // **q = 10;
    // printf("value of x is: %d And size of pointer is: %ld\n", ***r, sizeof(q));
    // *p = 15;
    // printf("value of x is: %d And size of pointer is: %ld\n", ***r, sizeof(r));
    // ***r = 20;
    // printf("value of x is: %d And size of pointer is: %ld\n", ***r, sizeof(p));

// --------------------------------------------------------------------------------------
    
// 
    // printf("value of a is: %f %p\n", a, f);
    // printf("Size of float is: %ld %ld\n", sizeof(a), sizeof(f));
    // printf("Size of x is: %ld %ld %ld %ld\n", sizeof(x),sizeof(p), sizeof(q), sizeof(r));
    // printf("Value of x is: %d %d %d %d", x, *p, **q, ***r);
    // printf("\nAddress is: %p %p %p\n", p, q, r);
    // printf("Size of x is: %ld %ld %ld %ld\n", sizeof(x),sizeof(p), sizeof(q), sizeof(r));
    // return 0;

// -----------------------------------------------------------------------------------------


//     int a[5], *p;
//     int n = sizeof(a)/ sizeof(a[0]);
//     p = &a[0];    
//     // printf("Size of variable is: %d %ld\n", n, sizeof(p));
//     for(int i = 0; i < 5; i++)
//         scanf("%d", p + i);
//     display(a);
//     printf("\n");
//     for (int round = 1; round <= n-1; round++)      // logic for bubble sort...
//     {
//         for (int i = 0; i <= n-round-1; i++)
//         {
//             if (*(p+i) > *(p + i + 1))
//             {
//                 int temp;
//                 temp = *(p + i);
//                 *(p + i) = *(p + i + 1);
//                 *(p + i + 1) = temp;
//             }
//         }
//     }
//     display(a);
//     printf("\n");
//     return 0; 
// }

// void display(int *p){
//     for (int i = 0; i < 5; i++)
//         printf("%d ", *(p + i));
//     printf("\nThank you!! Have a nice day :)");
// }

// -----------------------------------------------------------------------------------------


int length(char *);

char s[10] = "Computer", *p;
p = s;   //  p = &s[0];
printf("Length is: %d\n", length(s));
return 0;
}

int length(char *p)
{
    int i;
    for (i = 0; *(p+i)!='\0'; i++)
    {
        printf("i is: %c\n", *(p+i));
    }
    return(i);
}