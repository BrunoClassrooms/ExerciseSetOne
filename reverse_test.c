/**
   Unit test for the get_element function
 */

#include "reverse.h"
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

#define N 40

int main (int argc, char** argv) {

  long * array = (long *) malloc (N * sizeof (long)); 

  array [0] = 0;
  array [1] = 1;
  
  for (int i = 2 ; i < N ; i++) {
    array [i] =  (array[i-1] + array[i-2] );
  }

  printf("Before reverse: %ld %ld %ld %ld ...%ld %ld \n", array[0],array[1],array[2],array[3],array[N-2],array[N-1] );
  
  assert ( array [0] == 0 );
  assert ( array [1] == 1 );
  assert ( array [2] == 1 );
  assert ( array [3] == 2 );
  
  reverse(array, N);

  printf("After reverse: %ld %ld %ld %ld ...%ld %ld \n", array[0],array[1],array[2],array[3],array[N-2],array[N-1] );
    
  assert ( array [0] != 0 );
  assert ( array [1] != 1 );
  assert ( array [2] != 1 );
  assert ( array [3] != 2 );


    
  reverse(array, N);
  
 printf("After reverse again: %ld %ld %ld ...%ld %ld \n", array[0],array[1],array[2],array[N-2],array[N-1] );
  
  assert ( array [0] == 0 );
  assert ( array [1] == 1 );
  assert ( array [2] == 1 );
  assert ( array [3] == 2 );



  reverse(NULL, 0);
  reverse(array, 0);
  
  free ( array );
  
}
