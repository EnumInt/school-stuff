#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomnum;
int seed;

int main(void) {

  time_t seconds;
  seconds = time(NULL);

  seed = 1024 * seconds;
  randomnum = seed * seconds;
  
  //print intro text
  printf("Welcome to the Random Number Generator!\n");
  printf("=======================================\n");
  printf("%ld\n", randomnum);
  
  return 0;
}
