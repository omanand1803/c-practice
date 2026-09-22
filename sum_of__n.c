/* addition of n numbers , first n odd numbers , first n even numbers and display all the numbers whose 1 factor is 5(between 0 and 100)*/
#include<stdio.h>
int main()
{
    int n,sum_O=0,sum_E=0,sum=0,f;
    for(int c=0;c<=100;c++)
    {
        sum+=c;
        if(c%2==0)
            sum_E+=c;
        else
            sum_O+=c;
    }
    printf("Sum of numbers is %d\n",sum);
    printf("Sum of even numbers is %d \n",sum_E);
    printf("Sum of odd numbers is %d \n",sum_O);
    printf("Numbers whose one factor is 5 \n");
    for(int d=0;d<=100;d++)
    {
        if(d%5==0)
            printf("%d ",d);
    }
    return 0;
}