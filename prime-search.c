#include <stdio.h>
#include <getopt.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>
#include "prime-structs.h"
#include "prime-print.h"






/*
 * * Main entry point.
 * *
 * * @param argc The argument count.
 * * @param argv The argument vector.
 * * @return The exit code.
 * */



int main(int argc, char *argv[] ) {

    if (argc == 1) {
    printf("\nThis program needs some arguments ...  \n Try prime-search -h \n\n");
  }


  int option = 0;
  int start = -1;
  int end = 0;

  // Handle command line arguments.
     while ((option = getopt(argc, argv, "hvs:e:")) != -1) {
         switch (option) {
           case 's':
            start = atoi(optarg);
             break;

           case 'e':
            end = atoi(optarg);
            break;

           case 'v':
            version_print();
            exit(EXIT_FAILURE);

          case 'h':
           help_print();
           exit(EXIT_FAILURE);

          default:
           usage_print();
           exit(EXIT_FAILURE);
       }//end of switch
    }//end of while

 //--------------------------------
 // This helps keep from core dumps!
 // ie. a bit of conditional error check
  if((end < 1) ||  (start <  0) || (end < start)) 
   {
     usage_print();
     exit(EXIT_FAILURE);
   }

 //---------------------------------



/* initial filtering for Primes
 * * filter for numbers divisable
 * * by 2, 3, 5
 * */

  int result = 0;
  float test_float = 0.000000;
  struct node_s *current_node;
  struct node_s *end_node;

  //initize end_node
  end_node = NULL;



  for(; end > start; end--)
  {
      if((end%2) == 0)
        {
        }
        else if((end%3) == 0)
        {
        }
          else if((end%5) == 0)
          {
          }
            else
              {
                result++;

                //creating memmory space for current node
                current_node = malloc( sizeof(struct node_s));
                // -> is used in this instance because current_node
                // is a pointer and not a simple struct
                current_node->val_int = end;
                current_node->result = result;

                // pont to next node
                current_node->next = end_node;
                //setting up next node as current node
                end_node = current_node;
  
            }
  }// end of for


  // resetting head of chain
    current_node = end_node;


  //sqrt check
   while(current_node != NULL)
    {
          // *note*  this is a simple number test
          //  if current  node value = 9
          //  its squareroot is pushed as a float will = 3.000000
          //  if current node  value = 10
          //  its squareroot is 3.162277
          //  an int cast is made against the sqrt float
          //  example:
          //  (3.16227 - 3) test against 0.000000
          //  if subtraction result is 0 then it is a square
          //
      if((sqrt(current_node->val_int) - (int)sqrt(current_node->val_int)) != test_float)
           { 
              //flag set if numbers is not a square
               current_node->val_flag = 1;
           }

      current_node = current_node->next;
    }
  

  // resetting head of chain
      current_node = end_node;
  
  


 //lets see what in the linked list!

    printf("\n\n");
 //   printf("Possible \tList of\n");
 //   printf("Numbers \tNumbers\n");

  int node_count = 0;

  while(current_node != NULL)
  {
    if(current_node->val_flag == 1)
     {
        node_count = node_count + 1;
        printf(" %d \t",  current_node->val_int);
     }
    current_node = current_node->next;
  }

  printf("\n node count = %d\n", node_count);
  printf("\n\n");



  return 0;

}//end of main
