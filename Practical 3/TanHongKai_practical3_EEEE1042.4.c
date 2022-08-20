#include<stdio.h>
/* This is a comment: main() is the name of the function that will be executed when the file is run */
/* int main means that the function returns an integer (typically indicating success or failure) */
/* int argc and char **argv are inputs to the main function. These represent the parameters passed at the
command line */
int main(int argc, char **argv) {
  FILE *f;
  char filename[]="myOutput.txt";
  if ((f=fopen(filename,"w"))!=NULL) {
    fprintf(f, "%s\n", argv[1]);
    fprintf(f, "%s\n", argv[2]);
    fprintf(f, "%s\n", argv[3]);
    
    fclose(f); // close the file pointer
  } else {
    printf("Unable to open %s for reading\n",filename);
  }
  //Q4.5: What output do you get from the cat command, explain what has happened.
  //Answer to 4.5: The output of the cat command prints out the 3 words that I put into my program in three sperate line. It saved the three words I gave into my programs into a text file.
  return(0);
}
