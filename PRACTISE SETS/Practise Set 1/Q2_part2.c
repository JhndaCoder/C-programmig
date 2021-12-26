// to calculate volume of a cylinder
#include <stdio.h>

int main()
{
  int rad = 3, height = 4;
  float pi = 3.14;
  float area = pi * rad * rad * height;
  printf("The volume of cylinder is %f", area);
  return 0;
}