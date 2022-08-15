#include "sort.h"

/**
 * quick_sort - sorts array using quick sort algorithm
 * @array: list of numbers to be sorted
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	recall_sort(array, size, 0, size - 1);
}

/**
 * recall_sort - recall function
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
 * @low: low value
 * @high: high value
 */
size_t partition(int *array, size_t size, int low, int high)
{
	int pivot = array[high];
	int i = (low - 1);
	int j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap_num(array, size, i, j);
			/*print_array(array, size);*/
		}
	}
	swap_num(array, size, i + 1, high);
	/*print_array(array, size);*/
	return (i + 1);
}

/**
 * swap_num - swap two number
 * @array: list of numbers
 * @low: first index
 * @high: second index
 */
void swap_num(int *array, size_t size, int a, int b)
{
	int tmp;
	tmp = array[a];
	array[a] = array[b];
	array[b] = tmp;
	print_array(array, size);
}
