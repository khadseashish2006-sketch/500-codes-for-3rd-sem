#include <stdio.h>

int main() 
{
    int rows, i, j, k, num = 1;

    printf("Enter the no. of rows of pyramids: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) 
    {
        
        for(j = 1; j <= rows - i; j++)// Print spaces for pyramid shape
        {
            printf("  ");
        }
        for(k = 1; k <= (2 * i - 1); k++) // Print numbers in a row
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}