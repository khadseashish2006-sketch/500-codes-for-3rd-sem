#include <stdio.h>

 int main()
{
    int A=50,B=70,number;
        printf("Enter any number:\n");
        scanf("%d", &number);
{
    if (number<A)
        
       
      {
         printf("Number is less than A=50 \n");
      }
    else if (number>A && number<B)
      {
        printf("number is between A=50 and B=70  \n");
      }        
    else 
      { 
    printf("number is greate than B=70 \n");

      }
}
return 0;
}