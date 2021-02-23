#include string.h
#include stdio.h
#include stdlib.h

/**
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