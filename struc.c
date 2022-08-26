#include <stdio.h>

// typedef struct         // Used typedef here
// {
//     int d, m, y;
// }DATE;                 // only need to mention a new name for TYPEDEF. 

struct book
{
    int book_Id;
    char title[20];
    float price;
// }b1, data;                    //  struct book b1;
};

struct book input(){             //TNRS
    struct book b;
    printf("Enter Book Details:-");
    scanf("%d %s %f", &b.book_Id, b.title, &b.price);
    return(b);
}

void display(struct book b)       //TSRN
{
    printf("%d %s %f\n", b.book_Id, b.title, b.price);
}

void main()
{
    // DATE today;
    // printf("Enter Today's date: ");
    // scanf("%d-%d-%d", &today.d, &today.m, &today.y);
    // printf("%d/%d/%d\n", today.d, today.m, today.y);

    struct book b1, data;
    b1 = input();    // TNRS
    display(b1);     // TSRN

    data = input();
    display(data);
}
