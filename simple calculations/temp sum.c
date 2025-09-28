#include <stdio.h>

int main() {
    float A, B, sum;
    printf("Enter the temperature of sensor A:\n");
    scanf("%f", &A);
    printf("Enter the temperature of sensor B:\n");
    scanf("%f", &B);
    sum = A + B;
    printf("Total temp of sensors: %f\n", sum);
    
}


// This program adds two floating-point numbers A and B and prints the result.