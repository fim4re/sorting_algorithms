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
 * bubble_sort - sort an array in ascending order
 * @array: array of integaers
 * @size: size of array
 *
 * Return: return the array
*/
void bubble_sort(int *array, size_t size)
{
	bool bubl = false;
	size_t j, i;
	size_t tmp = size;

	if (array == NULL || size < 2)
		return;

	while (bubl == false)
	{
		bubl = true;
		for (i = 0; i < tmp - 1; i++)
		{
			for (j = 1; j < tmp; j++)
			{
				if (array[j - 1] > array[j])
				{
					swap_i(&array[j], &array[j - 1]);
					print_array(array, size);
					bubl = false;
				}
			}
		}
		tmp--;
	}
}
