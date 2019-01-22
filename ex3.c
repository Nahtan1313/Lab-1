/*  Example: C program to find area of a circle */

#include <stdio.h>
#define PI 3.14159
#define CM 2.54

int main()
{
  float r, a, c;
  while (r  != 0) {
  printf("Enter radius (in cm):\n");
  scanf("%f", &r);

  a = PI * (r/CM) * (r/CM);
  c = 2 * PI * (r/CM);

  printf("Circle's area is %3.2f (sq in).\n", a);
  printf("Its circumference is %3.2f (in).\n", c);
  }
}


