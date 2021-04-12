#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

/**
 * Clears a 2D dynamically allocated array
 * from memory.
 * @author Whitney Holmes 3502092
 * @param tagArray a pointer to a 2D dynamic char array/
 * @param length the length of the 1st dimension of the array.
 * @returns 0
 */
int clearTagArray(char ** tagArray, int length) {
    int i;

    //Free the 2nd dimension.
    for(i = 0; i < length; i++) {
        free(tagArray[i]);
    }
    
    //Free the 1st dimension.
    free(tagArray);

    return 0;
}