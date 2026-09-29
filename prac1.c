/*Write a C program to count the total number of digits and calculate the sum of digits in a user-
entered integer using a while loop. Repeat this task until you get the single digit number. Display

the number in Word (e.g One, Two, ....)*/
#include<stdio.h>
int main()
{
    int n,sum,dig,c,temp;
    printf("Enter a number:");
    scanf("%d",&n);
    beg:
    temp=n;
    sum=0;
    c=0;
    while(n!=0)
    {
        dig=n%10;
        c++;
        sum+=dig;
        n=n/10;
    }
    printf("\n%d has %d digits\n",temp,c);
    if(sum>=0&&sum<=9)
    {
        switch (sum)
        {
            case 0:
            printf("Zero\n");
            break;
            case 1:
            printf("One\n");
            break;
            case 2:
            printf("Two\n");
            break;
            case 3:
            printf("Three\n");
            break;
            case 4:
            printf("Four\n");
            break;
            case 5:
            printf("Five\n");
            break;
            case 6:
            printf("Six\n");
            break;
            case 7:
            printf("Seven\n");
            break;
            case 8:
            printf("Eight\n");
            break;
            case 9:
            printf("Nine\n");
            break;
        }
        return 0;
    }
    else
    {
        n=sum;
        goto beg;
    }
}