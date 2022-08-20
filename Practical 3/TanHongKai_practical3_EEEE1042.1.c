#include<stdio.h>
#include<string.h>
/* This is a comment: main() is the name of the function that will be executed when the file is run */
/* int main means that the function returns an integer (typically indicating success or failure) */
/* int argc and char **argv are inputs to the main function. These represent the parameters passed at the
command line */
int main(int argc, char **argv) {
  char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
  char *s;
  //Q1.3: What does s contain at this point (without any assignment?) Should you print out the string pointed to by s? Why or why not?
  //Answer to 1.3: s contains a pointer to a random byte in memory. No I should not print the string pointed by s because it isn't something that my program has excess to and it is going to be some geberish
  printf("%d\n",strlen(alphabet));
  s = alphabet;
  printf("%d\n", strlen(s));
  //Q1.5: What do you get and why?
  //Answer to 1.5: I get the same as strlen(alphabet) because s is set to the adress alphabet is pointing to which is the same thing
  s++;
  printf("%d\n", strlen(s));
  printf("%s\n", s);
  //Q1.6: Explain why you get the observed result.
  //Answer to 1.6: It only has 25 characters and "a" is not printed. C gave me this result because I added one to the pointer meaning it is pointing to the byte next to the initial byte. Hence the letter "a" is not printed and it only has 25 characters until it reached the end of line character.

  s = &alphabet[10];
  printf("%d\n", strlen(s));
  printf("%s\n", s);
  //Q1.7: Explain again why you are getting what you observe.
  //Answer to 1.7: strlen(s) shows 16 characters and it prints the letter "k" to letter "z". I am getting this because I set the s into the memory adderess of the letter k of alphabet. This results in C printing/counting the length starting from the letter k in alphabet.

  
  
  return(0);
}
