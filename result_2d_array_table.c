#include<stdio.h>
void main()
{
    char subname[3][20]={"IOP","IOCS","Maths"};
    int test1[3][5],test2[3][5];
    for(int i=0;i<5;i++)
    {
        printf("Enter student %d marks in Test 1\n",(i+1));
        for(int j=0;j<3;j++)
        {
            printf("Enter %s Marks ",subname[j]);
            scanf("%d",&test1[j][i]);
            printf("\n");
        }
        printf("Enter student %d marks in Test 2\n",(i+1));
        for(int j=0;j<3;j++)
        {
            printf("Enter %s Marks ",subname[j]);
            scanf("%d",&test2[j][i]);
            printf("\n");
        }
    }
    printf("\tResult\n\n");
    for(int i=0;i<3;i++)
    {
        printf("%s\t",subname[i]);
        for(int j=0;j<5;j++)
            printf("%2d ",test1[i][j]);
        printf("\t");
        for(int j=0;j<5;j++)
            printf("%2d ",test2[i][j]);
        printf("\n");
    }
}