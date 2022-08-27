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

void swap(int *fnum, int *snum)
{
	int tmp;

	tmp = *snum;
	*snum = *fnum;
	*fnum = tmp;
}

int partition(int *array, int left, int right, int size)
{
	int pivot = array[right];
	int i = left, n = 0;

/**	printf("left: >>%d<<\n", left);
*	printf("right >>%d<<\n", right);
*	printf("partition\n");
*/
	while (i < right)
	{
/**		printf("pivot: >>%d<<\n", pivot);
*		printf("n: >>%d<<\n", n);
*		printf("i: >>%d<<\n", i);
*		printf("array[i]: >>%d<<\n", array[i]);
*		printf("right: >>%d<<\n\n\n", right);
*/
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

void quicksortfunc(int *array, int size, int left, int right)
{
	int part = 0;

	if (left >= right)
		return;

	part = partition(array, left, right, size);
	quicksortfunc(array, size, left, part - 1);
	quicksortfunc(array, size, part + 1, right);
}
