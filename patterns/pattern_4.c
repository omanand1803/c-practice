/*
* * * * * 
*       * 
* * * * * 
*/
#include <stdio.h>

int main()
{
    int r, c;
    printf("Length and breadth of rectangle: ");
    scanf("%d %d", &r, &c);
    
    // c is rows (breadth/height), r is columns (length/width)
    for(int i = 1; i <= c; i++)
    {
        for(int j = 1; j <= r; j++)
        {
            // If it is the first/last row OR the first/last column, print a star
            if(i == 1 || i == c || j == 1 || j == r)
            {
                printf("* ");
            }
            // Otherwise, print a space for the hollow center
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    
    return 0;
}