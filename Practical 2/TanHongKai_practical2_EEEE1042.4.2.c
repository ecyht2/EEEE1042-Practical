#include<stdio.h>

int mymax(int x, int y){
  return x>y?x:y;
};

int main(){
  int x = 1, y = 2;
  int z;

  z = mymax(x, y);
  printf("x: %d\ny: %d\nz: %d\n", x, y, z);

  // Q4.2: Function Definition before main
  // Answer to 4.2: Yes I can compile and execute now. The Function printed out the max of x and y.
  printf("**************\nAnswer to 4.2\n***************\n");

  return 0;
}
