#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array to seach through
 * @size: size of array
 * @cmp: function used to compare
 * Return: first index for witch cmp
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, r;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			r = cmp(array[i]);
			if (r)
				break;
		}
		if (i < size)
			return (i);
	}
	return (-1);
}
