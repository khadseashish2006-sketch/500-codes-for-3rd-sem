#include <stdio.h>
int main()
{
  int i, j, rows;
  

  printf ("Enter no. of rows:");
  scanf ("%d",&rows);
  //int stars =1;   for simplification

    for(i=rows; i>=1; i--)
    {
        for(j=1; j<=rows-i+1 ;j++)  //we can use  (j<=stars) to simplify insted of (j<=rows-i+1)
        {
            printf("*");
        }
     printf("\n");
    }
    return 0;
}


