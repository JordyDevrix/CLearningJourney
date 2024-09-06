#ifndef MALLOC_CHECKER_H
#define MALLOC_CHECKER_H

#include<stdio.h>
#include<stdlib.h>


int checkMalloc() {
    // Number of elements in the array
    size_t num_elements = 5;

    // Allocate memory for an array of integers
    int *array = (int *)malloc(num_elements * sizeof(int));
    
    // Check if malloc succeeded
    if (array == NULL) {
        printf("Memory allocation failed\n");
        return 1;  // Exit the program with an error code
    } else {
        printf("Memory allocation succeeded\n");
    }

    // Free the allocated memory
    free(array);

    return 0;  // Exit the program successfully
}

#endif