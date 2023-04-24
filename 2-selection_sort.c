#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

/**
 * selection_sort - sort an array using a selection sort algorithm
 * @array: pointer to an array
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	int index, temp, lo;
	size_t i, pos;

	index = temp = lo = 0;

	if (!array || size == 0)
		return;

	while (index < (int) size - 1)
	{
		temp = lo = array[index];
		for (i = index; i < size; i++)
		{
			if (array[i] < lo)
			{
				lo = array[i];
				pos = i;
			}

		}

		if (lo < array[index])
		{
			array[index] = lo;
			array[pos] = temp;
			print_array(array, size);
		}

		index++;
	}
}
