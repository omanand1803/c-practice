/*Print the series 1/2 ,-1/3 ,1/4 ,-1/5 ,1/6 .......n terms */
#include<stdio.h>
#include<math.h>
int main()
{
    int n,c;
    printf("Enter value of n:");
    scanf("%d",&n);
    for(int i=2;i<=n+1;i++)
    {
        c=pow(-1,i);   
        printf("%d/%d ",c,i);
    }
    return 0;
}
