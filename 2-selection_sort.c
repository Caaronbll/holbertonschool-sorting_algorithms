#include "sort.h"

/**
 * selection_sort - Calls function
 * @array : array
 * @size: size of array
 * Return: 0
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min_idx;
	int temp;

	if (!array)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[min_idx])
				min_idx = j;

		if (i != min_idx)
		{
			temp = array[i];
			array[i] = array[min_idx];
			array[min_idx] = temp;
			print_array(array, size);
		}
	}
}
