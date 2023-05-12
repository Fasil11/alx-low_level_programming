#include "search_algos.h"
#include <math.h>

/**
 * jump_search - performs jump search
 * @array: the integer array
 * @size: its size
 * @value: value to search for
 *
 * Return: the index found or -1
 */

int jump_search(int *array, size_t size, int value)
{
	int n = (int) size, prev = 0, step, x;

	if (array == NULL || size == 0)
		return (-1);

	if (size == 1)
		return (value == array[0] ? 0 : -1);

	step = sqrt(n);

	while (array[prev] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);

		if (step >= n - 1  || array[step] >= value)
			break;

		prev = step;
		step += sqrt(n);
	}

	printf("Value found between indexes [%d] and [%d]\n", prev, step);

	for (x = prev; x <= n - 1 && x <= step; x++)
	{
		printf("Value checked array[%d] = [%d]\n", x, array[x]);

		if (array[x] == value)
			return (x);

		if (x == n - 1)
			return (-1);
	}
	return (-1);
}
