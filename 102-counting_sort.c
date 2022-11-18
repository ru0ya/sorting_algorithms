#include "sort.h"

/**
  * counting_sort - Afunction that sorts an array using counting algorithm.
  * @array: The array to sort.
  * @size: The length of the array.
  * Return: Nothing.
  */
void counting_sort(int *array, size_t size)
{
	unsigned int a = 1;
	int *counter = NULL, k = 0, b = 0;

	if (array == NULL || size < 2)
		return;

	k = array[0];
	for (; a < size; a++)
	{
		if (array[a] > k)
			k = array[a];
	}

	counter = malloc(sizeof(int) * (k + 1));
	if (counter == NULL)
		return;

	for (b = 0; b <= k; b++)
		counter[b] = 0;
	for (a = 0; a < size; a++)
		counter[array[a]] += 1;
	for (b = 0; b < k; b++)
	{
		counter[b + 1] += counter[b];
		printf("%d, ", counter[b]);
	}
	counter[b + 1] += counter[b];
	printf("%d\n", counter[b + 1]);
	for (a = 0; a < size; a++)
	{
		b = counter[array[a]] - 1;
		if (array[a] != array[b])
		{
			k = array[a];
			array[a] = array[b];
			array[a] = k;
		}
	}
	free(counter);
}
