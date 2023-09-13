#include "search_algos.h"
#include <math.h>

/**
  * jump_search - Searches for a value in a sorted array
  * -0f integers using jump search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  *              Uses the square root of the array size as the jump step.
  */
int jump_search(int *array, size_t size, int value)
{
	size_t L, m, k;

	if (array == NULL || size == 0)
		return (-1);

	k = (int)sqrt(size);
	for (L = m = 0; m < size && array[m] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", m, array[m]);
		L = m;
		m += k;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", L, m);

	m = m < size - 1 ? m : size - 1;
	for (; k <= L && value < array[L]; L++)
		printf("Value checked array[%ld] = [%d]\n", L, array[L]);
	printf("Value checked array[%ld] = [%d]\n", L, array[L]);

	return (array[L] == value ? (int)L : -1);
}
