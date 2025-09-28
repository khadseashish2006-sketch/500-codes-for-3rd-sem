#include <stdio.h>
int main() {

char name[20];
char color;

printf("Enter tomato name: ");
scanf("%s", name);
printf("Enter tomato color (R for red / G for green): ");
scanf(" %c", &color); // Note the space before %c to skip whitespace

   if (color == 'R' || color == 'r') 
   {
    printf("%s is a Red Tomato.\n", name);
   } 
    else if (color == 'G' || color == 'g') 
   {
    printf("%s is a Green Tomato.\n", name);
   } 
   else 
   {
    printf("Unknown color for tomato %s.\n", name);
   }

    return 0;
}
