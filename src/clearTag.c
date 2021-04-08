#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

/**
 * Removes a tag from an array.
 * @author Whitney Holmes 3502092
 * @returns Exit Success
 */
int clearTag(char * tag, int length) {
    int i = length;

    for(i; i < length; i++) {
        *tag = '\0';
        tag++;
    }

    return EXIT_SUCCESS;
}