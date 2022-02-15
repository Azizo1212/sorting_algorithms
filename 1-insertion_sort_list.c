#include "sort.h"

/**
 * swap - swap
 * @cur: current
 * @nx: next
 * Return: none
 */

void swap(listint_t *up, listint_t *dwn)
{
	if (up->prev)
		up->prev->next = dwn;
	if (dwn->next)
		dwn->next->prev = up;
	up->next = dwn->next;
	dwn->prev = up->prev;
	up->prev = dwn;
	dwn->next = up;
}

/**
 * insertion_sort_list - insertion sort list
 *
 * @list: list
 *
 * Return: None
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *up, *dwn;

	if (!(list && (*list) && (*list)->next))
		return;
	dwn = (*list)->next;
	while (dwn)
	{
		up = dwn;
		dwn = dwn->next;
		while (up->prev)
		{
			if (up->prev->n > up->n)
			{
				swap(up->prev, up);
				if (up->prev == NULL)
					*list = up;
				print_list(*list);
			}
			else
				up = up->prev;
		}
	}
}
