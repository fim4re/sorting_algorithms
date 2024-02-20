#include "sort.h"

/**
 * swap_l - Swap two nodes in a listint_t doubly-linked list.
 * @list: the list node
 * @nd: the node
 * Return: pointer to a node
 */
void swap_l(listint_t **pr, listint_t **nd, listint_t *list)
{
	(*nd)->next = list->next;
	if (list->next)
		list->next->prev = *nd;
	list->prev = (*nd)->prev;
	list->next = *nd;
	if ((*nd)->prev)
		(*nd)->prev->next = list;
	else
		*pr = list;
	(*nd)->prev = list;
	*nd = list->prev;
}

/**
 * insertion_sort_list - func Sorts a doubly linked list of integers
 * @list: A doubly-linked list of integers.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tm, *cur;
	listint_t *cur2;

	if (list == NULL || (*list)->next == NULL)
		return;

	for (cur = (*list)->next; cur; cur = tm)
	{
		tm = cur->next;
		cur2 = cur->prev;
		while (cur2 && (cur->n < cur2->n))
		{
			swap_l(list, &cur2, cur);
			print_list((const listint_t *)*list);
		}
	}
}
