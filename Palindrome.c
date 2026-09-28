#include<stdio.h>
int main()
{
    int n,dig=0,rev=0,temp=0;;
    printf("Enter any number:");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        dig=n%10;
        rev=rev*10+dig;
        n=n/10;
    }
    if(temp==rev)
        printf("\n%d is a Palindrome Number",temp);
    else
        printf("\n%d is not Palindrome Number",temp);
    return 0;
}