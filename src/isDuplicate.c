#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

/**
 * Compares an array of strings to itself to check for duplicates.
 * @author Whitney Holmes 3502092
 * @returns 0 if duplicate
 * @returns 1 if not duplicate
 */
int isDuplicate(char ** tagArray, int numberOfTags) {
    char * newTag = &tagArray[numberOfTags][0];
    int i;
    char * tagPointer;

    //Loop through the list of tags to check for a match
    for(i = 0; i < numberOfTags; i++) {
        tagPointer = &tagArray[i][0];

        if(strcmp(tagPointer, newTag) == 0) { //True
            int length = sizeof tagArray[i] / sizeof tagArray[i][0]; //Length of tag
            return 0;
        }
    }
    return 1; //Return false if distinct
}