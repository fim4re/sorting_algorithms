#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/* Comparison direction macros for bitonic sort */
#define UP 0
#define DOWN 1

/**
 * struct listint_s - Doubly linked list
 *
 * @n: Int
 * @prev: Pointer to the previous element
 * @next: Pointer to the next element
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *next;
	struct listint_s *prev;
} listint_t;

/**
 * enum bool - Enumeration of Boolean
 * @false: Equals 0.
 * @true: Equals 1.
 */
typedef enum bool
{
	false = 0,
	true
} bool;

/* Printing functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* algoritms sorting */
void swap_i(int *a, int *b);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
listint_t *swap_l(listint_t *nd, listint_t **list);

#endif /* SORT_H */
