#include <stdio.h>

int main() 
{
    int rows, i, j, space;
    long long coeff; // Using long long to prevent early overflow on higher rows

    printf("Enter the number of rows: ");
    if (scanf("%d", &rows) != 1 || rows <= 0) 
    {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }

    for (i = 0; i < rows; i++) 
    {
        // 1. Print leading spaces to format the output as a triangle
        for (space = 1; space <= rows - i; space++) 
        {
            printf("  "); // Adjust spacing based on formatting preference
        }

        // 2. Calculate and print the coefficients for the current row
        coeff = 1; // The first element of every row is always 1
        for (j = 0; j <= i; j++) 
        {
            printf("%4lld", coeff); // Minimum field width of 4 for alignment
            
            // Derive the next coefficient incrementally based on the current one
            // Use explicit casting or ordering to prevent integer division truncation errors
            coeff = coeff * (i - j) / (j + 1);
        }
        // 3. Move to the next line after completing a row
        printf("\n");
    }

    return 0;
}
