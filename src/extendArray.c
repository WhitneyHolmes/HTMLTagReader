#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

/**
 * Creates a new array n times bigger than
 * the array passed.
 * Clears the array passed from memory.
 * @author Whitney Holmes 3502092
 * @returns Address of new tag array.
 */
char ** extendArray(char ** tagArray, int length) {
    printf("Extending array\n");
    int newLength = length + ROWS;
    char ** newArray = createTagArray(newLength, COLS);
    int i, j;
    for(i = 0; i < length; i++) {
        for(j = 0; j < COLS; j++) {
            newArray[i][j] = tagArray[i][j]; //Copy
        }
    }
    //clearTagArray(tagArray, *length);
    //length = &newLength;
    //printf("Length: %d\n", length);
    return newArray;
}