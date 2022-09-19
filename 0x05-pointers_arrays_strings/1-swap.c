#include "main.h"

/**
 * writes a function that swaps value of two integers.
 *
 * prototype:  void swap_int(int *a, int *b);
 *
 * return 0;
 */

void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a =  *b;
      	*b = temp;
}
