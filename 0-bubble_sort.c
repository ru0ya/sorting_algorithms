#include "sort.h"


/**
 * swap_ints - swaps two integers in an array
 *@a: first integer to swap
 *@b: second integer to swap
 *
 */

void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - sorts an array of integers in ascending order
 *@size: size of list
 *@array: list to sort
 *
 * Returns: null
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;


	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];

				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
