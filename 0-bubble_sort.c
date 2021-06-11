#include "sort.h"

/**
 * bubble_sort - compares adjacent elements and swaps them
 * @array: array
 * @size: size of the array
 * Return: Void
 */
void bubble_sort(int *array, size_t size)
{
	int swap;
	unsigned int i, j;

	if (size <= 2)
			return;
	for (i = 0; i <= size; i++)
	{
		if (array[i] || array[i + 1])
		{
			for (j = 0; j <= size; j++)
			{
				if (array[j] || array[j + 1])
				{
					if (array[j] > array[j + 1])
					{
						swap = array[j];
						array[j] = array[j + 1];
						array[j + 1] = swap;
						print_array(array, size);
					}
					else
					{
						break;
					}
				}
			}
		}
	}



}
