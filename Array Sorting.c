#include<stdio.h>
int main()
{
    int arr[100],n,t;
    printf("Enter number of values you want to input:");
    scanf("%d",&n);
    if(n>100 || n<=0)
    {
        printf("\nout of range input");
        return 0;
    }
    else
    {
        printf("\nEnter values in Array\n");
        for(int i=0;i<n;i++)
        {
            printf("%d:",i);
            scanf("%d",&arr[i]);
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]<arr[j])
                {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
                }
            }
        }
        printf("\n\nSorted Array\n\n");
        for(int i=0;i<n;i++)
        {
            printf("%d\n",arr[i]);
        }
        return 0;
    }
}