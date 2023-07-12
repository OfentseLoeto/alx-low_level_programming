#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - recursive algorithm
 * @array: An array to search
 * @value: The value to search for
 * Return: The index value 
 */

int binary_search(int *array, size_t size, int value)
{
    if (array == NULL)
	return -1;

    int low = 0;
    int high = int(size) - 1;
    int mid;

    while (low <= high) {
        mid = low + (high - low) / 2;
        printf("Searching in array: ");
	size_t i;

	for (size_t i = 0; i < size; i++) {
            printf("%d", array[i]);
            if (i != size - 1)
                printf(", ");
        }
        printf("\n");

        if (array[mid] == value)
            return mid;
        else if (array[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
