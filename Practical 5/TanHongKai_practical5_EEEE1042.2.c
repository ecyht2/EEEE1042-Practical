#include<stdio.h>
#define N 6
float farenheit[N];
float celcius[N];
float test[N];

void ask_temp(char *unit, float *funit);
void compute_temp(char *unit);
void print_temp(float *unit1, float *unit2);
void print_table(char *, char *);

int main(){
  //Farenheit
  ask_temp("farenheit", farenheit);
  compute_temp("F");
  print_table("Farenheit", "Celcius");
  print_temp(farenheit, celcius);
  //Divider
  printf("______________________\n");
  //Celcius
  ask_temp("celcius", celcius);
  compute_temp("C");
  print_table("Celcius", "Farenheit");
  print_temp(celcius, farenheit);
}

void ask_temp(char *unit, float *funit){
  for(int i = 0; i < N; i++){
    printf("Please enter %s value %d\n", unit, i);
    scanf("%f", &funit[i]);
   }
}

void compute_temp(char *unit){
  if(unit == "F"){
    for(int i = 0; i < N; i++){
      celcius[i] = 5.0/9.0 * (farenheit[i] - 32);
    }
  } else if(unit == "C") {
    for(int i = 0; i < N; i++){
      farenheit[i] = 9.0/5.0 * celcius[i] + 32;
    }
  } else printf("Unknown Unit");
}

void print_temp(float *unit1, float *unit2){
  for(int i = 0; i < N; i++){
    printf("%-9.2f|%9.2f\n", unit1[i], unit2[i]);
  }
}

void print_table(char *unit1, char *unit2){
  printf("%9s|%9s\n", unit1, unit2);
  printf("-------------------\n");
}
