#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/* This is a comment: main() is the name of the function that will be executed when the file is run */
/* int main means that the function returns an integer (typically indicating success or failure) */
/* int argc and char **argv are inputs to the main function. These represent the parameters passed at the
command line */
void printArray1(int array[], int size){
  for(int i = 0; i < size; i++) printf("%2d %d\n", i, array[i]);
}

void printArray2(int array[][5], int M, int N){
  for(int i = 0; i < M; i++){
    for(int j = 0; j < N; j++){
      printf("%d ", array[i][j]);
    }
    printf("\n");
  }
}

void printArray3(int array[], int M, int N){
  for(int i = 0; i < M; i++){
    for(int j = 0; j < N; j++){
      printf("%d ", array[i*N + j]);
    }
    printf("\n");
  }
}

void printArray4(int **array, int M, int N){
  for(int i = 0; i < M; i++){
    for(int j = 0; j < N; j++){
      printf("%d ", array[i][j]);
    }
    printf("\n");
  }  
}

int main(int argc, char **argv) {
  printf("Q1.1\n");
  /* *** */
  int x[] = {69, 420, 6, 9, 4, 2, 0, 4, 96, 100};
  int size_x = sizeof(x)/sizeof(int);

  printf("printArray1: \n");
  printArray1(x, size_x);

  printf("\nQ1.2\n");
  /* *** */
  int y[3][5];
  printf("printArray2: \n");
  printArray2(y, 3, 5);

  printf("\nQ1.3\n");
  /* *** */
  int z[15];
  printf("printArray3: \n");
  printArray3(z, 3, 5);

  printf("\nQ2.1\n");
  /* *** */
  int *a;
  a = (int *) malloc(15*sizeof(int));
  for(int i = 0; i < 15; i++) a[i] = rand();
  printf("printArray1: \n");
  printArray1(a, 15);
  free(a);

  printf("\nQ2.2\n");
  /* *** */
  int *b;
  //Before realloc
  printf("3x5\n");
  b = (int *) malloc(15*sizeof(int));
  for(int i = 0; i < 15; i++) b[i] = rand();
  //Printing Array
  printf("printArray3: \n");
  printArray3(b, 3, 5);
  //After realloc
  printf("\n4x5/realloc()\n");
  b = (int *) realloc(b, 20*sizeof(int));
  //Printing Array
  printf("printArray3: \n");
  printArray3(b, 4, 5);
  free(b);

  printf("\nQ2.3\n");
  /* *** */
  // Setting up 2D array
  int **c;
  c = (int **) calloc(3, sizeof(int *));
  for(int i = 0; i < 3; i++) c[i] = (int *) calloc(5, sizeof(int));
  //Pouplating the array
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 5; j++) c[i][j] = rand();
  }
  //Printing array
  printf("printArray4: \n");
  printArray4(c, 3, 5);
  //Freeing memory
  for(int i = 0; i < 3; i++) free(c[i]);
  free(c);
  c = NULL;
  
  return(0);
}
