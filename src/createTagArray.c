#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

/**
 * Creates a 2D dynamically allocated array.
 * @author Whitney Holmes - 3502092
 * @param rows the length of the 1st dimension
 * @param cols the length of the 2nd dimension
 * @returns a 2D char pointer
 */
char ** createTagArray(int rows, int cols) {
    int i;
    char ** tagArray = malloc(rows * sizeof (char *)); //1st dimension allocation/

    for(i = 0; i < rows; i++) {
        tagArray[i] = malloc(cols * sizeof(char)); //2nd dimension allocation/
    }

    return tagArray;
}