#include "sort.h"
/**
 * insertion_sort_list - isetion sort of a dubly linked list
 * @list: the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *actual, *actual2;

	if (!list)
		return;

	actual = *list;
	while(actual->next)
	{
		if (actual->n > (actual->next)->n)
		{
			swap_nodes(actual, actual->next, list);
			print_list(*list);
			actual2 = actual->prev;
			while (actual2->prev && actual2->n < (actual2->prev)->n)
			{
				swap_nodes(actual2->prev, actual2, list);
				print_list(*list);
			}	
		}
		else
			actual = actual->next;
	}
}
/**
* swap_nodes - swap given nodes
*
* @actual: actual node
* @npc: prev or next node
*/
void swap_nodes(listint_t *fnode, listint_t *snode, listint_t **list)
{
	listint_t *leftnode, *rightnode;

	if (!fnode && !snode)
		return;
	if (fnode->prev)
	{
		leftnode = fnode->prev;
		leftnode->next = snode;
		snode->prev = leftnode;
	}
	else
		snode->prev = NULL;
	if(snode->next)
	{
		rightnode = snode->next;
		fnode->next = rightnode;
		rightnode->prev = fnode;
	}
	else
		fnode->next = NULL;
	fnode->prev = snode;
	snode->next = fnode;
	
	if (fnode == *list)
		*list = snode;
}
