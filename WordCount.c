#include<stdio.h>
void main()
{
    char str[30];
    printf("Enter a string \n");
    fgets(str,sizeof(str),stdin);
    int i=0,count=0,flag=0;
    while(str[i]!='\0')
    {
        if(str[i]==' '|| str[i]=='\t' || str[i]=='\n')
            flag=0;
        else if(flag==0)
        {
            count++;
            flag=1;
        }
        i++;
    }
    printf("Number of words are %d ",count);
}