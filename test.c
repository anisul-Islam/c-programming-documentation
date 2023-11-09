// home work 1: series, pattern
// home work 2: starting, ending points -> armstrong, plaindrom number
// home work 3: starting, ending points -> prime number
// Function, Array, String, Pointer, Structure
#include <stdio.h>
#include <ctype.h>
int main(){
  int number, sum=0, temp, remainder;

  printf("Enter any number: ");
  scanf("%d", &number); 

  temp = number; 

  while(temp!=0){
    remainder = temp%10;
    sum = sum + remainder*remainder*remainder;
    temp = temp / 10;
  }

  if(number == sum){
    printf("Armstrong number");
  }else{
    printf("Not Armstrong number");
  }  

  getchar();
}