#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value is the value to search for
 * Return: first index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	int i = 0, begin = 0, fin = (int)size - 1, avg = 0;

	if (!array)
		return (-1);
	while (fin >= begin)
	{
		printf("Searching in array: ");
		for (i = begin; i <= fin; i++)
		{
			printf("%i", array[i]);
			if (i != fin)
				printf(", ");
			else
				printf("\n");
		}
		avg = (begin + fin) / 2;
		if (array[avg] == value)
			return (avg);
		if (value < array[avg])
			fin = avg - 1;
		else
			begin = avg + 1;
	}
	return (-1);
}
