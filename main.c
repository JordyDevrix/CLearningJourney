#include <stdio.h>
#include <stdlib.h>

#include "firstheader.h"
#include "mallocchecker.h"

int main() {
    checkMalloc();
    
    int val = addTenToVal(5);
    printf("Value: %d\n", val);
}

