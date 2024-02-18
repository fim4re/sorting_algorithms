#include "sort.h"

/**
 * swap_l - Swap two nodes in a listint_t doubly-linked list.
 * @list: the list node
 * @nd: the node
 * Return: pointer to a node
 */
listint_t *swap_l(listint_t *nd, listint_t **list)
{
	listint_t *pr = nd->prev, *cur = nd;

	pr->next = cur->next;
	if (cur->next != NULL)
		cur->next->prev = pr;
	cur->prev = pr->prev;
	cur->next = pr;
	pr->prev = cur;
	if (cur->prev != NULL)
		cur->prev->next = cur;
	else
		*list = cur;
	return (cur);
}

/**
 * insertion_sort_list - func Sorts a doubly linked list of integers
 * @list: A doubly-linked list of integers.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *nd = (*list)->next;

	if (list == NULL || nd == NULL)
		return;

	while (nd != NULL)
	{
		while ((nd->prev) && (nd->prev->n > nd->n))
		{
			nd = swap_l(nd, list);
			print_list((const listint_t *)*list);
		}
		nd = nd->next;
	}
}
