/*
    A
    A B
    A B C
    A B C D
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
        for(int j=1;j<=i;j++)
        {
            t=j+64;
            printf(" %c",t);
        }
        printf("\n");
    }
}