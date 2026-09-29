/*Table of any positive number*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter any positive number:");
    scanf("%d",&n);
    printf("\nTable of %d\n\n",n);
    for(int i=1;i<=10;i++)
    {
        printf("%3d X %2d = %4d\n",n,i,n*i);
    }
}