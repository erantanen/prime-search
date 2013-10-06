#include <stdio.h>
#include "prime-print.h"

/**
 * Output version information.
 */
void version_print() {
  printf("\n prime-print v001.1 Oct,6  2013\n\n");
}

/**
 * Output helpful information for the uninformed.
 */
void help_print() {
  printf("blah help\n");
}


/**
 * Output usage information.
 */
void usage_print() {
  printf("Usage:\n \tprime-search -h\n \tprime-search -s num -e num\n\n");
  printf("\t -s can never be lower than 0\n");
  printf("\tExample: prime-search -s 0 -e 100\n\n");
}

