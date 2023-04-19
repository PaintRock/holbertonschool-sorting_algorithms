#include "sort.h"
/**
 * bubble_sort -- sorting algorithm
 *@array: the array to be sorted
 *@size: the size of the array
 *Return: void
 */
void bubble_sort(int *array, size_t size)
{
	int i = 0;
	int j = size - 1;
	int temp = 0;

	if (!array || size == 0)
		return;
	while (j)
	{
		for (i = 0; i < j; i++)
		{
			temp = array[i];
			if (temp > array[i + 1])
			{
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
		j -= 1;
	}
}
