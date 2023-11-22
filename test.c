#include <stdio.h>
#include <ctype.h>
int main(){
   int number, count=0;

   printf("Enter a number: ");
   scanf("%d", &number);

   for(int i=2; i<number; i++){
      count++;
      break;
   }
   if(count==0){
      printf("%d is a prime number", number);
   }else{
      printf("%d is not a prime number", number);
   }

   getchar();
}

