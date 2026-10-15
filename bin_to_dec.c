#include<stdio.h>
#include<math.h>
void main()
{
    beg:
    int bin,c=0,dig;
    long int dec=0;
    printf("Enter binary :");
    scanf("%d",&bin);
    int temp=bin;
    while(bin!=0)
    {
        dig=bin%10;
        if(dig!=0 && dig!=1)
        {
            printf("\nWrong Input \nTry Again");
            goto beg;
        }
        else
        {
            dec+=dig*pow(2,c);
            c++;
        }
        bin/=10;
    }
    printf("\nDecimal of %d binary is : %ld",temp,dec);
}