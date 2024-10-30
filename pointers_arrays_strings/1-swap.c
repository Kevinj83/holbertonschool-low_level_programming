#include "main.h"

/**
 *swap_int - swaps the values of two intergers
 *@a: first interger being swapped
 *@b: second interger being swapped
 */

void swap_int(int *a, int *b)

{
	int tmp = *a;

	*a = *b;

	*b = tmp;
}
