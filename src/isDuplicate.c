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
    //("\tisDuplicate called\n");
    char * newTag = &tagArray[numberOfTags][0];
    int i;
    char * tagPointer;
    //printf("newTag = %s\n", tagArray[numberOfTags -1][0]);
    //Loop through the list of tags to check for a match
    //printf("\tNumber of tag ---> %d\n", numberOfTags);
    //printf("\tnewTag = %s\n", tagArray[numberOfTags]);
    for(i = 0; i < numberOfTags; i++) {
        printf("\tisDublicate: Loop0\n");
        tagPointer = &tagArray[i][0];
        //printf("\ttagPointer = %s\n", tagArray[i]);
        if(strcmp(tagPointer, newTag) == 0) { //True
            int length = sizeof tagArray[i] / sizeof tagArray[i][0];
            clearTag(newTag, length); //Remove the tag
            return 0;
        }
    }
    return 1; //Return false if distinct
}