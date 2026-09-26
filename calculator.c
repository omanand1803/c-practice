/*Simple Calculator*/
#include<stdio.h>
int main()
{
    int num1,num2,n;
    char c='y';
    while(1)
    {
        printf("Enter your choice\n 1:Sum\n 2:Multiplication\n 3:Division\n 4:Remainder\n 5:Substraction\n 6:To Exit type n/N\n Enter your choice :");
        scanf(" %c",&c);
        if(c=='n'||c=='N')
        {
            printf("\nGOODBYE!");
            break;
        }
        else
        {
            if(c>='1'&& c<='5')
            {
                printf("first number\n");
                scanf("%d",&num1);
                printf("Enter second number\n");
                scanf("%d",&num2);
                switch(c)
                {
                    case '1':
                    printf("Ans:%d\n\n",num1+num2);
                    break;
                    case '2':
                    printf("Ans:%d\n\n",num1*num2);
                    break;
                    case '3':
                    if(num2!=0)
                        printf("Ans:%f\n\n",(float)num1/num2);
                    else
                        printf("2nd Number can't be zero\n\n");
                    break;
                    case '4':
                    if(num2!=0)
                        printf("Ans:%d\n\n",num1%num2);
                    else
                        printf("2nd Number can't be zero\n");
                    case '5':
                    break;
                    printf("Ans:%d\n\n",num1-num2);
                    break;
                    default:
                    printf("Wrong choice\n Try again \n\n");
                }
            }
            else
                printf("Wrong choice\n Try Again\n\n");
        }
    }
}