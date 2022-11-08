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
	listint_t *i, *j, *size;

	for (i = 1; i < size; i++)
	{
		int temp = list[i];
		j = (i-1);

		while (j >= 0 && temp > list[j])
		{
			list[j + 1] = list[j];
			j = j - 1;
		}
		list[j + 1] = temp;
		print_list;
	}
}
