#include <stdio.h>
#include <ctype.h>
#include <math.h>
int main(){
  float radius, areaOfCircle;
  
  printf("Enter radius = ");
  scanf("%f", &radius);

  // areaOfCircle = 3.1416 * radius * radius;
  areaOfCircle = M_PI * radius * radius;

  printf("Area of Circle = %.2f\n",areaOfCircle);

  getchar();
}