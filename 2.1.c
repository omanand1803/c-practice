#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *ptr;
    int n;
    printf("enter size of array\n");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("Enter value %d\n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("Value of array at %d is %d \n",i,ptr[i]);
    }
}