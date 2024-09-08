
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "firstheader.h"
#include "mallocchecker.h"
#include "strconc.h"

int main() {
    // Check if malloc works
    checkMalloc();

    // Check if I can add 10 to a value
    int val = addTenToVal(5);
    printf("Value: %d\n", val);

    // Check if I can concatenate strings
    char firstString[] = "Hello";
    char secondString[] = " World";

    char *myConcatenatedString = concatenateStrings(firstString, secondString);
    printf("Concatenated string before free'ing: %s\n", myConcatenatedString);
    free(myConcatenatedString);
    printf("Concatenated string after free'ing: %s\n", myConcatenatedString);
    myConcatenatedString = NULL;
    printf("Concatenated string after assigning NULL value: %s\n", myConcatenatedString);
    
    char *wordOne = "Hello";
    char *wordTwo = " World";

    char *arr[] = {wordOne, wordTwo};

    arr[0] = wordOne;
    arr[1] = wordTwo;

    printf("elements: %d\n", sizeof(arr[0]));

    int *sizeOfArray = malloc(sizeof(int));
    *sizeOfArray = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < *sizeOfArray; i++) 
    {
        printf("%s\n", arr[i]);
    }
    
    printf("Size of array before free'ing: %d\n", *sizeOfArray);
    free(sizeOfArray);
    printf("Size of array after free'ing: %d\n", *sizeOfArray);

    return 0;
}

