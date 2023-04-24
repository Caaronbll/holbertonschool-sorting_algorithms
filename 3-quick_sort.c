#include "sort.h"

/**
 * quick_sort - sorts an array
 * @array: array
 * @size: size of array
 * Return: 0
 */
void quick_sort(int *array, size_t size)
{
	size_t pivot;

	if (!array || size < 2)
		return;

	print_sort(array, size, 1);


