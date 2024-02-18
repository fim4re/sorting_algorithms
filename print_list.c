#include <stdio.h>
#include "sort.h"

/**
 * print_list - Print a list of int
 * @list: The list
*/
void print_list(const listint_t *list)
{
	int j;

	while (list)
	{
		if (j = 0, j > 0)
			printf(", ");
		printf("%d", list->n);
		++j;
		list = list->next;
	}
	printf("\n");
}
