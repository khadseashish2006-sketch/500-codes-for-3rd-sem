#include <stdio.h>

int main() {
    int rows, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) 
    {
        for (j = 1; j <= 2 * rows - 1; j++)
         {
            if (i == rows)
            {
                // Last row: print stars
                if (j % 2 == 1)
                    printf("*");
                else
                    printf(" ");
            } else if (j == rows - i + 1 || j == rows + i - 1)
             
            {
                // Left and right edges
                printf("*");
            } 
            else 
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}