#include <stdio.h>

// one dimensional Array...

// void main(){
//     int size;
//     printf("Enter the size of array: ");
//     scanf("%d", &size);
//     int arr[size], *ptr;
//     ptr = arr;
//     printf("Enter the elements of array: ");
//     for (int i = 0; i < size; i++)
//     {
//         scanf("%d", ptr);
//         ptr++;
//     }
//     ptr = arr;
//     printf("Your Elements are:- ");
//     for (int j = 0; j < size; j++)
//     {
//         printf("%d ", *(ptr+j));
//     }
//     printf("\n");
// }

// Two Dimensional array...

void main(){
    int rows, cols;
    printf("Entre size: ");
    scanf("%d %d",&rows, &cols);
    int arr[rows][cols], *ptr;
    // ptr = &arr[0][0];
    printf("Enter the elements of array: ");
    for (ptr = &arr[0][0]; ptr <= &arr[rows-1][cols-1]; ptr++)
    {
        scanf("%d", ptr);
    }
    printf("Your elememts are:- ");
    for (ptr = &arr[0][0]; ptr <= &arr[rows-1][cols-1]; ptr++)
    {
        printf("%p %d\n", ptr, *ptr);
    }
    printf("%ld %ld\n", sizeof(ptr), sizeof(*(ptr)));
    // printf("\n");

}


// #include <stdio.h>

// void input(char *p){
//     printf("Enter elements of array:-");
//     for (int i = 0; i < 9; i++)
//     {
//         scanf("%s", p+i);
//     } 
// }

// void display(char *p){
//     printf("Your elements are:- ");
//     for (int i = 0; *(p+i) != '\0'; i++)
//     {
//         printf("%c ", *(p+i));
//     }
//     printf("\n");
// }

// void main()
// {
//     char s[10], *p;
//     printf("%p\n", &s[0]);
//     p = s;
//     printf("%p\n", p);
//     input(s);
//     display(s);

// }