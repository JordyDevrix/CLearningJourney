#include <stdio.h>
#include <stdlib.h>
#include "newheader.h"


int main() {
    // char *newValue = returnHello("5");
    // printf("%d", newValue);

    // char *mpPtr = "Hello!";
    // printf("%p", mpPtr);

    while (1) {
        malloc(1);
    }
}

// int main() {
//     // Number of elements in the array
//     size_t num_elements = 5;

//     // Allocate memory for an array of integers
//     int *array = (int *)malloc(num_elements * sizeof(int));
    
//     // Check if malloc succeeded
//     if (array == NULL) {
//         printf("Memory allocation failed\n");
//         return 1;  // Exit the program with an error code
//     } else {
//         printf("Memory allocation succeeded\n");
//     }

//     // Free the allocated memory
//     free(array);

//     return 0;  // Exit the program successfully
// }