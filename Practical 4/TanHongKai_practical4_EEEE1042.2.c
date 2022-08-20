#include <stdio.h>
#include <time.h>
#include <math.h>
#define N 100000

int primes[N];
int test_prime(int no);

int main(){
  //Setting First Prime to 2
  primes[0] = 2;
  //Setting up current Number and index of the next prime
  int cNo = 3;
  int i = 1;
  //Setting up timer
  clock_t startTime = clock();

  //Looping Until the First N primes are found
  while(primes[N - 1] == 0){
    //Testing if the current number being tested is prime
    int cNoPrime = test_prime(cNo);

    //Adding it to primes if true
    if(cNoPrime){
      primes[i] = cNo;
      i++;
    }
    //Proceeds to the next number if false
    cNo++;
  }

  //Printing out time it took
  printf("Time to calculate %d primes: %f s\n", N, (float)(clock()-startTime)/CLOCKS_PER_SEC);
  //Printing out all the primes
  for(int i = 0; i < N; i++){
    printf("%-3d", i);
    printf("%d\n", primes[i]);
  }
}

int test_prime(int no){
  int result;
  int cNoPrimes = 1;
  //Finding the amount of primes to loop over
  while(primes[cNoPrimes] != 0 && primes[cNoPrimes] < sqrt(no)){
    cNoPrimes++;
  }

  
  //Testing if 'no' is divisible by any of the current primes
  for(int i = 0; i < cNoPrimes; i++){
    result = no % primes[i];
    if(result == 0){
      //return False if it is divisible by any of the primes
      return 0;
    }
  }

  //return True if it isn't divisible by any of the current primes
  return 1;
}
