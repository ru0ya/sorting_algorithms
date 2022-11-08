#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order
 *
 * @size: length of array to sort
 * @array: list of integers to sort
 *
 * Return: null
 */

void quick_sort(int *array, size_t size)
{
	size_t i, j, pivot, low, high;


	pivot = array[high];
	i = low - 1;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			int temp = array[low]
		}
	}
	swap(array[i + 1], array[high]);
	print_array(array, size);
}
