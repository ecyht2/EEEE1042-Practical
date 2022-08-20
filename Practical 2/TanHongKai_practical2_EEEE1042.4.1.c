#include<stdio.h>

int main(){
  int x = 2, y = 1;
  int z;
  z = mymax(x, y);
  print("x: %d\ny: %d\nz: %d\n", x, y, z);
  // Q4.1: Scenario 1
  // Answer to 4.1: No I cannot compile and run it because, the function mymax isn't declared/defined before the main function.
  printf("**************\nAnswer to 4.1\n***************\n");

  return 0;
}

int mymax(int x, int y){
  return x>y?x:y;
}
