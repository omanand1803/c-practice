/*Write a C program to input a positive integer N. Print all first positive N numbers, N Odd numbers,
N Even numbers using a while loop.*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    printf("\n\nN Positive Number \n\n");
    for(int i=0;i<=n;i++)
    {
        printf("%d\n",i);
    }
    printf("\n\nN Even Numbers\n\n");
    for(int i=0;i<=n;i++)
    {
        if(i%2==0)
            printf("%d\n",i);

    }
    printf("\n\nN Odd Numbers\n\n");
    for(int i=0;i<=n;i++)
    {
        if(i%2!=0)
            printf("%d\n",i);
    }
    return 0;
}