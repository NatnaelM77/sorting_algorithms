#include "sort.h"

/**
  * bubble_sort - sort algorithm
  *
  * @array: array
  * @size: size of the array
  */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swapInt(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}