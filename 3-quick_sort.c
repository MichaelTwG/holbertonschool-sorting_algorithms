#include "sort.h"
/**
 * quick_sort - sorts an array of integers in ascensing
 * order using the quick sort algorithm
 *
 * @array: array to search
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	int start = 0, end = size - 1;

	if (!array || size == 1)
		return;
	quicksortfunc(array, size, start, end);
}

/**
* swap - swap two fnum and snum in the array
*
* @fnum: first number to swap
* @snum: second number to swap
*/
void swap(int *fnum, int *snum)
{
	int tmp;

	tmp = *snum;
	*snum = *fnum;
	*fnum = tmp;
}

/**
* partition - use the last position of the array
* as a pivot to look for smaller numbers to swap them
*
* @array: array
* @left: first index of the array
* @right: last index of the array or pivot to use
* @size: size of the array
*
* Return: index of pivot
*/
int partition(int *array, int left, int right, int size)
{
	int pivot = array[right];
	int i = left, n = 0;

	while (i < right)
	{
		if (array[i] > pivot)
		{
			n = i + 1;
			while (n < right)
			{
				if (array[n] < pivot)
				{
					swap(&array[i], &array[n]);
					print_array(array, size);
					break;
				}
				n++;
			}
			if (pivot < array[i])
			{
				swap(&array[i], &array[right]);
				print_array(array, size);
			}
			pivot = array[right];
		}
		i++;
	}
	return (i);
}
/**
* quicksortfunc - sorts an array of integers in ascensing
* order using the quick sort algorithm
*
* @array: array
* @size: size of the array
* @left: first index of the array
* @right: last index of the array
*/
void quicksortfunc(int *array, int size, int left, int right)
{
	int part = 0;

	if (left >= right)
		return;

	part = partition(array, left, right, size);
	quicksortfunc(array, size, left, part - 1);
	quicksortfunc(array, size, part + 1, right);
}
