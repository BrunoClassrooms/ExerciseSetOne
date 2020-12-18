/**
   Unit test for the get_element function
 */

#include "addition.h"
#include "get_element.h"
#include <assert.h>
#include <stdlib.h>

int main (int argc, char** argv) {

  int * array = (int *) malloc (100 * sizeof (int)); 

  array [0] = 0;
  array [1] = 1;
  
  for (int i = 2 ; i < 100 ; i++) {
    array [i] = addition (array[i-1] , array[i-2] );
  }
  
  assert ( get_element ( array, 0 ) == array [0] );
  assert ( get_element ( array, 1 ) == array [1] );
  assert ( get_element ( array, 2 ) == array [2] );

  free ( array );
  
}
