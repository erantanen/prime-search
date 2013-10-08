#include <stdio.h>
#include "prime-print.h"

/**
 * Output version information.
 */
void version_print() {
  printf("\n prime-print v001.5 Oct,6  2013\n\n");
}

/**
 * Output helpful information for the uninformed.
 */
void help_print() {
  printf("\nprime-search:\n");
  printf("\tIt is a roughed out tool to find primes!\n");
  printf("\tmore on this when I get some times the reall hard part now starts\n ");
  printf("\ta good ref for the list is: \n");
  printf("\thttp://primes.utm.edu/lists/small/10000.txt\n\n");
}


/**
 * Output usage information.
 */
void usage_print() {
  printf("Usage:\n \tprime-search -h\n \tprime-search -s num -e num\n\n");
  printf("\t -s can never be lower than 0\n");
  printf("\tExample: prime-search -s 0 -e 100\n\n");
}

