#include<stdio.h>
#include<stdlib.h>
void sum()
{

    int a[]={1,23,45,12,21,98};
    int sum=0,*p;
    p=&a[0];
    printf("Value of p before loop execution is %d",p);
    for(p=&a[0];p<=&a[5];p++)
    {
        sum+=*p;
    }
    printf("\nSum is %d\n",sum);
    printf("Value of p after loop execution is %d",p);
}
void rev()
{
    int a[]={1,2,3,4,5};
    int *p;
    for(p=a+4;p>=a;p--)//a+4 is calculated as a +4x4
    {
        printf("%d\n",*p);
    }
}
void main()
{
    //sum();
    //rev();
}