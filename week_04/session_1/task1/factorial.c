
/*
* Factorial
*/

#include <stdio.h>

int main( void ) {
   int f[20];
    
   /*
   Code to compute the factorial of each array index
   Print your final answer
   */

   for (int i =1; i<21; ++i){
      int factorial;
      for(int j=1; j<i; ++j){
         factorial = factorial * j;
      }
      f[i-1] = factorial;
      printf("%d\n", f[i-1]);
   }
   return 0;
}
