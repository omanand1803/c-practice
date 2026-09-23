/*Factorial of any non negative number*/

#include <stdio.h>

int main()
{
    int n,f=1;
    printf("enter any number \n");
    scanf("%d",&n);
    int temp=n;
    if(n>0)
    {
        while(n!=0)
        {
            f=f*n;
            n--;
        }
        printf("Factorial of %d is %d\n",temp,f);
    }
    else if(n==0)
        printf("Factorial of %d is %d\n",temp,f);
    else
        printf("WRONG INPUT\n");
    return 0;
}