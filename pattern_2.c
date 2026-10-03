/*
Enter value of n : 5
        * * * * * 
      * * * * * 
    * * * * * 
  * * * * * 
* * * * * 
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter value of n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)/*Important condition n-i*/
        {
            printf("  ");
        }
        for(int k=1;k<=n;k++)/* Just change i to n for rhombus*/
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}