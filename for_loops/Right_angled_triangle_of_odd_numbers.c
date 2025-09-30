#include <stdio.h>

int main()
{
    int rows, i, j;
    int num = 1;  

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) 
    {        
        for(j = 1; j <= i; j++)
        {     
            printf("%d ", num);
            num += 2;                  // similar to  num = num + 2
        }
        printf("\n");
    }

    return 0;
}
