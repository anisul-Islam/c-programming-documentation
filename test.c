#include <stdio.h>
int main(){
  int numbers[] = {20,40,1,100,98,-4};
  int searchNumber = 40;
  int found = -1;

  for(int index=0; index<sizeof(numbers)/sizeof(numbers[0]); index++){
    if(numbers[index]== searchNumber){
      found = index;
      break;
    }
  }
  if(found == -1){
    printf("%d is not found in the array", searchNumber);
  } else{
    printf("%d is found in position %d", searchNumber, found);
  }
  return 0;
}


// Array Declare, Intialize
// Array access
// loop in Array
// How to find sum and average from an array
// How to find maximum and minimum numbers from an array
// searching algorithm: linear search, binary search 
// sorting algorithm: bubble sort, merge sort, quick sort
// first and second maximum sorted and unsorted
// multidimensional array - matrix : addition, subtraction, multiplication, transpose, diagonal elements addition