
/*
 * Factorial
 */

 #include <stdio.h>

 int main( void ) {
    int f[20];
    int i;

    f[0] = 1;

    for (i = 1; i < 20; i++) {
      f[i] = i * f[i - 1];
    }
    for (i = 0; i< 20; i++) {
      printf("%2d! = %d\n", i, f[i]);
    }

    /*
    Code to compute the factorial of each array index
    Print your final answer
    */
    return 0;
 }
