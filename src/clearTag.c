#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

/**
 * Removes a tag from an dynamically allocated array.
 * @author Whitney Holmes 3502092
 * @returns New Address of tag
 */
char * clearTag(char * tag) {
    free(tag);
    
    //Reallocate
    tag = malloc(COLS * sizeof(char));

    return tag;
}