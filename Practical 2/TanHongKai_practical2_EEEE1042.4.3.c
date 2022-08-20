#include<stdio.h>

int mymax(int x, int y);

int main(){
  int x = 1, y = 2;
  int z;

  z = mymax(x, y);
  printf("x: %d\ny: %d\nz: %d\n", x, y, z);

  // Q4.3: Function Declaration then Definition
  // Answer to 4.3: Yes I am able to compile and execute because C knows that the mymax function exsisted when compiling and was able to recieved the definition during the linking stage.
  printf("**************\nAnswer to 4.3\n***************\n");

  return 0;
}

int mymax(int x, int y){
  return x>y?x:y;
}
