#include<stdio.h>
#include<stdlib.h>
#define N 6900

int main(){
  FILE *f1;
  char filename1[] = "MSB_self";

  FILE *f2;
  char filename2[] = "LSB_self";

  int rand_int[N];
  for(int i = 0; i < N; i++){
    rand_int[i] = rand();
    printf("%d\n", rand_int[i]);
  }
  
  if((f1 = fopen(filename1, "w")) != NULL){
    for(int i = 0; i < N; i++){
      fprintf(f1, "%d\n", 1 + (int) (10.0*rand_int[i]/(RAND_MAX + 1.0)));
    }

    fclose(f1);
  } else printf("Unable to open %s for writing\n", filename1);
  
  if((f2 = fopen(filename2, "w")) != NULL){
    for(int i = 0; i < N; i++){
      fprintf(f2, "%d\n", (rand_int[i]%10) + 1);
    }

    fclose(f2);
  } else printf("Unable to open %s for writing\n", filename2);
  
  return 0;
}
