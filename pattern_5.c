/*
*      * 
 *    *  
  *  *   
   *    
  *  *   
 *    *  
*      * 
*/
#include<stdio.h>
int main()
{
    int n,temp;
    printf("Enter value of n(odd): ");
    scanf("%d",&n);
    printf("\n");
    temp=n;
    if(n%2==0)
    {
        printf("\n%d is a even number",n);
        return 0;
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(j==i)
                    printf("*");
                else if(j==temp)
                    printf("*");
                printf(" ");
            }
            printf("\n");
            temp--;
        }
    }
}