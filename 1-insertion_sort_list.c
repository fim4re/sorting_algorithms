#include "sort.h"

/**
 * swap_l - Swap two nodes in a listint_t doubly-linked list.
 * @list: the list node
 * @node: the node
 * Return: pointer to a node
 */
void swap_l(listint_t **list, listint_t *node)
{
	listint_t *pr = node->prev, *cur = node;

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
	listint_t *cur = (*list)->next;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	while (cur)
	{
		while ((cur->prev) && (cur->prev->n > cur->n))
		{
			cur = swap_l(cur, list);
			print_list(*list);
		}
		cur = cur->next;
	}
}
