#include "sort.h"

/**
 * quick_sort - sorts array using quick sort algorithm
 * @array: list of numbers to be sorted
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	recall_sort(array, size, 0, size - 1);
}

/**
 * recall_sort - recall function
 * @array: list of numbers
 * @size: size of list
 * @low: least index
 * @high: max index
 */
void recall_sort(int *array, size_t size, int low, int high)
{
	int pi;

	if (low < high)
	{
		pi = partition(array, size, low, high);
		recall_sort(array, size, low, pi - 1);
		recall_sort(array, size, pi + 1, high);
	}
}

/**
 * partition - partitions for sorting
 * @array: list of numbers
 * @size: size of array
 * @low: low value
 * @high: high value
 *
 * Return: the pivot
 */
size_t partition(int *array, size_t size, int low, int high)
{
	int i, j, pivot = array[high];

	i = low - 1;
	for (j = low; j <= high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap_num(array, size, i, j);
		}
	}
	swap_num(array, size, i + 1, high);
	return (i + 1);
}

/**
 * swap_num - swap two number
 * @array: list of numbers
 * @size: size of array
 * @a: first index
 * @b: second index
 */
void swap_num(int *array, size_t size, int a, int b)
{
	int tmp;

	if (array[a] != array[b])
	{
		tmp = array[a];
		array[a] = array[b];
		array[b] = tmp;
		print_array(array, size);
	}
}
