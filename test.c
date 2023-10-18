#include <stdio.h>
#include <ctype.h>
int main(){
  char uppercaseLetter, lowercaseLetter;

  printf("Enter a lowercase letter: ");
  scanf("%c", &lowercaseLetter);

  uppercaseLetter = toupper(lowercaseLetter);

  printf("Equivalent uppercase letter: %c\n", uppercaseLetter);

  getchar();
}