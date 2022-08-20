#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define N 10
#define M 100

/* This is a comment: main() is the name of the function that will be executed when the file is run */
/* int main means that the function returns an integer (typically indicating success or failure) */
/* int argc and char **argv are inputs to the main function. These represent the parameters passed at the
command line */
void populateArray(int array[]){
  for(int i = 0; i < N; i++) array[i] = rand() % M + 1;
}

void printArray(int array[]){
  for(int i = 0; i < N; i++) printf("%d\n", array[i]);
}

void sortArray(int array[]){
  loop:
  for(int i = 0; i < N - 1; i++){
    int tmp = 0;
    if(array[i] > array[i + 1]){
      tmp = array[i + 1];
      array[i + 1] = array[i];
      array[i] = tmp;
      goto loop;
    }
  }
}

int main(int argc, char **argv) {
  //Setting Up random seed
  srand(clock());
  //Setting up random Array
  int array[N];
  populateArray(array);

  //Printing out initial array
  printf("==========before sort\n");
  printArray(array);

  //Printing out array after sorting
  sortArray(array);
  printf("==========after sort\n");
  printArray(array);
  
  return(0);
}
