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



/*

1
22
3 3
4  4
55555

*/


void pattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
           if (j == 1 || i == j || i == n)
                printf("%d", i);
           else 
                printf(" ");
        }
        printf("\n");
        
    }
}



/*

1
0 1
1 0 1
0 1 0 1

*/




void pattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
            
        }
        printf("\n");
    }
    
}

/*

1
12
123
1234
12345

*/

void pattern7(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
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
    pattern6(num);
    return 0;
}