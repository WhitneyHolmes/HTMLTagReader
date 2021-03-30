#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

#define COLS 10
/**
 * Compares an array of strings to itself to check for duplicates.
 * Clears the tag if it is a duplicate
 * @author Whitney Holmes 3502092
 * @returns 0 if duplicate
 * @returns 1 if not duplicate
 */
int clearTag(char * tag, int length) {
    int i = length;

    for(i; i < length; i++) {
        *tag = '\t';
        tag++;
    }

    return 0;
}