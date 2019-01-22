/*  Example: C program to find area of a circle */

#include <stdio.h>
#define PI 3.14159
#define CM 2.54

int main()
{
  float r, a;

  printf("Enter radius (in cm):\n");
  scanf("%f", &r);

  a = PI * (r/CM) * (r/CM);

  printf("Circle's area is %3.2f (sq in).\n", a);
}

