#include<stdio.h>
int main()
{
    int n;
    printf("Enter value of n \n");
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++)
    {
        printf("enter value \n");
        scanf("%d",&num[i]);
    }
    int max=num[0];
    int j;
    for(j=1;j<n;j++)
    {
        if(max<num[j])
            max=num[j];
    }
    printf("Largest number is: %d",max);
    return 0;
}