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
 *lomuto_partition - lomuto partition sorting scheme
 *@array: array
 *@low: first array
 *@high: last array
 *@size: size
 *Return: return the position of high
 */
int lomuto_partition(int *array, int low, int high, int size)
{
	int pivot = array[high];
	int cur = low, i;

	for (i = low; i <= high - 1; i++)
	{
		if (array[i] < pivot)
		{
			if (array[cur] != array[i])
			{
				swap_i(&array[cur], &array[i]);
				print_array(array, size);
			}
			cur++;
		}
	}
	if (array[cur] != array[high])
	{
		swap_i(&array[cur], &array[high]);
		print_array(array, size);
	}
	return (cur);
}

/**
 *sort - quick sorrt
 *@array: array
 *@low: first array
 *@high: last array
 *@size: array size
 */
void sort(int *array, int low, int high, int size)
{
	if (low < high)
	{
		int pst = lomuto_partition(array, low, high, size);

		sort(array, low, pst - 1, size);
		sort(array, pst + 1, high, size);
	}
}

/**
 *quick_sort - quick sort array
 *@array: array
 *@size: size
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	sort(array, 0, size - 1, size);
}
