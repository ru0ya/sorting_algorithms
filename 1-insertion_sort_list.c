#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 *
 * @list: doubly linked list to sort
 *
 * Return: null
 */

void insertion_sort_list(listint_t **list)
{
	size_t i, j, size;

	for (i = 0; i < size; i++)
	{
		int temp = list[i];
		j = (i-1);

		while (j >= 0 && temp[j] > temp)
		{
			list[j + 1] = list[j];
			j = j - 1;
		}
		list[j + 1] = temp;
		print_list;
	}
}
