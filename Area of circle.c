#include <stdio.h>
#define PI 3.141592653589793

int main() {
    double radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);  // %lf for double

    area = PI * radius * radius;  // Area formula
    printf("The area of the circle is: %.6lf\n", area);

    return 0;
}
// This program calculates the area of a circle given its radius.