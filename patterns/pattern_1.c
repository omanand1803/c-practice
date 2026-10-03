/*
    A B C D E
    A B C D E
    A B C D E
    A B C D E
    A B C D E
*/
#include<stdio.h>
int main()
{
    int n,t;
    char c;
    printf("Enter value of n: ");
    scanf("%d",&n);
    printf("\n");
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            t=j+64;
            printf(" %c",t);
        }
        printf("\n");
    }
}