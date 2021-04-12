#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

/**
 * Creates a new array + ROWS more rows.
 * Clears the array passed from memory.
 * @author Whitney Holmes 3502092
 * @param tagArray a 2D dynamically allocated array pointer.
 * @param length the amount of rows to extend by.
 * @returns Address of new tag array.
 */
char ** extendArray(char ** tagArray, int length) {
    int newLength = length + ROWS;
    char ** newArray = createTagArray(newLength, COLS);
    int i, j;

    //Copy the old rows to the new rows.
    for(i = 0; i < length; i++) {
        for(j = 0; j < COLS; j++) {
            newArray[i][j] = tagArray[i][j]; //Copy
        }
    }

    clearTagArray(tagArray, length);
    
    return newArray;
}