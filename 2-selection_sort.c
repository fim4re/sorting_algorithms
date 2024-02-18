#include "sort.h"

/**
 * selection_sort - Sort an array of integers in ascending
 * @array: An array int
 * @size: size of array.
 *
 * Description: Prints the array after each swap.
*/
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i, j;


	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[min])
				min = j;
		if (min != i)
		{
			swap_i(array[min], array[i])
			print_array(array, size);
		}
	}
}
