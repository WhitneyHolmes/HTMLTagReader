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
int isDuplicate(char * charArray[], char * tagArray[], int arrayLength) {
    char * tag = charArray[0]; //Tag to check
    //Loop through the array
    for(int index = 0; index < arrayLength -1; index++) {
        if(strcmp(tagArray[index], tag) == 0) {
             return 0; //If duplicate, return true
        }
    }
    return 1; //Return false
}