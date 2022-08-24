#include "sort.h"
/**
 * selection_sort - selector sort
 * @array: array
 * @size: size of array
 * Return: Void
*/
void selection_sort(int *array, size_t size)
{
	int max, i, j, tmp;

	if (!array)
		return;

	for (i = 0; i < (int)size; i++)
	{
		tmp = i;
		for (j = i + 1; j < (int)size; j++)
		{
			if (array[tmp] > array[j])
			{
				tmp = j;
			}
		}
		if (array[tmp] < array[i])
		{
			max = array[i];
			array[i] = array[tmp];
			array[tmp] = max;
			tmp = 0;
			max = 0;
			print_array(array, size);
		}
	}
}
