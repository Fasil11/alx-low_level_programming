#include "search_algos.h"

/**
 * interpolation_search - performs jump search
 * @array: the integer array
 * @size: its size
 * @value: value to search for
 *
 * Return: the index found or -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high, mid;

	if (array == NULL)
		return (-1);

	high = size - 1;
	mid = low + (((double)(high - low) / (array[high] - array[low]))
		     * (value - array[low]));

	while (array[high] != array[low] && value >= array[low] && value <=
	       array[high])
	{
		mid = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));

		printf("Value checked array[%d] = [%d]\n", (int) mid,
		       array[mid]);

		if (value == array[mid - 1])
			return ((int) mid - 1);

		else if (value == array[mid])
			return ((int) mid);

		else if (value < array[mid])
			high = mid - 1;

		else
			low = mid + 1;
	}

	if (value == array[low])
		return ((int) low);

	printf("Value checked array[%d] is out of range\n", (int) mid);

	return (-1);
}
