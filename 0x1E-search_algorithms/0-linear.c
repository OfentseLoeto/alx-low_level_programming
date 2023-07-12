#include <stdio.h>
#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
    if (array == NULL)
	return -1;

    unsigned int i;
    for (i = 0; i < size; i++) {
	printf("Comparing array[%u] = %d\n", i, array[i]);

    if (array[i] == value)

	return (int)i;
    }

return -1;
}
