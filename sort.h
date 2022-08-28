#ifndef MAIN
#define MAIN
#include <stdlib.h>
#include <stdio.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void swap_nodes(listint_t *fnode, listint_t *snode, listint_t **list);

void swap(int *fnum, int *snum);
void quick_sort_r(int *a, size_t s, int f_s, int *f_a);
void quick_sort(int *array, size_t size);
/**
 * int partition(int *array, int left, int right, int size);
 * void quicksortfunc(int *array, int size, int left, int right);
*/
#endif
