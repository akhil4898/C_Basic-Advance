#include <stdio.h>

/*

###
###
###

*/

void pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n ; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
}



/*

111
222
333

*/

void pattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d", i);
        }
        printf("\n");   
    }
}



/*

111
22
3

*/


void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    
}


/*

1
22
333

*/



void pattern4(int n)
{
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%d", i);
    //     }
    //     printf("\n");
    // }



    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j > 0 ; j--)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    



}




int main()
{
    int num;
    printf("Enter rows: ");
    scanf("%d", &num);
    printf("\n");
    pattern4(num);
    return 0;
}