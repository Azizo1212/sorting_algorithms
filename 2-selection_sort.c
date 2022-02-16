#include"sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * swap - function that swap tow number.
 *
 * @on: first nmber.
 * @tw: second number.
 */

void swap(int *on, int *tw)
{
	int tmp = *on;
	*on = *tw;
	*tw = tmp;
}

/**
 * selection_sort - function that sorts an array  using the Selection sort.
 *
 * @array: table of array.
 * @size: size.
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[min])
			{
				min = j;
			}
		if (min != i)
		{
			swap(&array[min], &array[i]);
			print_array(array, size);
		}
	}
}
