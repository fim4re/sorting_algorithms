#include <stdio.h>
#include "sort.h"

/**
 * print_list - Print a list of int
 * @list: The list
*/
void print_list(const listint_t *list)
{
	int j = 0;

	while (list != NULL)
	{

		if (j > 0)
			printf(", ");
		printf("%d", list->n);
		++j;
		list = list->next;
	}
	printf("\n");
}
