#include <stdio.h>
int main() 
{

char name[20];
// for testimg thse code, we will take color input from user
char color;

printf("Enter tomato name: ");
scanf("%s", name);

printf("Enter tomato color (R for red / G for green): ");
scanf(" %c", &color);

// real world code would look like this
// color = detect_color_from_sensor();

if (color == 'R' || color == 'r')
  {
    printf("%s is a Red Tomato. Sending to RIGHT basket.\n", name);
  } 
  else if (color == 'G' || color == 'g') 
  {
    printf("%s is a Green Tomato. Sending to LEFT basket.\n", name);
  } 
  else 
  {
    printf("Unknown color detected for tomato %s. Cannot separate.\n", name);
  }

return 0;
}
