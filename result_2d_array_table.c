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
        printf("%-7s\t",subname[i]);
        for(int j=0;j<5;j++)
            printf("%2d ",test1[i][j]);
        printf("\t");
        for(int j=0;j<5;j++)
            printf("%2d ",test2[i][j]);
        printf("\n");
    }
}
/* 
========================================
       SAMPLE EXECUTION & OUTPUT
========================================

Enter student 1 marks in Test 1
Enter IOP Marks 45
Enter IOCS Marks 42
Enter Maths Marks 38

Enter student 1 marks in Test 2
Enter IOP Marks 48
Enter IOCS Marks 40
Enter Maths Marks 45

[... Input repeats for students 2, 3, and 4 ...]

Enter student 5 marks in Test 1
Enter IOP Marks 33
Enter IOCS Marks 36
Enter Maths Marks 39

Enter student 5 marks in Test 2
Enter IOP Marks 35
Enter IOCS Marks 38
Enter Maths Marks 40

	Result

IOP	    45 50 28 41 33 	48 45 30 46 35 
IOCS	42 48 30 39 36 	40 46 35 40 38 
Maths	38 45 25 44 39 	45 42 33 48 40 

========================================
*/
