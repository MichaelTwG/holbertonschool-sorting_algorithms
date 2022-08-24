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

	for (actual = (*list); actual; actual = (actual->next))
	{
		printf("adelante\n");
		if (actual->n > (actual->next)->n)
		{
			swap_nodes(actual, actual->next);
			for (actual2 = actual; actual2; actual2 = (actual2->prev))
			{
				printf("atras\n");
				if (actual2->n < (actual2->prev)->n)
					swap_nodes(actual2, actual2->prev);
				else
					break;
			}
		}
		print_list(*list);
	}
}
/**
* swap_nodes - swap given nodes
*
* @actual: actual node
* @npc: prev or next node
*/
void swap_nodes(listint_t *fnode, listint_t *snode)
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
}
