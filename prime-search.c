#include <stdio.h>
#include <getopt.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include "prime-structs.h"




//struct node {
//  int val;
//  int result;
//  struct node *next;
//};




/*
 * * Main entry point.
 * *
 * * @param argc The argument count.
 * * @param argv The argument vector.
 * * @return The exit code.
 * */



int main(int argc, char *argv[] ) {



/* initial filtering for Primes
 * * filter for numbers divisable
 * * by 2, 3, 5
 * */

  int increments = 100;
  int result = 0;
  struct node_s *current_node;
  struct node_s *end_node;

  //initize end_node
  end_node = NULL;



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

                //creating memmory space for current node
                current_node = malloc( sizeof(struct node_s));
                // -> is used in this instance because current_node
                // is a pointer and not a simple struct
                current_node->val = increments;
                current_node->result = result;

                // pont to next node
                current_node->next = end_node;
                //setting up next node as current node
                end_node = current_node;

              // printf("%d\t : %d\n", count, result);

              }

  }// end of for


 //lets see what in the linked list!

  while(current_node != NULL)
  {
    printf("%d \t%d\n", current_node->val, current_node->result);
    current_node = current_node->next;
  }





  return 0;

}//end of main
