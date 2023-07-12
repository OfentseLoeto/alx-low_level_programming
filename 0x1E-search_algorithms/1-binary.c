#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
    int low, high, mid;
    size_t i;

    if (array == NULL)
        return -1;

    int low = 0;
    int high = (int)size - 1;

    while (low <= high) {
        mid = low + (high - low) / 2;
        printf("Searching in array: ");

	for (i = 0; i < size; i++) {
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
