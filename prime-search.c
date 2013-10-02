#include <stdio.h>
#include <getopt.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>




/*
 *   Main entry point.
 *  
 *   @param argc The argument count.
 *   @param argv The argument vector.
 *   @return The exit code.
 */



int main(int argc, char *argv[] ) {



/* initial filtering for Primes 
 * filter for numbers divisable
 * by 2, 3, 5
 */

  int increments = 100;
  int result = 0;



  for(; increments > 0; increments--)
  {
      if((increments%2) == 0)
        {
        }
        else if((increments%3) == 0)
        {
        }
          else if((increments%5) == 0)
          {
          }
            else
              {
                result++;
                printf("%d\t : %d\n", increments, result);
              }

  }

  return 0;

}
