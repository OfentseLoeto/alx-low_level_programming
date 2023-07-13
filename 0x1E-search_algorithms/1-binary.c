#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - recursive algorithm
 * @array: An array to search
 * @size: Size of the array
 * @value: The value to search for
 *Return: The index value
 */

int binary_search(int *array, size_t size, int value)
{
int low = 0;
int high = (int)size - 1;
int i;

if (array == NULL)
{
return (-1);
}

while (low <= high)
{
	int mid = low + (high - low) / 2;

	printf("Searching in array: ");

for (i = low; i <= high; i++)
{
	printf("%d", array[i]);
if (i != high)
{
printf(", ");
}
}
printf("\n");

if (array[mid] == value)
{
return (mid);
}
else if (array[mid] < value)
{
low = mid + 1;
}
else
{
high = mid - 1;
}
}
return (-1);
}
