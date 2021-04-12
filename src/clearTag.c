#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

/**
 * Removes a tag from an dynamically allocated array.
 * Reallocates a new row in it's place.
 * @author Whitney Holmes 3502092
 * @param tag a pointer to a row in a 2D array.
 * @returns New Address of tag
 */
char * clearTag(char * tag) {
    free(tag);
    
    //Reallocate the row
    tag = malloc(COLS * sizeof(char));

    return tag;
}