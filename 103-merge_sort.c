#include "sort.h"

void merge_subarr(int *subarr, int *buff, size_t front, size_t mid,
		size_t back);
void merge_sort_recursive(int *subarr, int *buff, size_t front, size_t back);
void merge_sort(int *array, size_t size);

/**
 * merge_subarr - Sort a sub_array of int
 * @subarr: A sub_array of an array of int.
 * @buff: buffer.
 * @front: The frnt index.
 * @mid: The mid index.
 * @back: The back index.
 */
void merge_subarr(int *subarr, int *buff, size_t front, size_t mid,
		size_t back)
{
	size_t a, b, k = 0;

	printf("Merging...\n[left]: ");
	print_array(subarr + front, mid - front);

	printf("[right]: ");
	print_array(subarr + mid, back - mid);

	for (a = front, b = mid; a < mid && b < back; k++)
		buff[k] = (subarr[a] < subarr[b]) ? subarr[a++] : subarr[b++];
	for (; a < mid; a++)
		buff[k++] = subarr[a];
	for (; b < back; b++)
		buff[k++] = subarr[b];
	for (a = front, k = 0; b < back; a++)
		subarr[a] = buff[k++];

	printf("[Done]: ");
	print_array(subarr + front, back - front);
}

/**
 * merge_sort_recursive - Implement the merge_sort algo via recursn.
 * @subarr: A sub_array of an array of int.
 * @buff: A buffer.
 * @front: The frnt index of the sub_array.
 * @back: The back index of the sub_array.
 */
void merge_sort_recursive(int *subarr, int *buff, size_t front, size_t back)
{
	size_t mid;

	if (back - front > 1)
	{
		mid = front + (back - front) / 2;
		merge_sort_recursive(subarr, buff, front, mid);
		merge_sort_recursive(subarr, buff, mid, back);
		merge_subarr(subarr, buff, front, mid, back);
	}
}

/**
 * merge_sort - Sort an array of integers in asc.order.
 * @array: An array of int.
 * @size: The sizeof the array.
 *
 * Description: Implements the top-down merge sort algo.
 */
void merge_sort(int *array, size_t size)
{
	int *loca;

	if (array == NULL || size < 2)
		return;

	loca = malloc(sizeof(int) * size);
	if (loca == NULL)
		return;

	merge_sort_recursive(array, loca, 0, size);

	free(loca);
}
