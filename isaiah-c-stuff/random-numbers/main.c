#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomnum;
int seed;

int mkseed(void) {
  time_t seconds;
  seconds = time(NULL);

  seed = 1024 * seconds;
  randomnum = seed * seconds;
  // i don't even know if i have to return this function :p
  return 0;
}

int main(void) {

  //print intro text
  printf("Welcome to the Random Number Generator!\n");
  printf("=======================================\n");
  mkseed();
  
  printf("\e[0;92m");
  printf("Your random number is: %i\n", randomnum);

  return 0;
}