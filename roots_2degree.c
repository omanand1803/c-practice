/*roots  of a quadractic equation*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float x1,x2,d;
    printf("roots of eqn ax2 + bx +c");
    printf("\na= ");
    scanf("%d",&a);
    printf("\nb= ");
    scanf("%d",&b);
    printf("\nc= ");
    scanf("%d",&c);
    d=(b*b) - (4*a*c);
    if(a==0)
    {
        printf("\nInvalid Output");
        return 0;
    }
    if(d<0.0)
    {
        printf("\nImaginary roots");
    }
    else if(d==0.0)
    {
        x1=(-b)/(2.0*a);
        printf("\nBoth the roots are equal");
        printf("\nx = %.2f",x1);
    }
    else
    {
        x1=(-b+sqrt(d))/(2.0*a);
        x2=(-b-sqrt(d))/(2.0*a);
        printf("\nx1 = %.2f",x1);
        printf("\nx2 = %.2f",x2);
    }
    return 0;
}