/*Prime Number*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c+=1;
        }
    }
    if(c<2)
        printf("\n%d is neither Prime nor Composite",n);
    else if (c==2)
        printf("\n%d is a Prime Number",n);
    else
        printf("\n%d is a Composite Number",n);
        
    return 0;
}