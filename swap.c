#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter num1\n");
    scanf("%d",&num1);
    printf("enter num2\n");
    scanf("%d",&num2);
    printf("Before swapping \n");
    printf("%d %d\n",num1,num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("after swapping \n");
    printf("%d %d\n",num1,num2);
    return 0;
}