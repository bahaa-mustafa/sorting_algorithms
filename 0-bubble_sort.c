#include "sort.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * check_swap - get swap to numbers
 * @array: array of integers
 * @size: number of intergers in array
 * @i: index of swap
 *
 * Return: no return
 */
void check_swap(int *array, size_t size, size_t i)
{
	int temp;

	if (i + 1 < size)
	{
		while (array[i] > array[i + 1] && i + 1 < size)
		{
			temp = array[i + 1];
			array[i + 1] = array[i];
			array[i] = temp;
			print_array(array, size);
			check_swap(array, size, i++);
		}
		/*printf("--------array:%ld------------\n", i);*/
	}
	/*printf("--------size:%ld------------\n", i);*/
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
	size_t i;

	if (!array)
		return;
	if (size == 1)
		print_array(array, size);
	else
	{
		i = 0;
		while (i < size)
		{
			if (array[i] > array[i + 1])
			{
				check_swap(array, size, i);
				i = 0;
			}
			i++;
			if (array[i - 1] > array[i])
			{
				check_swap(array, size, i - 1);
				i = 0;
			}
		}
	}
}
