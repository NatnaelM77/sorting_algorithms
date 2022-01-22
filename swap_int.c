#include "sort.h"

/**
 * swapInt - swap two int
 *
 * @x: int to be swapped
 * @y: int to be swapped
 */

void swapInt(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}