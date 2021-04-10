#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

/**
 * Clears a 2D dynamically allocated array
 * from memory
 * @author Whitney Holmes 3502092
 * @returns EXIT_SUCCESS
 */
int clearTagArray(char ** tagArray, int tagIndex) {
    int i;

    int length = tagIndex;
    //printf("tagIndex = %d\n", tagIndex);
    //printf("rows = %d\n", ROWS);
    
    if(tagIndex < ROWS) {
        length = ROWS;
    }
    else if(tagIndex >= ROWS) {
        length = tagIndex;  
    }

    for(i = 0; i < length; i++) {
        free(tagArray[i]);
        //printf("free: %d/%d\n", i, length);
    }
    
    free(tagArray);

    return 0;
}