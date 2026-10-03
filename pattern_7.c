/*
        *     
        *     
    * * * * * 
        *     
        *    
*/
#include<stdio.h>
int main()
{
    int n,mid;
    printf("Enter value of n(odd): ");
    scanf("%d",&n);
    printf("\n");
    if(n%2==0)
    {
        printf("\n%d is a even number",n);
        return 0;
    }
    else
    {
        mid=n/2+1;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(j==mid || i==mid)
                    printf("* ");/*1 blank space*/
                else
                    printf("  "); /*2 blank spaces*/
            }
            printf("\n");
        }
    }
}