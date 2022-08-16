#include "sort.h"

/**
 * insertion_sort_list - sorts using insertion sort
 * @list: linked list array
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *node, *next_node, *tmp_nxt, *tmp_prev;

	if (list == NULL || (*list)->next == NULL)
		return;

	node = *list;
	node = node->next;
	while (node)
	{
		temp = node;
		next_node = node->next;
		tmp_nxt = temp->next;
		tmp_prev = temp->prev;

		while (temp->prev && tmp_prev->n > temp->n)
		{
			if (tmp_nxt)
				tmp_nxt->prev = tmp_prev;
			tmp_prev->next = tmp_nxt;
			if (tmp_prev->prev == NULL)
			{
				tmp_prev->prev = temp;
				*list = temp;
				temp->prev = NULL;
			}
			else
			{
				temp->prev = tmp_prev->prev;
				tmp_prev->prev->next = temp;
				tmp_prev->prev = temp;
			}
			temp->next = tmp_prev;
			tmp_prev = temp->prev;
			tmp_nxt = temp->next;
			print_list(*list);
		}
		node = next_node;
	}
}
