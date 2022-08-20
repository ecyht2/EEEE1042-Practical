#include <stdio.h>
#include <string.h>
int main() {
  char str1[] = "0123456789", str2[] = "ABCDEFGHIJ", str3[100];
  // Complete your code below here using str1, str2 and str3
  // using C string-functions like strcpy, strcat, strlen etc...
  for(int i = 0; i < 10; i++){
    strcpy(str3, str1);
    strcpy(&str3[i], str2);
    strcpy(&str3[i+i+1], &str1[i]);
    printf("%s\n", str3);
  }
}
