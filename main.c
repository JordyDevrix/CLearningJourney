#include <stdio.h>
#include <stdlib.h>

#include "firstheader.h"
#include "mallocchecker.h"
#include "stringConcatenation.h"

int main() {
    // Check if malloc works
    checkMalloc();

    // Check if I can add 10 to a value
    int val = addTenToVal(5);
    printf("Value: %d\n", val);

    // Check if I can concatenate strings
    char *myConcatenatedString = concatenateStrings("Hello", " World");
    printf("Concatenated string: %s\n", myConcatenatedString);

    return 0;
}

