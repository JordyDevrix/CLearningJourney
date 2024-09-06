
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

    return 0;
}

