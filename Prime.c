/*Prime Number*/
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter any number: ");
    scanf("%d",&n);
    if(n<=1)
    {
        printf("\n%d is neither Prime nor Composite Number",n);
    }
    else
    {
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
                break;
            
        }
        if(i>n/2)
            printf("\n%d is a Prime Number",n);
        else
            printf("\n%d is a Composite Number",n);
    }
    return 0;
}
