#include<stdio.h>

int main(){
  // Q1.1: What is the result when you add together a signed and an unsigned int?
  // Answer to 1.1: type in your answer here.
  printf("**************\nAnswer to 1.1\n***************\n");
  //Adding ints
  int i1 = 2;
  int i2 = 2;
  printf("2+2=%d\n", i1+i2);
  //Adding floats
  float f1 = 2;
  float f2 = 2;
  printf("2.0+2.0=%f\n", f1+f2);
  //Adding Doubles
  double d1 = 2;
  double d2 = 2;
  printf("2.0+2.0=%lf\n", d1+d2);

  // Q1.2: What is the behaviour in C when you add an int and a float together? Take note of any warnings during compilation, what do these tell you?
  // Answer to 1.2: There are decimals when printed as float but gives a random number when printed as int
  printf("**************\nAnswer to 1.2\n***************\n");
  //Adding int and float
  printf("As int: %d\nAs Float: %f\n", i1+f1, i1+f1);

  // Q1.3: Are you able to print signed as unsigned and vice versa? Why do you get this result?
  // Answer to 1.3: No because Signed int can only print up to a number until it switches signs and when I try to set unsigned int as a negative it gives an error.
  printf("**************\nAnswer to 1.3\n***************\n");
  signed int si = 2147483647;
  unsigned int usi = 4294967295;
  printf("Signed int: %d\nUnsigned int: %u\n", si, usi);

  // Q1.4: What is the result? Why do you get this result?
  // Answer to 1.4: It subtracted one from my signed int for both because C added them as a signed int and the number for my unsigned int is -1 when printed as signed int.
  printf("**************\nAnswer to 1.4\n***************\n");
  printf("As signed int: %d\nAs Unsigned in: %u\n", si+usi, si+usi);

  // Q1.5: What do you get and why?
  // Answer to 1.5: It prints some random number because the bits of double correspond to the number in the bits in int
  printf("**************\nAnswer to 1.5\n***************\n");
  printf("Double as int: %d\n", d1);

  // Q2.1: What do you get? Explain what you are observing.
  // Answer to 2.1: I get the letter when printed as a character and a number corresponding to the ascii number when printing as a digit
  printf("**************\nAnswer to 2.1\n***************\n");
  char c = 'c';
  printf("Print as character: %c\nPrint as a digit: %d\n", c, c);

  // Q2.2: What do you get in each case? Why?
  // Answer to 2.2: d, m, K, They are the corresponding letters in ascii if I add 1, 10, 1000 to the ascii of 'c' respectively
  printf("**************\nAnswer to 2.2\n***************\n");
  printf("Add 1: %c\n", c+1);
  printf("Add 10: %c\n", c+10);
  printf("Add 1000: %c\n", c+1000);

  // Q2.3: Declaring and Printing Strings
  // Answer to 2.3: 
  printf("**************\nAnswer to 2.3\n***************\n");
  char string[] = "Hello World";
  printf("%s\n", string);

  // Q2.4: What do you get and why?
  // Answer to 2.4: I get X because X is the next character after W in ascii.
  printf("**************\nAnswer to 2.4\n***************\n");
  printf("Adding 1: %c\n", ++string[6]);

  // Q2.5: What do you get and why?
  // Answer to 2.5: ^@ because it is ascii 0 for my OS
  printf("**************\nAnswer to 2.5\n***************\n");
  string[5] = 0;
  printf("Null: %c\n", string[5]);

  // Q3.1: Explain the difference in outputs you observe between the formulas used in box 5 and box 6.
  // Answer to 3.1: I get 0 when I did not add decimals because C interprets it as ints and 5/9=0 and hence all the converted Celcius is 0 but this is not a problem with decimals as C treats it as floats
  printf("**************\nAnswer to 3.1\n***************\n");
  //Without Decimals
  printf("Int\n");
  printf("F   C\n");
  for (int i=0; i<=100; i+=20) {
    printf("%-3d %d\n", i, 5/9*(i-32));   
  }
  //With Decimals
  printf("\nFloat\n");
  printf("F   C\n");
  for (int i; i<=100; i+=20) {
    printf("%-3d %f\n", i, 5.0/9.0*(i-32));   
  }

  // Q3.2: What numeric value does your computer use to represent TRUE and FALSE?
  // Answer to 3.2: My computer prints False as 0 and True as 1
  printf("**************\nAnswer to 3.2\n***************\n");
  int x = 69, y = 420;
  printf("==: %d\n<: %d\n>: %d\n", x == y, x < y, x > y);

  // Q3.3: Explain your observations on what these two operators do and explain how they behave.
  // Answer to 3.3: It returns a one only when both numbers are greater than 0 with &&. It only need one of the numbers to be greater than 0 to print a 1 with ||.
  printf("**************\nAnswer to 3.3\n***************\n");
  //First x,y set
  x = 8, y = 5;
  printf("x: %d y: %d\n", x, y);
  printf("&&: %d\n||: %d\n", x&&y, x||y);
  //Second x,y set
  x = 0, y = 5;
  printf("x: %d y: %d\n", x, y);
  printf("&&: %d\n||: %d\n", x&&y, x||y);
  //Third x,y set
  x = 0, y = 69;
  printf("x: %d y: %d\n", x, y);
  printf("&&: %d\n||: %d\n", x&&y, x||y);

  // Q3.4: What do you observe? Record your understanding of how these two bit-wise operators behave here
  // Answer to 3.4: & applies AND gate on the corresonding bits of both the variables. | applies OR gate on the corresponding bits of both the variables.
  printf("**************\nAnswer to 3.4\n***************\n");
  x = 8, y = 5;
  printf("x: %d y: %d\n", x, y);
  printf("&: %d\n|: %d\n", x&y, x|y);
  //Second x,y set
  x = 0, y = 5;
  printf("x: %d y: %d\n", x, y);
  printf("&: %d\n|: %d\n", x&y, x|y);
  //Third x,y set
  x = 420, y = 69;
  printf("x: %d y: %d\n", x, y);
  printf("&: %d\n|: %d\n", x&y, x|y);

  // Q3.5: What do you observe? Record your understanding of how these two bit-wise operators behave here.
  // Answer to 3.5: The number increases and decreases by quite a bit, The bits of the memory got shifted to the right or left depending on if it is << or >>
  printf("**************\nAnswer to 3.5\n***************\n");
  x = 43;
  //Shift Left 1
  printf("(x<<1)=%d\n", (x<<1));
  //Shift Left 2
  printf("(x<<2)=%d\n", (x<<2));
  //Shift Right 1
  printf("(x>>1)=%d\n", (x>>1));
  //Shift Right 2
  printf("(x>>2)=%d\n", (x>>2));
  //Shift Right 3
  printf("(x>>3)=%d\n", (x>>3));
  
  return 0;
}
