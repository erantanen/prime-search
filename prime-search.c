#include <stdio.h>

  int main( ) {

  int count = 100;
  int result = 0;

  for(; count > 0; count--)
  {
      if((count%2) == 0)
        {
        }
        else if((count%3) == 0)
        {
        }
          else if((count%5) == 0)
          {
          }
            else
              {
                result++;
                printf("%d\t : %d\n", count, result);
              }

  }

  return 0;

}
