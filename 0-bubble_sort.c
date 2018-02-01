#include "sort.h"

/**
 * bubble_sort - sorts an array of integers and prints after swaps
 * Return: function returns void
 * @array: array of integers to be sorted
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{

	size_t i, j, temp;

	if (array == NULL)
		return;

	temp = 0;
	for (i = 0; i < size - 1; i++)
		for (j = 0; j < size - i - 1; j++)
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
}
