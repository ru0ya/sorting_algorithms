#include "sort.h"

/**
 * swap_ints - swap two integers in an array
 * @a: first integer to swap
 * @b: second integer to swap
 */

void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - sorts an array of integers in ascending order
 *
 * @array: list of integers to sort
 * @size: number of integers to sort
 *
 * Return: null
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int *min_pos;

	if (size < 2 || array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_pos = array + i;
		for (j = i + 1; j < size; j++)
			min_pos = (array[j] < *min_pos) ? (array + j) : min_pos;
		if ((array + i) != min_pos)
		{
			swap_ints(array + i, min_pos);
			print_array(array, size);
		}
	}
}
