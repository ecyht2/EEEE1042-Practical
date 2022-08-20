#include<stdio.h>
/* This is a comment: main() is the name of the function that will be executed when the file is run */
/* int main means that the function returns an integer (typically indicating success or failure) */
/* int argc and char **argv are inputs to the main function. These represent the parameters passed at the
command line */
int main(int argc, char **argv) {
  int x,y;
  int results[2][2];

  for (int i = 0; i <= 1; i++){
    for(int j = 0; j <= 1; j++){
      results[i][j] = i&&j;
    }
  }
 
  printf("  AND  |x=0|x=1|\n");
  printf("================\n");
  printf("  y=0  | %d| %d|\n", 0&&0, 0&&1);
  printf("  y=1  | %d| %d|\n", 1&&0, 1&&1);

  printf("  OR   |x=0|x=1|\n");
  printf("================\n");
  printf("  y=0  | %d| %d|\n", 0||0, 0||1);
  printf("  y=1  | %d| %d|\n", 1||0, 1||1);

  printf("  XOR  |x=0|x=1|\n");
  printf("================\n");
  printf("  y=0  | %d| %d|\n", 0^0, 0^1);
  printf("  y=1  | %d| %d|\n", 1^0, 1^1);

  return(0);
}
