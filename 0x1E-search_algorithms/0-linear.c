#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 * using the Linear search algorithm
 *
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value ot  search for
 *
 * Return: -1 if the value is not present in the array or if the array
 * is null, otherwise it returns the first index where the value is
 * presented.
 *
 */

int linear_search(int *array, size_t size, int value)
{
  size_t i = 0;

  if (array == NULL)
    return (-1);

  for (; i < size; i++)
  {
    printf("Value checked array[%lu] = [%d]\n", i, array[i]);
    if (array[i] == value)
      return (i);
  } return (-1);
}
