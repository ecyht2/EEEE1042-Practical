#include <stdio.h>
#define N 9

int main(int argc, char **argv){
  int triangle[N][N];

  //Looping For the Amount of rows
  for(int i = 0; i < N; i++){
    //Looping For the Amount of Columns
    for(int j = 0; j <= i; j++){
      if(j == 0 || j == i){
	//Set Value to 1 if it is at the edge
	triangle[i][j] = 1;
      } else{
	//Calculating Value
	triangle[i][j] = triangle[i - 1][j] + triangle[i - 1][j - 1];
      }
      //Printing out the value
      printf("%4d ", triangle[i][j]);
    }
    //Printing Newline
    printf("\n");
  }
}
