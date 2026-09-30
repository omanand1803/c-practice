/*Decimal TO Binary*/
#include<stdio.h>
int main()
{
    int d,bin[32],c=0,temp;
    printf("Enter a Decimal Number : ");
    scanf("%d",&d);
    temp=d;
    while(d!=0)
    {
        bin[c]=d%2;
        d=d/2;
        c+=1;
    }
    printf("\nBinary of %d is : ",temp);
    /*Reverse printing of an array*/
    for(int j=c-1;j>=0;j--)
    {
        printf("%d",bin[j]);
    }
    return 0;
}
/*taken array of size of 32 because integers can only store 32 bits*/