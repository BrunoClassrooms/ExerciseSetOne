/**
   Unit test for the addition function
 */

#include "addition.h"
#include <assert.h>

int main (int argc, char** argv) {

  assert ( addition ( 2, 2 ) == 4 );
  assert ( addition ( 0, 2 ) == 2 );
  assert ( addition ( 2, 0 ) == 2 );
  assert ( addition (-2, 2 ) == 0 );
  
}
