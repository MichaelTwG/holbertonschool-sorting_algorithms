#include "sort.h"

/**
* bubble_sort - Sorts an array of integers in ascending order
* using the Bubble sort algorithm
*
* @array: array to sort
* @size: size of the array
*/
void bubble_sort(int *array, size_t size)
{
	int tmp;
	size_t i, j = 0;

	if (!array)
		return;
	while (j < size)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = tmp;
				print_array(array, size);
			}
		}
		j++;
	}
}
