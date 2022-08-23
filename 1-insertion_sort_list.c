#include "sort.h"
swich_nodes(listint_t *actual, listint_t *npc   )
{

}
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
		if (actual->n > (actual->next)->n)
		{
			swich_nodes(actual, actual->next);
			for (actual2 = actual; actual2; actual2 = (actual2->prev))
			{
				if (actual2->n < (actual2->prev)->n)
				{
					swich_nodes(actual, actual->prev);
				}
				else
					break;
			}
		}
	}
}
