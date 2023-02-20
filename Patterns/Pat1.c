#include <stdio.h>

/*

***
***
***

*/
void pat1(int r)
{
    int i = 1;
    while (i <= r)
    {
        int j = 1;
        while (j <= r)
        {
            printf("* ");
            j = j + 1;
        }
        printf("\n");
        i = i + 1;
    } 
    printf("\n");
}


/*

111
222
333

*/

void pat2(int r)
{

    int i = 1;
    while (i <= r)
    {
        int j = 1;
        while(j <= r)
        {
            printf("%d ", i);
            j = j + 1;
        }
        printf("\n");
        i = i + 1;
    }
    printf("\n");
}

/*

111
22
3

*/

void pat3(int r)
{
    int i = 1;
    while (i <= r)
    {
        int j = i;
        while (j <= r)
        {
            printf("%d ", i);
            j = j+1;
        }
        printf("\n");
        i = i + 1;
    }
    printf("\n");
    
}


/*

1
22
333

*/


void pat4(int r)
{
    // int i = 1;
    // while (i <= r)
    // {
    //     int j = i;
    //     while (j > 0)
    //     {
    //         printf("%d ", i);
    //         j = j-1;
    //     }
    //     printf("\n");
    //     i = i + 1;
    // }
    // printf("\n");

    int i = 1;
    while (i <= r)
    {
        int j = 1;
        while (j <= i)
        {
            printf("%d ", i);
            j = j+1;
        }
        printf("\n");
        i = i + 1;
    }
    printf("\n");
    
}


/*

1
22
3 3
4  4
55555

*/


void pat5(int r)
{
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || i == j || i == r)
                printf("%d", i);
            else
                printf(" ");
        }
        printf("\n"); 
    }
    printf("\n");
}


/*

1 
0 1
1 0 1
0 1 0 1


*/


void pat6(int r)
{
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if((i + j) % 2 == 0)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");    
    }
}


// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
// 

void pat7(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {   
            printf("%d ", j);
        }
        printf("\n");
    }
    
}


// 1 2 3 4 5
// 1 2 3 4 
// 1 2 3
// 1 2
// 1
// 

void pat8(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1 ; j <= i; j++)        
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    
}


        // 1
    //   2 3 2
    // 3 4 5 4 3
//   4 5 6 7 6 5 4
// 5 6 7 8 9 8 7 6 5


void pat9(int n)
{
    for (int i = 1; i <= n; i++) {
    //P1 start here
    //first we print spaces n-i times
    for (int j = 1; j <= n - i; j++) {
      printf("  ");
    }
    //then we print elements starting from i to 2*i-1, which can be observed in each row of the pattern.
    for (int j = i; j < 2 * i; j++) {
      printf("%d ", j);
    }
    //P2 starts here
    //each row starts with 2*(i-1) and then decrease i-1 times
    int ele = 2 * (i - 1);
    for (int j = 1; j <= i - 1; j++) {
        printf("%d ", ele--);
    }
    //we finish each row and then print a new line
    printf("\n");
  }
}


// 1
// 23
// 345
// 4567
// 

void pat10(int n)
{
    
    for (int i = 1; i <= n; i++)
    {
        // int count = i;
        for (int j = 1; j <= i ; j++)
        {
            printf("%d ", i + j -1);
            // count = count + 1;
        }
        printf("\n");
    }
    
}


// AAA
// BBB
// CCC
// 

void pat11(int n)
{
    char ch = 65;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%c ", 'A' + i - 1);
        }
        printf("\n");
        ch = ch + 1;    
    }
    
}
// 
// ABC
// ABC
// ABC
// 

void pat12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char ch = 65;
        for (int j = 1; j <= n; j++)
        {
            printf("%c ", 'A' + j - 1);
            ch = ch + 1;
        }
        printf("\n");
    }
    
}

/*

* * * * * 
  * * * * 
    * * * 
      * * 
        * 

*/

void pat13(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= n - i + 1; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}


// ABC
// DEF
// GHI


void pat14(int n)
{
    char ch = 65;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%c ", ch);
            ch = ch + 1;
        }
        printf("\n");
    }
    
}


/*

        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 

*/



void pat15(int n)
{
    for (int i = 1; i <= n; i++)
    {   
//               j = i; j < n; j++        This condition is also working for this loop..
        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("* ");
        }
        for (int l = 1; l < i; l++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}


/*

*********
 *******
  *****
   ***
    *

*/


void pat16(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf("  ");
        }

        for (int j = i; j <= n; j++)
        {
            printf("* ");
        }
        for (int m = 1; m <= n - i; m++)
        {
            printf("* ");
        }
        printf("\n");
    }

}


/*

*********
 *******
  *****
   ***
    *

*/

void pat17(int n)
{
    int m = 1;
    for(int i=n;i>=1;i--)  
    {  
       for(int j=1;j<m;j++)  
       {  
           printf(" ");  
       }  
       for(int k=1;k<=2*i-1;k++)  
       {  
           printf("*");  
       }  
       m++;  
     
      printf("\n");  
    }  

}

/*

* * * * * 
  * * * * * 
    * * * * * 
      * * * * * 
        * * * * * 
*/

void pat18(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= n; k++)
        {
            printf("* ");
        }
        printf("\n");
    
    }   
}

/*

        * * * * * 
      * * * * * 
    * * * * * 
  * * * * * 
* * * * * 

*/


void pat19(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= n; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}

/*

        * * * * * 
      *       * 
    *       * 
  *       * 
* * * * * 

*/

void pat20(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= n; k++)
        {
            if (i == 1 || i == n || k == 1 || k == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    
}


/*

* * * * * 
  *       * 
    *       * 
      *       * 
        * * * * * 

*/

void pat21(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= n; k++)
        {
            if (i == 1 || i == n || k == 1 || k == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
        
    }
    
}


/*

* 
* * 
*   * 
*     * 
* * * * * 

*/

void pat22(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            if (j == 1 || i == j || i == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
        
    }
}


/*

      * 
    * * 
  *   * 
* * * * 

*/

void pat23(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= i; k++)
        {
            if (k == 1 || i == k || i == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
        
    }
    
}

/*

* * * * * 
  *     * 
    *   * 
      * * 
        * 
*/

void pat24 (int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf("  ");
        }
        for (int k = i; k <= n; k++)
        {
            if (k == i || i == 1 || k == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }   
}

/*

* * * * *
*     *
*   *
* *
*

*/

void pat25(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            if (i == 1 || j == i || j == n)
            {
                printf("* ");
            }
            else
                printf("  ");
        }
        printf("\n");
    }
    
}

/*

* * * * * 
*       * 
*       * 
*       * 
* * * * * 

*/

void pat26(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

/*

        * 
      *   * 
    *       * 
  *           * 
* * * * * * * * * 

*/


void pat27(int n)
{
   for (int i = 1; i <= n; i++)
   {
        for (int j = i; j < n; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {

            if (k == 1 || i == n || k == 2 * i - 1)
                printf("* ");
            else
                printf("  ");
            
        }
        printf("\n");  
   }
}

/*

* * * * * * * * * 
  *           * 
    *       * 
      *   * 
        * 

*/


void pat28(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf("  ");
        }
        for (int k = i; k <= 2 * n - i; k++)
        {
            if (i == 1 || k == i || k == 2 * n - i) 
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}


/*

* 
* * 
* * * 
* * * * 
* * * * * 
* * * * 
* * * 
* * 
* 

*/

void pat29(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 1; i < n; i++)
    {
        for (int k = i; k < n; k++)
        {
            printf("* ");
        }
       printf("\n");
    }   
}


/*

        * 
      * * 
    * * * 
  * * * * 
* * * * * 
  * * * * 
    * * * 
      * * 
        * 

*/

void pat30(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= n - i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

/*

* * * * * 
* * * * 
* * * 
* * 
* 
* 
* * 
* * * 
* * * * 
* * * * * 

*/

void pat31(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    
}

/*

* * * * * 
  * * * * 
    * * * 
      * * 
        * 
        * 
      * * 
    * * * 
  * * * * 
* * * * * 

*/

void pat32(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= n - i + 1; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= i ; k++)
        {
            printf("* ");
        }
        printf("\n");
    }   
}

/*

* * * * * * * * * * 
* * * *     * * * * 
* * *         * * * 
* *             * * 
*                 * 

*/

void pat33(int n)
{
   for (int i = 1; i <= n; i++)
   {
        for (int j = 1; j <= n - i + 1; j++)
        {
            printf("* ");
        }
        for (int k = 1; k <= 2 * i - 2; k++)
        {
            printf("  ");
        }
        for (int m = i; m <= n; m++)
        {
            printf("* ");
        }
        printf("\n");
   }
   
}

/*

*                 * 
* *             * * 
* * *         * * * 
* * * *     * * * * 
* * * * * * * * * * 

*/
void pat34(int n)
{
    int l = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        for (int k = 1; k <= 2 * l - 2; k++)
        {
            printf("  ");
        }
        for (int m = 1; m <= i; m++)
        {
            printf("* ");
        }
        printf("\n");
        l--;
    }
}

/*

* * * * * * * * * 
* *           * * 
*   *       *   * 
*     *   *     * 
*       *       * 
*     *   *     * 
*   *       *   * 
* *           * * 
* * * * * * * * * 

*/

void pat35(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i ==n || j == 1 || j == n || i == j || j == n - i + 1)
                printf("* ");
            else
                printf("  ");            
        }
        printf("\n");
    }
    
}

/*

*               * 
  *           *   
    *       *     
      *   *       
        *         
      *   *       
    *       *     
  *           *   
*               * 

*/

void pat36(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j || j == n - i + 1)
                printf("* ");
            else
                printf("  ");            
        }
        printf("\n");
    }
    
}

/*

        *         
        *         
        *         
        *         
* * * * * * * * * 
        *         
        *         
        *         
        *       

*/
void pat37(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == n / 2 + 1 || j == n / 2 + 1)
                printf("* ");
            else
                printf("  ");            
        }
        printf("\n");
    }
    
}


/*

      * 
    * * * 
  * * * * * 
* * * * * * * 
  * * * * * 
    * * * 
      * 

*/

void pat38(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    int l = n - 1;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= 2 * l - 1; k++)
        {
            printf("* ");
        }
        l--;
        printf("\n");
    }    
}

/*

A 
B B 
C C C 
D D D D 
E E E E E 

*/

void pat39(int n)
{
    // char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            // printf("%c ", ch);
            printf("%c ", 'A' + i - 1);
        }
        printf("\n");
        // ch = ch + 1;
    }
    
}

/*

A
B C
D E F

*/
void pat40(int n)
{
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", ch);
            ch = ch + 1;
        }
        printf("\n");
    }   
}

/*

A 
B A 
C B A 
D C B A 
E D C B A 

*/

void pat41(int n)
{
    // char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", 'A' + i - j);
            // ch = ch + 1;
        }
        printf("\n");
    } 
}



int main()
{
    int num;
    printf("Enter Rows: ");
    scanf("%d", &num);
    printf("\n");
    pat41(num);
    return 0;
}