#include "sort.h"

/**
 * swap_int - this function performs the
 * swapping of places in the algorithm
 *
 * @x: first integer
 *
 * @y: second integer
 */

void swap_int(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * selection_sort - this function implements
 * the selection sort algorithm
 *
 * @array: the array to be sorted
 *
 * @size: the size of the array to be
 * sorted
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}

		if (min_idx != i)
		{
			swap_int(&array[i], &array[min_idx]);
			print_array(array, size);
		}
	}
}
