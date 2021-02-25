#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

/**
 * Compares the latest addition to an array of strings to
 * check for duplicates.
 * @author Whitney Holmes 3502092
 * @returns 0 if duplicate
 * @returns 1 if not duplicate
 */
int isDuplicate(char * tagArray[], int arrayLength) {
    char * tag = tagArray + arrayLength;
    for(int index = 0; index < arrayLength -1; index++) {
        if(strcmp(tagArray, tag) == 1) 
            tagArray++
        else
            return 0;
    }
    return 1;
}