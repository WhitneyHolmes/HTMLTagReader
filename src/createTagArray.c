#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

/**
 * Creates a 2D dynamically allocated array
 * @author Whitney Holmes - 3502092
 * @returns a 2D char pointer
 */
char ** createTagArray(int rows, int cols) {
    int i;
    char ** tagArray = malloc(rows * sizeof (char *));

    for(i = 0; i < rows; i++) {
        tagArray[i] = malloc(cols * sizeof(char));
    }

    return tagArray;
}