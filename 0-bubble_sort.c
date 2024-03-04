#include "sort.h"
#include <stdio.h>
#include <stdlib.h>


void check_swap(int *array, size_t size, size_t i)
{
	int temp;

	if (i < size)
	{
		if (array[i] > array[i + 1])
		{
			temp = array[i + 1];
			array[i + 1] = array[i];
			array[i] = temp;
			print_array(array, size);
			check_swap(array, size, i++);
		}
	}
}


/**
 * bubble_sort - sort an array by bubby sorting algorithm
 * @array: array of integers
 * @size: number of intergers in array
 *
 * Return: no return
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, t;

	if (!array)
		return;
	else if (size == 1)
		print_array(array, size);
	else
	{
		for (i = 0; i < size; i++)
		{
			t = i;
			check_swap(array, size, t);
		}
	}
}
