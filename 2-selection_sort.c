#include "sort.h"

/**
 * swap_i - swap two int
 * @a: first int
 * @b: second int
*/
void swap_i(int *a, int *b)
{
        int temp = *a;

        *a = *b;
        *b = temp;
}

/**
 * selection_sort - Sort an array of integers in ascending
 * @array: An array int
 * @size: size of array.
 *
 * Description: Prints the array after each swap.
*/
void selection_sort(int *array, size_t size)
{
	int *min_indx;
	size_t i, j;


	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_indx = array + i;
		for (j = i + 1; j < size; j++)
			if (array[j] < *min_indx)
				min_indx = array + j;
		if ((array + j) != min_indx)
		{
			swap_i(array + i, min_indx);
			print_array(array, size);
		}
	}
}
