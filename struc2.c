#include <stdio.h>
#include <string.h>

struct Book{
    int Book_Id; 
    char title[20];
    float price;
};

struct Book input()
{
    struct Book b2;
    printf("Enter book details:- ");
    scanf("%d %s %f", &b2.Book_Id, b2.title, &b2.price);
    return(b2);
}

void display(struct Book b)
{
    printf("%d %s %f\n", b.Book_Id, b.title, b.price);
}

int main(){
    struct Book b1;
    b1 = input();
    display(b1);
    return 0;
}