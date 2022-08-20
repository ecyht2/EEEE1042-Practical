#include<stdio.h>
void printBinary(int x){
  char c[9];
  c[8]='\0';
  int y = x;

  for (int i = 7; i >= 0; i--){
    c[i]=((x&1)==1 ? '1' : '0');
    x = x>>1;
  }

  printf("%3d: %s\n", y, c);
}
/* This is a comment: main() is the name of the function that will be executed when the file is run */
/* int main means that the function returns an integer (typically indicating success or failure) */
/* int argc and char **argv are inputs to the main function. These represent the parameters passed at the
command line */
int main(int argc, char **argv) {
  int x = 69;
  printBinary(x);

  x = 10;
  printBinary(x);

  x = 64;
  printBinary(x);
  
  return(0);
}
