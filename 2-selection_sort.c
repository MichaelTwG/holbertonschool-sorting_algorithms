#include "sort.h"
/**
 * selection_sort - selector sort
 * @array: array
 * @size: size of array
 * Return: Void
*/
void selection_sort(int *array, size_t size)
{
<<<<<<< HEAD
	int max, i, j, tmp;
=======
	int min, i, j, tmp;
>>>>>>> ab3fd961553b14a598c61445a88f9f4db82ee55c

	if (!array)
		return;

	for (i = 0; i < (int)size; i++)
	{
<<<<<<< HEAD
		tmp = i;
=======
    tmp = i;
>>>>>>> ab3fd961553b14a598c61445a88f9f4db82ee55c
		for (j = i + 1; j < (int)size; j++)
		{
			if (array[tmp] > array[j])
			{
				tmp = j;
			}
<<<<<<< HEAD
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
=======
    }
    if(array[tmp] < array[i])
    {
      min = array[i];
      array[i] = array[tmp];
      array[tmp] = min;
      tmp = 0;
      mim = 0;
    }
>>>>>>> ab3fd961553b14a598c61445a88f9f4db82ee55c
	}
}
