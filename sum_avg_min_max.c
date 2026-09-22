/*Write a program to input n numbers and find sum, average, max, min */
#include<stdio.h>
int main()
{
    int n,num,max,min,sum;
    float avg;
    printf("How many numbers you want to input \n" );
    scanf("%d",&n);
    printf("Enter a number\n ");
    scanf("%d",&num);
    max=num;
    min=max;
    sum=num;
    for(int c=0;c<(n-1);c++)
    {
        printf("Enter a number\n");
        scanf("%d",&num);
        sum+=num;
        if(num>=max)
            max=num;
        if(num<=min)
            min=num;
    }
    avg=sum/(float)n;
    printf("Sum is %d\n Average is %f \n Max is %d\n Min is %d\n",sum,avg,max,min);
    return 0;
}