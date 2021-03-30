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
int isDuplicate(char tagArray[][COLS + 1], int numberOfTags) {
    char * tag = tagArray[0][0];
    char * newTag = tagArray[numberOfTags -1][0];
    int i;

    for(i = 0; i < numberOfTags -1; i++) {
        if(strcmp(tag, newTag) == 1) { //Not duplicate
            tag++;
        }
        else {
            clearTag(tag, COLS);
            return 0; //true 
        }
    }
    return 1; //Return false if distinct
}