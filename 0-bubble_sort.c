#include "sort.h"

/**
 * swap - this function performs the
 * swapping of places in the algorithm
 *
 * @x: first integer
 *
 * @y: second integer
 */

void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * bubble_sort - this function implements
 * the bubble sort algorithm
 *
 * @array: the array to be sorted
 *
 * @size: the size of the array to be
 * sorted
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, len;
	bool swapped;

	len = size;

	for (i = 0; i < size - 1; i++)
	{
		swapped = false;
		/** Last i elements are already in place **/
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swapped = true;
			}
		}
		print_array(array, len);

		/**IF no element is swapped in the inner loop**/
		if (swapped == false)
			break;
	}
}
