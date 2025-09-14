#include <stdio.h>

int main()
{
    float A,B,multi;
    
    printf("Enter the temperature A:\n");
    scanf("%f",&A);
    
    printf("Enter the temperature B:\n");
    scanf("%f",&B);
    
    multi=A*B;
    
    printf("The multiplication of temp A and B is: %2f\n",multi);

    return 0;

}
