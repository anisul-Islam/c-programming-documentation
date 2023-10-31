#include <stdio.h>
#include <ctype.h>
int main(){
  float centigrade, fahrenheit;
  
  printf("Enter fahrenheit = ");
  scanf("%f", &fahrenheit);

  centigrade = (fahrenheit - 32) / 1.8;

  printf("Equivalent centigrade = %.2f\n",centigrade);

  getchar();
}