//use of malloc() function to allocate memory dynamically
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *ptr;
    int n;
    printf("enter size of array\n");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    
    for(int i=0;i<n;i++)
    {
        printf("Value of array at %d is %d \n",i,ptr[i]);
    }
    //realloc() function to reallocate memory dynamically
    printf("enter new size of array\n");
    scanf("%d",&n);
    ptr=(int*)realloc(ptr,n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("Enter value in new array at %d\n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("Value of new array at %d is %d \n",i,ptr[i]);
    }
    free(ptr);
    //how to use free() effectively
} 