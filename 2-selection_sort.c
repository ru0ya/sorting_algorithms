#include "sort.h"

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
	size_t i, j, min_pos;

	for(i = 0; i < size - 1; i++)
	{
		min_pos = i;
		{
			for(j = i + 1; j < size; j++)
			{
				if (array[j] < array[min_pos])
					min_pos = j;
			}
			if (min_pos != i)
			{
				int temp = array[i];
				array[i] = array[min_pos];
				array[min_pos] = temp;
			}
		}
		print_array(array, size);
	}
}
